//
// Created by alex on 01.09.2023.
//
# include "Utilities.h"
# include "Client.h"
# include "StringsSQL.h"
# include "FunctionsSQL.h"
# include <string>
# include <sqlite3.h>
# include <iostream>

std::string str1;
sqlite3 *data1;
Cont cont1;
std::string adresa, numarDeTelefon,parola;

static int callback(void *client, int count,char **date, char **column)
{
    Client *cl = (Client*)client;
    if(column[1]&&date[1]&&column[4]&&date[4])
    {
        cl->setCnp(date[0]);
        cl->setNume(date[1]);
        cl->setAdresa(date[2]);
        cl->setNumarDeTelefon(date[3]);
        cl->setParola(date[4]);
        return 1;
    }
    else
    {
        return 0;
    }
}

static int callback1(void *cont, int count,char **date, char **column)
{
    Cont *cnt = (Cont*)cont;
    if(column[0]&&column[1]&&column[2])
    {
        cnt->setNumarCont(date[0]);
        cnt->setClientCnp(date[1]);
        cnt->setSold(atoi(date[2]));
        return 1;
    }
    else
    {
        return 0;
    }
}

void vizualizareDetalii(Cont cnt) {
    std::cout << "Numar cont:" << cnt.getNumarCont() << std::endl;
    std::cout << "Client:" << cnt.getClient() << std::endl;
    std::cout << "Sold:" << cnt.getSold() << std::endl;
}


bool LogIn(Client *client1) {
    std::string username, password;
    std::cout << "Utilizator:";
    std::cin >> username;
    std::cout << "Parola:";
    std::cin >> password;
    str1 = selectStr(username, password);
    sqlite3_open("SistemBancar.db", &data1);
    int r;
    r = sqlite3_exec(data1, str1.c_str(),callback,client1, nullptr);
    if (r == 0) {
        std::cout << "Eroare! Utilizator sau parola gresita!" << std::endl;
        sqlite3_close(data1);
        return false;

    }
    else
    {
        std::cout << "Conectare reusita!" << std::endl;
        sqlite3_close(data1);
        return true;
    }
}

bool cautareCont(Client cl,Cont *cnt)
{
    std::string op;
    str1 = selectStrC(cl.getCNP());
    sqlite3_open("SistemBancar.db", &data1);
    int r;
    r = sqlite3_exec(data1, str1.c_str(),callback1, cnt, nullptr);
    if (r == 0) {
        std::cout << "Eroare! Cont inexistent! Doriti sa creati unul?(Da/NU)" << std::endl;
        std::cin >> op;
        if(op == "Da") {
            cont1 = Cont(cl.getCNP());
            *cnt = cont1;
            insertC(*cnt);
            sqlite3_close(data1);
            std::cout << "Cont creat!" << std::endl;
            return true;
        }
        else
        {
            return false;
        }

    }
    else
    {
        sqlite3_close(data1);
        return true;
    }
}

Cont cautareCont1(std::string nume,Cont *cnt)
{
    Client *client;
    str1 = cautareNume(nume);
    sqlite3_open("SistemBancar.db", &data1);
    int r;
    r = sqlite3_exec(data1, str1.c_str(),callback,client, nullptr);
    if(r != 0) {
        str1 = selectStrC(client->getCNP());
        r = sqlite3_exec(data1, str1.c_str(), callback1, cnt, nullptr);
        if (r == 0)
        {
            std::cout << "Cont inexistent!" << std::endl;
            sqlite3_close(data1);
        }
        else
        {
            sqlite3_close(data1);
            return *cnt;
        }
    }
    else
    {
        std::cout << "Cont inexistent!" << std::endl;
        sqlite3_close(data1);
    }
}

void schibareInformatiiClient(Client *client)
{
    int op;
    while(1)
    {
        std::cout << "Informatii: \n 1.Adresa\n 2.Numar De Telefon\n 3.Parola\n 4.Iesire" << std::endl;
        std::cin >> op;
        switch(op){
            case 1:
            {
                std::cout << "Introduceti adresa:\n";
                std::cin >> adresa;
                client->setAdresa(adresa);
                updatetblclad(*client);
                break;

            }
            case 2:
            {
                std::cout << "Introduceti numar de telefon:\n";
                std::cin >> numarDeTelefon;
                client->setNumarDeTelefon(numarDeTelefon);
                updatetblclnr(*client);
                break;
            }
            case 3:
            {
                std::cout << "Introduceti parola:\n";
                std::cin >> parola;
                client->setParola(parola);
                updatetblclpass(*client);
                break;
            }
            case 4:
            {
                std::cout << "Va multumim!" << std::endl;
                break;
            }
        }
        if(op == 4)
            break;
    }
}

void ServiciiBancare(Cont *c) {
    int op, suma;
    Tranzactii tr,tr2;
    std::string nume, descriere;
    Cont c2;
    while (1) {
        std::cout << "Servicii Bancare:\n 1.Depunere fonduri\n 2.Retragere fonduri \n 3.Transfer\n 4.Modificare informatii \n 5.Iesire"
                  << std::endl;
        std::cin >> op;
        switch (op) {

            case 1: {
                std::cout << "Introduceti suma: \n";
                std::cin >> suma;
                std::cout << "Introduceti descriere: \n";
                std::cin >> descriere;
                tr = Tranzactii(c->getNumarCont(), suma, descriere);
                tr.depunere(suma, c);
                updatetbldep(tr);
                insertTR(tr);
                break;
            }
            case 2: {
                std::cout << "Introduceti suma: \n";
                std::cin >> suma;
                std::cout << "Introduceti descriere: \n";
                std::cin >> descriere;
                tr = Tranzactii(c->getNumarCont(), suma, descriere);
                tr.retragere(suma, c);
                updatetblret(tr);
                insertTR(tr);
                break;
            }
            case 3: {
                std::cout << "Introduceti suma: \n";
                std::cin >> suma;
                std::cout << "Introduceti nume client: \n";
                std::cin >> nume;
                std::cout << "Introduceti descriere: \n";
                std::cin >> descriere;
                tr = Tranzactii(c->getNumarCont(), suma, descriere);
                c2 = cautareCont1(nume, &c2);
                tr2 = Tranzactii(c2.getNumarCont(),suma,descriere);
                tr.transfer(c, &c2, suma);
                updatetbldep(tr2);
                updatetblret(tr);
                insertTR(tr);
                break;
            }
            case 4:
            {
                Client client;
                getClient(c->getClient(),&client);
                schibareInformatiiClient(&client);
                break;
            }
            case 5: {
                std::cout << "Va multumim!" << std::endl;
                break;
            }
        }
        if (op == 5)
            break;
    }
}