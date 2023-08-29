//
// Created by alex on 29.08.2023.
//

#include "Client.h"

#include <utility>

Client::Client(std::string cnp, std::string name, std::string adress, std::string numardetelefon, std::string pass) {
    this->CNP = std::move(cnp);
    this->nume = std::move(name);
    this->adresa = std::move(adress);
    this->numarDeTelefon = std::move(numardetelefon);
    this->parola = std::move(pass);

}

[[maybe_unused]] Client creareClient(std :: string cnp,  std :: string name,  std :: string adress,  std :: string numardetelefon,  std :: string pass)
{
    Client client = Client(cnp,name,adress,numardetelefon,pass);
    return client;
}

[[maybe_unused]]std::string Client::getCNP() {return this->CNP;}
[[maybe_unused]]std::string Client::getNume() {return this->nume;}
[[maybe_unused]]std::string Client::getAdresa() {return this->adresa;}
[[maybe_unused]]std::string Client::getNumarDeTelefon() {return this->numarDeTelefon;}
[[maybe_unused]]std::string Client::getParola() {return this->parola;}