//
// Created by alex on 14.09.2023.
//

#include <string>
#include "Account.hpp"
#include "Transactions.hpp"
#include "Client.hpp"
#include "StringsSQL.hpp"

std::string selectStr(std::string user, std::string pass)
{
    std::string str = "SELECT * FROM CLIENT WHERE Nume == '";
    str.append(user+="' AND Parola == '");
    str.append(pass+="';");
    return str;
}

std::string selectStrC(std::string cont)
{
    std::string str = "SELECT * FROM CONTURI WHERE CNP == '";
    str.append(cont+="';");
    return str;
}

std:: string insertStr(Client cl)
{
    std::string str = "INSERT INTO CLIENT VALUES('";
    str.append(cl.getCNP() +="','");
    str.append(cl.getNume()+="','");
    str.append(cl.getAdresa()+="','");
    str.append(cl.getNumarDeTelefon()+="','");
    str.append(cl.getParola()+="');");

    return str;
}

std:: string insertStrC(Cont cnt)
{
    std::string str;
    str = "INSERT INTO CONTURI VALUES('";
    str.append(cnt.getNumarCont()+="','");
    str.append(cnt.getClient()+="','");
    str.append(std::to_string(cnt.getSold())+="');");

    return str;
}

std:: string insertStrT(Tranzactii tr)
{
    std::string str;
    str = "INSERT INTO TRANZACTII VALUES('";
    str.append(tr.getID()+="','");
    str.append(tr.getNrCont()+="','");
    str.append(std::to_string(tr.getValoare())+="','");
    str.append(tr.getDescriere()+="');");

    return str;
}

std::string cautareNume(std::string nume)
{
    std::string str = "SELECT * FROM CONTURI WHERE CNP == '";
    str.append(nume+="';");
    return str;
}

std::string cautareNume1(std::string nume)
{
    std::string str = "SELECT * FROM CLIENT WHERE CNP == '";
    str.append(nume+="';");
    return str;
}

std::string altertblCdep(Tranzactii tr)
{
    std::string str = "UPDATE CONTURI SET SOLD = SOLD + '";
    str.append(std::to_string(tr.getValoare())+="'");
    str.append("WHERE \"NUMAR CONT\" == '");
    str.append(tr.getNrCont()+="';");
    return str;
}

std::string altertblCret(Tranzactii tr)
{
    std::string str = "UPDATE CONTURI SET SOLD = SOLD - '";
    str.append(std::to_string(tr.getValoare())+="'");
    str.append("WHERE \"NUMAR CONT\" == '");
    str.append(tr.getNrCont()+="';");
    return str;
}

std::string altertblClad(Client client)
{
    std::string str = "UPDATE CLIENT SET ADRESA = '";
    str.append(client.getAdresa()+="'");
    str.append("WHERE CNP == '");
    str.append(client.getCNP()+="';");
    return str;
}

std::string altertblClnr(Client client)
{
    std::string str = "UPDATE CLIENT SET \"Numar de telefon\" = '";
    str.append(client.getNumarDeTelefon()+="'");
    str.append("WHERE CNP == '");
    str.append(client.getCNP()+="';");
    return str;
}

std::string altertblClpass(Client client)
{
    std::string str = "UPDATE CLIENT SET Parola = '";
    str.append(client.getParola()+="'");
    str.append("WHERE CNP == '");
    str.append(client.getCNP()+="';");
    return str;
}