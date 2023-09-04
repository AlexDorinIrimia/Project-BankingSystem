//
// Created by alex on 01.09.2023.
//
# include <Utilities.h>
# include <iostream>
# include "Cont.h"
# include "Client.h"

void vizualizareDetalii(Cont cnt) {
    std::cout << "Numar cont:" << cnt.getNumarCont() << std::endl;
    std::cout << "Client:" << cnt.getClient() << std::endl;
    std::cout << "Sold:" << cnt.getSold() << std::endl;
}

int size;
Client cl[100];
bool LogIn(std::string numeClient, std::string pass){
    std::cout<<"Client: "<<std::endl; std::cin >> numeClient;
    std::cout<<"Parola "<<std::endl; std::cin >> pass;
    for(int i = 0;i < size;i++)
    {
        if((numeClient == cl[i].getNume()) && (pass == cl[i].getParola()))
            return true;

    }
    return false;
}

std::string inputPass(){

}