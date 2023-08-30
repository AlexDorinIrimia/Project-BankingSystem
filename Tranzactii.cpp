//
// Created by alex on 30.08.2023.
//

#include "Tranzactii.h"

Tranzactii::Tranzactii(std::string desc, int val) {
    this->descriere = desc;
    this->valoare = val;
}

Tranzactii creareTranzactie(std::string desc, int val){
    Tranzactii tr = Tranzactii(desc,val);
    return tr;
}

[[maybe_unused]] std::string Tranzactii::getDesc() {return this->descriere;}
[[maybe_unused]] int Tranzactii::getValoare() {return this->valoare;}