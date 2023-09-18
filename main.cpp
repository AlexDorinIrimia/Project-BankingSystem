//
// Created by alex on 31.08.2023.
//
# include <iostream>
# include "Client.h"
# include <string>
# include "Cont.h"
# include "Utilities.h"
#include "FunctionsSQL.h"

using namespace std;

int main()
{
    string parola;
    int option;
    string nume, cnp, adresa,numardetelefon;
    Client cl;
    Cont cont;
    while (1) {
        cout << "Alege optiune:\n 1.Inregistrare client\n 2.Conectare client\n 3.Iesire\n" << endl;

        cin >> option;
        switch (option) {
            case 1: {
                cout << "CNP:\n";
                cin >> cnp;
                cout << "Nume:\n";
                getline(cin,nume);
                cout << "Adresa:\n";
                getline(cin,adresa);
                cout << "Numar de telefon:\n";
                cin >> numardetelefon;
                cout << "Parola: \n";
                cin >> parola;
                cl = Client(cnp,nume,adresa,numardetelefon,parola);
                inserareClient(cl);

                break;
            }
            case 2: {

                if (LogIn(&cl)) {
                    cout <<"Bine ati venit!"<<endl;
                    if(cautareCont(cl,&cont))
                    {
                        vizualizareDetalii(cont);
                        ServiciiBancare(&cont);
                    }
                }

                break;
            }
            case 3:{
                std::cout << "Va multumim!" << std::endl;
                break;
            }
            default: {
                cout << "Optiune gresita!" << endl;
                continue;
            }
        }
        if (option == 3)
            break;
    }
    return 0;
}