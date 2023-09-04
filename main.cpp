//
// Created by alex on 31.08.2023.
//

# include <iostream>
# include "Client.h"
# include <string>
#include <sqlite3.h>
# include "Cont.h"
# include "Tranzactii.h"
# include "Utilities.h"

using namespace std;

# define MAX 100

int option;
string nume, cnp, adresa,numardetelefon,parola,user,pass;
int ok;

/*Client clienti[MAX];
Cont cont[MAX];
int size;*/

int main()
{
    sqlite3 *DATA;
    int num = sqlite3_open("Tabele.sql",&DATA);
    if(num)
    {
        std::cout<<"Eroare!"<<endl;
        return -1;
    }
    else
        cout << "Conectat!";

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

                //Client cl = cl.Client::creareClient(cnp, nume, adresa, numardetelefon, parola);
                //clienti[size++] = cl;
                break;
            }
            case 2: {
/*
                if(LogIn(user,pass))
                {
                    cout <<"Conectare reusita!"<<endl;
                    //for(int i:)
                    //vizualizareDetalii();
                    cout <<""<<endl;
                }
*/
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
    sqlite3_close(DATA);
    return 0;
}