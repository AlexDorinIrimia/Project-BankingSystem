//
// Created by alex on 30.08.2023.
//
#ifndef PROJECT_BANKINGSYSTEM_ACCOUNT_HPP
#define PROJECT_BANKINGSYSTEM_ACCOUNT_HPP

#include <string>

class Cont {
private:
    std::string numarCont;
    std :: string clientCNP;
    int sold;

public:
    Cont(std::string cl);

    [[maybe_unused]] std :: string getNumarCont();
    [[maybe_unused]] std::string getClient();
    [[maybe_unused]] int getSold();
    void setNumarCont(std::string numarCont);
    void setClientCnp(std::string clientCnp);
    void setSold(int sold);
    Cont();
};

#endif //PROIECT_SISTEMBANCAR_CONT_H