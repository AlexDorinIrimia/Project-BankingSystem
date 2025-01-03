//
// Created by alex on 15.09.2023.
//

#ifndef PROJECT_BANKINGSYSTEM__FUNCTIONSSQL_HPP
#define PROJECT_BANKINGSYSTEM__FUNCTIONSSQL_HPP

#include <string>
#include "Transactions.hpp"
#include "Client.hpp"

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
