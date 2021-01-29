#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct uczen {
    string imie, nazwisko;
    int numer;
};

struct uczen t[5];

void uczniowie() {
    for(int i=0; i <5; i++) {
        cout << "Wprowadz imie:" << i+1 << " ";
        cin >> t[i].imie;
        cout << "Wprowadz nazwisko:" << i+1 << " ";
        cin >> t[i].nazwisko;
        cout << "(liczba)Wprowadz wiek:" << i+1 << " ";
        cin >> t[i].numer;
    }
}
void lista_uczniow() {
    for(int i=0; i<5; i++) {
        cout << "Uczen " << i+1 << " Imie: " << t[i].imie << "\nNazwisko: "
             << t[i].nazwisko << "\nNumer w dzienniku: "
             << t[i].numer << "\n";
    }
}

int main() {
    uczniowie();
    lista_uczniow();
    return 0;
}
