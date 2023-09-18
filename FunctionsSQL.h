//
// Created by alex on 15.09.2023.
//

#ifndef PROIECT_SISTEMBANCAR_FUNCTIONSSQL_H
#define PROIECT_SISTEMBANCAR_FUNCTIONSSQL_H

#include <string>
#include "Tranzactii.h"
#include "Client.h"

void inserareClient(Client cl);
void insertTR(Tranzactii tr);
void insertC(Cont cont);
void updatetbldep(Tranzactii tr);
void updatetblret(Tranzactii tr);
void getClient(std::string cnp, Client *c);
void updatetblclad(Client cl);
void updatetblclnr(Client cl);
void updatetblclpass(Client cl);
#endif //PROIECT_SISTEMBANCAR_FUNCTIONSSQL_H
