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

public:
    Client(std :: string CNP,  std :: string nume,  std :: string adresa,  std :: string numarDeTelefon);
    Client creareClient(std :: string CNP, std :: string nume, std :: string adresa, std :: string numarDeTelefon);

    [[maybe_unused]] std :: string getCNP();
    [[maybe_unused]] std :: string getNume();
    [[maybe_unused]] std :: string getAdresa();
    [[maybe_unused]] std :: string getNumarDeTelefon();

    void setCnp(std::string cnp);
    void setNume(std::string nume);
    void setAdresa(std::string adresa);
    void setNumarDeTelefon(std::string numarDeTelefon);

    Client();
};


#endif //PROIECTSISTEMBANCAR_CLIENT_H