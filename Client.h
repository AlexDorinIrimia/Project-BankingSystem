//
// Created by alex on 29.08.2023.
//

#ifndef PROIECTSISTEMBANCAR_CLIENT_H
#define PROIECTSISTEMBANCAR_CLIENT_H

# include <string>

class Client{
private:
    std :: string CNP;
    std :: string nume;
    std :: string adresa;
    std :: string numarDeTelefon;
    std :: string parola;
    Client(std :: string CNP,  std :: string nume,  std :: string adresa,  std :: string numarDeTelefon,  std :: string parola);

public:
    friend Client creareClient(std :: string CNP,  std :: string nume,  std :: string adresa,  std :: string numarDeTelefon,  std :: string parola);

    [[maybe_unused]] std :: string getCNP();
    [[maybe_unused]] std :: string getNume();
    [[maybe_unused]] std :: string getAdresa();
    [[maybe_unused]] std :: string getNumarDeTelefon();
    [[maybe_unused]] std :: string getParola();
};


#endif //PROIECTSISTEMBANCAR_CLIENT_H