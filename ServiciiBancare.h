//
// Created by alex on 30.08.2023.
//

#ifndef PROIECT_SISTEMBANCAR_SERVICIIBANCARE_H
#define PROIECT_SISTEMBANCAR_SERVICIIBANCARE_H

# include <string>

class ServiciiBancare {
private:
    std::string ID;

public:
    ServiciiBancare(std::string id);
    std::string getID();
    int depunere(int val);
    int transfer(std::string cont1, std::string cont2, int suma);
    int retragere(int val);
    void vizualizareDetalii();
};


#endif //PROIECT_SISTEMBANCAR_SERVICIIBANCARE_H
