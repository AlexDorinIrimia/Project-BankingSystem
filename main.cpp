//
// Created by alex on 31.08.2023.
//

# include <iostream>
# include "Client.h"
# include <string>
//# include "Cont.h"
//# include "Tranzactii.h"

using namespace std;

# define MAX 100

int option;
string nume, cnp, adresa,numardetelefon,parola;
Client clienti[MAX];
int size;

int main()
{
    int ok = 1;
    while(ok) {
    cout << "Alege optiune:\n 1.Inregistrare client\n 2.Conectare client\n"<<endl;

        cin >> option;
        switch (option) {
            case 1: {
                cout << "CNP:\n";
                cin >> cnp;
                cout << "Nume:\n";
                cin >> nume;
                cout << "Adresa:\n";
                cin >> adresa;
                cout << "Numar de telefon:\n";
                cin >> numardetelefon;
                cout << "Parola:\n";
                cin >> parola;

                Client cl = cl.Client::creareClient(cnp, nume, adresa, numardetelefon, parola);
                clienti[size++] = cl;
                break;
            }
            case 2: {
                break;
            }

            default: {
                cout << "Optiune gresita!" << endl;
                break;
            }
        }
        if(option != 1 && option != 2)
            ok = 0;
    }
    return 0;
}