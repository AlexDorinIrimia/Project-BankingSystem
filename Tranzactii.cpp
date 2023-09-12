//
// Created by alex on 30.08.2023.
//

#include "Tranzactii.h"
# include "Cont.h"

Tranzactii::Tranzactii(std::string desc, int val) {
    this->descriere = desc;
    this->valoare = val;
}

Tranzactii Tranzactii::creareTranzactie(std::string desc, int val){
    Tranzactii tr = Tranzactii(desc,val);
    tr.ID = "Tr" + std::to_string(rand());
    return tr;
}

[[maybe_unused]] std::string Tranzactii::getDesc() {return this->descriere;}
[[maybe_unused]] int Tranzactii::getValoare() {return this->valoare;}
[[maybe_unused]] std::string Tranzactii::getID() {return this->ID;}
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

const std::string &Tranzactii::getNrCont() const {
    return nrCont;
}

void Tranzactii::setNrCont(const std::string &nrCont) {
    Tranzactii::nrCont = nrCont;
}
