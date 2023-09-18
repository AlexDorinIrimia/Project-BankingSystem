//
// Created by alex on 01.09.2023.
//

#ifndef PROIECT_SISTEMBANCAR_UTILITIES_H
#define PROIECT_SISTEMBANCAR_UTILITIES_H

# include <string>
# include "Cont.h"
# include "Client.h"

void vizualizareDetalii(Cont cnt);
bool LogIn(Client *client);
bool cautareCont(Client cl,Cont *cnt);
Cont cautareCont1(std::string nume,Cont *cnt);
void ServiciiBancare(Cont *c);
void schibareInformatiiClient(Client *client);
#endif //PROIECT_SISTEMBANCAR_UTILITIES_H
