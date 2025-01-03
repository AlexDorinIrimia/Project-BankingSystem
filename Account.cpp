//
// Created by alex on 30.08.2023.
//
# include "Account.hpp"
# include <cstdlib>
# include <time.h>


Cont::Cont(std::string cl) {
    srand(time(0));
    Cont::numarCont = "Con" + std::to_string(rand());
    Cont::clientCNP = cl;
    Cont::sold = 0;
}


std::string Cont::getClient() {return this->clientCNP;}
int Cont:: getSold() {return this->sold;}
std::string Cont::getNumarCont() {return this->numarCont;}
void Cont::setNumarCont(std::string numarcont) {this->numarCont = numarcont;}
void Cont::setClientCnp(std::string clientcnp) {this->clientCNP = clientcnp;}
void Cont::setSold(int sol) {this->sold = sol;}

Cont::Cont() {}