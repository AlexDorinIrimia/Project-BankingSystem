//
// Created by alex on 01.09.2023.
//

#ifndef PROJECT_BANKINGSYSTEM__UTILITIES_HPP
#define PROJECT_BANKINGSYSTEM__UTILITIES_HPP

# include <string>
# include "Account.hpp"
# include "Client.hpp"

void vizualizareDetalii(Cont cnt);
bool LogIn(Client *client);
bool cautareCont(Client cl,Cont *cnt);
Cont cautareCont1(std::string nume,Cont *cnt);
void ServiciiBancare(Cont *c);
void schibareInformatiiClient(Client *client);
#endif //PROIECT_SISTEMBANCAR_UTILITIES_H
