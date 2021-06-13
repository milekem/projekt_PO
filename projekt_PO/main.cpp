#include <iostream>
#include "LiczbaZespolona.h"
#include "Print.h"
#include "Input.h"

using namespace std;

int main()
{
    LiczbaZespolona l1;
    LiczbaZespolona l2;	  //inicjalizacja obiektow
    LiczbaZespolona l3;


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
    l3= l1 + l2;
    l3.PrintLiczba();


    cout<<"Wynik odejmowania: "<<endl;
    l3= l1 - l2;
    l3.PrintLiczba();

    cout<<"Wynik mnozenia: "<<endl;
    l3= l1 * l2;
    l3.PrintLiczba();

    cout<<"Wynik dzielenia: "<<endl;
    l3= l1 / l2;
    l3.PrintLiczba();


    char ch;
    cin>>ch;


    return 0;
}

bool RedirectConsoleIO()
{
    bool result = true;
    FILE* fp;

    // Redirect STDIN if the console has an input handle
    if (GetStdHandle(STD_INPUT_HANDLE) != INVALID_HANDLE_VALUE)
        if (freopen_s(&fp, "CONIN$", "r", stdin) != 0)
            result = false;
        else
            setvbuf(stdin, NULL, _IONBF, 0);

    // Redirect STDOUT if the console has an output handle
    if (GetStdHandle(STD_OUTPUT_HANDLE) != INVALID_HANDLE_VALUE)
        if (freopen_s(&fp, "CONOUT$", "w", stdout) != 0)
            result = false;
        else
            setvbuf(stdout, NULL, _IONBF, 0);

    // Redirect STDERR if the console has an error handle
    if (GetStdHandle(STD_ERROR_HANDLE) != INVALID_HANDLE_VALUE)
        if (freopen_s(&fp, "CONOUT$", "w", stderr) != 0)
            result = false;
        else
            setvbuf(stderr, NULL, _IONBF, 0);

    // Make C++ standard streams point to console as well.
    ios::sync_with_stdio(true);

    // Clear the error state for each of the C++ standard streams.
    std::wcout.clear();
    std::cout.clear();
    std::wcerr.clear();
    std::cerr.clear();
    std::wcin.clear();
    std::cin.clear();

    return result;
}
