//
// Created by alex on 15.09.2023.
//

# include "FunctionsSQL.h"
#include "Cont.h"
#include "Tranzactii.h"
#include "StringsSQL.h"
#include "Client.h"
# include <string>
# include <sqlite3.h>
# include <iostream>

std::string str;
char *errmsg;
sqlite3 *data;

void inserareClient(Client cl)
{
    sqlite3_open("SistemBancar.db",&data);
    str = insertStr(cl);
    int r = sqlite3_exec(data, str.c_str(), nullptr, nullptr, &errmsg);
    if(r != SQLITE_OK)
    {
        std::cout << "Eroare: " << errmsg << std::endl;
    }
    sqlite3_close(data);
}

void insertTR(Tranzactii tr)
{
    sqlite3_open("SistemBancar.db",&data);
    str = insertStrT(tr);
    int r = sqlite3_exec(data, str.c_str(), nullptr, nullptr, &errmsg);
    if(r != SQLITE_OK)
    {
        std::cout << "Eroare: " << errmsg << std::endl;
    }
    sqlite3_close(data);
}

void insertC(Cont cnt)
{
    sqlite3_open("SistemBancar.db",&data);
    str = insertStrC(cnt);
    int r = sqlite3_exec(data, str.c_str(), nullptr, nullptr, &errmsg);
    if(r != SQLITE_OK)
    {
        std::cout << "Eroare: " << errmsg << std::endl;
    }
    sqlite3_close(data);
}

void updatetbldep(Tranzactii tr) {
    sqlite3_open("SistemBancar.db", &data);
    str = altertblCdep(tr);
    int r = sqlite3_exec(data, str.c_str(), nullptr, nullptr, &errmsg);
    if(r != SQLITE_OK)
    {
        std::cout << "Eroare: " << errmsg << std::endl;
    }
    sqlite3_close(data);
}
void updatetblret(Tranzactii tr)
{
    sqlite3_open("SistemBancar.db",&data);
    str = altertblCret(tr);
    int r = sqlite3_exec(data, str.c_str(), nullptr, nullptr, &errmsg);
    if(r != SQLITE_OK)
    {
        std::cout << "Eroare: " << errmsg << std::endl;
    }
    sqlite3_close(data);
}

static int callback(void *client, int count,char **date, char **column)
{
    Client *cl = (Client*)client;
    if(column[0]&&date[0])
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

void getClient(std::string cnp, Client *c)
{
    sqlite3_open("SistemBancar.db",&data);
    str = cautareNume1(cnp);
    int r = sqlite3_exec(data, str.c_str(), callback, c, nullptr);
    if(r == 0)
    {
        std::cout << "Eroare! "<<std::endl;
        sqlite3_close(data);
    }
    else {
        sqlite3_close(data);
    }
}

void updatetblclad(Client cl)
{
    sqlite3_open("SistemBancar.db",&data);
    str = altertblClad(cl);
    int r = sqlite3_exec(data, str.c_str(), nullptr, nullptr, &errmsg);
    if(r != SQLITE_OK)
    {
        std::cout << "Eroare: " << errmsg << std::endl;
    }
    sqlite3_close(data);
}

void updatetblclnr(Client cl)
{
    sqlite3_open("SistemBancar.db",&data);
    str = altertblClnr(cl);
    int r = sqlite3_exec(data, str.c_str(), nullptr, nullptr, &errmsg);
    if(r != SQLITE_OK)
    {
        std::cout << "Eroare: " << errmsg << std::endl;
    }
    sqlite3_close(data);
}

void updatetblclpass(Client cl)
{
    sqlite3_open("SistemBancar.db",&data);
    str = altertblClpass(cl);
    int r = sqlite3_exec(data, str.c_str(), nullptr, nullptr, &errmsg);
    if(r != SQLITE_OK)
    {
        std::cout << "Eroare: " << errmsg << std::endl;
    }
    sqlite3_close(data);
}