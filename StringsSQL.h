//
// Created by alex on 14.09.2023.
//

#ifndef PROIECT_SISTEMBANCAR_STRINGSSQL_H
#define PROIECT_SISTEMBANCAR_STRINGSSQL_H

#include <string>
#include "Cont.h"
#include "Tranzactii.h"

std:: string insertStr(Client cl);
std:: string insertStrC(Cont cnt);
std:: string insertStrT(Tranzactii tr);
std::string selectStr(std::string user, std::string pass);
std::string selectStrC(std::string cont);
std::string cautareNume(std::string nume);
std::string altertblCdep(Tranzactii tr);
std::string altertblCret(Tranzactii tr);
std::string cautareNume1(std::string nume);
std::string altertblClad(Client client);
std::string altertblClnr(Client client);
std::string altertblClpass(Client client);
#endif //PROIECT_SISTEMBANCAR_STRINGSSQL_H