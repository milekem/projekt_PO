#include <iostream>
#include "LiczbaZespolona.h"
#include "Print.h"
#include "Input.h"

using namespace std;

int main()
{
    LiczbaZespolona l1;
    LiczbaZespolona l2;	  //inicjalizacja obiektow
    LiczbaZespolona *l3 = new LiczbaZespolona(2.3, 3.4); //dynamiczny przydział pamięci


    cout<<" KALKULATOR LICZB ZESPOLONYCH "<<endl; //Welcome screen

    cout<<"Wprowadz pierwsza liczbe zespolona " << endl; //wprowadzanie liczb do działania
    l1.InputLiczba();

    cout<<"Wprowadz druga liczbe zespolona "<<endl<<endl;
    l2.InputLiczba();

    cout<<"Wprowadzone przez ciebie liczby: "<<endl<<"1.     "; //wyswietlanie wprowadzonych liczb
    l1.PrintLiczba();
    cout<<endl<<"2.     ";
    l2.PrintLiczba();
    cout<<endl<<endl;

    cout<<"Wynik dodawania:  "<<endl;
    l3->operator=(l1+l2);
    l3->PrintLiczba();


    cout<<"Wynik odejmowania: "<<endl;
    l3->operator=(l1-l2);
    l3->PrintLiczba();

    cout<<"Wynik mnozenia: "<<endl;
    l3->operator=(l1*l2);
    l3->PrintLiczba();

    cout<<"Wynik dzielenia: "<<endl;
    l3->operator=(l1/l2);
    l3->PrintLiczba();

    char ch;
    cin>>ch;


    return 0;
}
