//
// Created by alex on 29.08.2023.
//

#include "Client.hpp"

#include <utility>

Client::Client(std::string cnp, std::string name, std::string adress, std::string numardetelefon,std::string pass) {
    Client::CNP = std::move(cnp);
    Client::nume = std::move(name);
    Client::adresa = std::move(adress);
    Client::numarDeTelefon = std::move(numardetelefon);
    Client::parola = std::move(pass);
}

[[maybe_unused]]std::string Client::getCNP() {return this->CNP;}
[[maybe_unused]]std::string Client::getNume() {return this->nume;}
[[maybe_unused]]std::string Client::getAdresa() {return this->adresa;}
[[maybe_unused]]std::string Client::getNumarDeTelefon() {return this->numarDeTelefon;}
[[maybe_unused]]std::string Client::getParola() {return this->parola;}
void Client::setCnp(std::string cnp) {this->CNP = cnp;}
void Client::setNume(std::string num) {this->nume = num;}
void Client::setAdresa(std::string adr) {this->adresa = adr;}
void Client::setNumarDeTelefon(std::string numardeTelefon) {this->numarDeTelefon = numardeTelefon;}
void Client::setParola(std::string pass) {this->parola = pass;}

Client::Client() {}