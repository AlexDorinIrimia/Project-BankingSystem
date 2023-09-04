//
// Created by alex on 30.08.2023.
//

#include "Cont.h"

Cont::Cont(std::string cl) {
    this->numarCont = "Con" + std::to_string(rand());
    this->clientCNP = cl;
    this->sold = 0;
}

Cont Cont::creareCont(std::string cl){
    Cont cnt = Cont(cl);
    return cnt;
}




std::string Cont::getClient() {return this->clientCNP;}
int Cont:: getSold() {return this->sold;}
std::string Cont::getNumarCont() {return this->numarCont;}
void Cont::setNumarCont(std::string numarCont) {this->numarCont = numarCont;}
void Cont::setClientCnp(std::string clientCnp) {this->clientCNP = clientCnp;}
void Cont::setSold(int sold) {this->sold = sold;}

Cont::Cont() {}
