//
// Created by alex on 30.08.2023.
//

#ifndef PROIECT__SISTEMBANCAR_CONT_H
#define PROIECT__SISTEMBANCAR_CONT_H

#include <string>

class Cont {
private:
    std::string numarCont;
    std :: string clientCNP;
    int sold;
    Cont(std::string numCon, std::string cl);

public:
    friend Cont creareCont(std::string numCon, std::string  cl);
    [[maybe_unused]] std :: string getNumarCont();
    [[maybe_unused]] std::string getClient();
    [[maybe_unused]] int getSold();
};


#endif //PROIECT__SISTEMBANCAR_CONT_H
