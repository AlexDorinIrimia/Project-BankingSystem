//
// Created by alex on 30.08.2023.
//

#ifndef PROIECT__SISTEMBANCAR_TRANZACTII_H
#define PROIECT__SISTEMBANCAR_TRANZACTII_H

# include <string>

class Tranzactii {
private:
    int valoare;
    std::string descriere;
    Tranzactii(std::string desc, int val);
public:
    friend Tranzactii creareTranzactie(std::string desc, int val);

    [[maybe_unused]] std::string getDesc();

    [[maybe_unused]] int getValoare();
};


#endif //PROIECT__SISTEMBANCAR_TRANZACTII_H
