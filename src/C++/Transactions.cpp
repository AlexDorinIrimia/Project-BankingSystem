//
// Created by alex on 30.08.2023.
//
#include "Transactions.hpp"
# include "Account.hpp"
# include <cstdlib>
# include <time.h>

Tranzactii::Tranzactii(std::string nrCont,int val,std::string desc) {
    srand(time(0));
    Tranzactii::ID = "Tr" + std::to_string(rand());
    Tranzactii::nrCont = nrCont;
    Tranzactii::valoare = val;
    Tranzactii::desc = desc;
}

[[maybe_unused]] int Tranzactii::getValoare() {return this->valoare;}
[[maybe_unused]] std::string Tranzactii::getID() {return this->ID;}
[[maybe_unused]] std::string Tranzactii::getDescriere() {return this->desc;}
[[maybe_unused]]void Tranzactii::depunere(int val, Cont *cnt){
    cnt->setSold(cnt->getSold() + val);
}
[[maybe_unused]]void Tranzactii::retragere(int val, Cont *cnt){
    cnt->setSold(cnt->getSold() - val);
}
[[maybe_unused]]void Tranzactii::transfer(Cont *cont1, Cont *cont2, int suma){
    retragere(suma,cont1);
    depunere(suma,cont2);
}

std::string Tranzactii::getNrCont(){
    return this->nrCont;
}

Tranzactii::Tranzactii() {

}

