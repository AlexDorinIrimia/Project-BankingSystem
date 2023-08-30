//
// Created by alex on 30.08.2023.
//

#include "Cont.h"

Cont::Cont(std::string numCon, std::string cl) {
    this->numarCont=numCon;
    this->clientCNP = cl;
    this->sold = 0;
}

Cont creareCont(std::string numCon, std::string  cl){
    Cont cnt = Cont(numCon,cl);
    return cnt;
}




std::string Cont::getClient() {return this->clientCNP;}
int Cont:: getSold() {return this->sold;}
std::string Cont::getNumarCont() {return this->numarCont;}