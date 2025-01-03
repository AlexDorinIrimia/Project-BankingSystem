//
// Created by alex on 30.08.2023.
//

#ifndef PROJECT_BANKINGSYSTEM_TRANSACTION_HPP
#define PROJECT_BANKINGSYSTEM_TRANSACTION_HPP

# include <string>
# include "Account.hpp"

class Tranzactii{
private:
    std::string ID;
    std::string nrCont;
    int valoare;
    std::string desc;

public:
    Tranzactii(std::string nrCont,int val,std::string desc);

    [[maybe_unused]] int getValoare();
    [[maybe_unused]]std::string getID();
    [[maybe_unused]]std::string getDescriere();
    std::string getNrCont();

    [[maybe_unused]]void depunere(int val,Cont *cnt);
    [[maybe_unused]]void transfer(Cont *cont1, Cont *cont2, int suma);
    [[maybe_unused]]void retragere(int val,Cont* cnt);

    Tranzactii();
};


#endif //PROIECT_SISTEMBANCAR_TRANZACTII_H