#include <iostream>
#include "LiczbaZespolona.h"
using namespace std;
LiczbaZespolona::LiczbaZespolona(double real, double imaginary)
{
    cz_real = real;
    cz_im = imaginary;
}
LiczbaZespolona	LiczbaZespolona::operator+(const LiczbaZespolona& p_num1) //+ przeciazenie
{
    LiczbaZespolona tObj;

    tObj.cz_real = cz_real + p_num1.cz_real ;
    tObj.cz_im = cz_im + p_num1.cz_im;

    return tObj;
}
LiczbaZespolona	LiczbaZespolona::operator-(const LiczbaZespolona& p_num1) //przeciazenie -
{
    LiczbaZespolona tObj;

    tObj.cz_real = cz_real - p_num1.cz_real ;
    tObj.cz_im = cz_im - p_num1.cz_im;

    return tObj;
}
LiczbaZespolona	LiczbaZespolona::operator*(const LiczbaZespolona& p_num1) //przeciazenie *
{
    LiczbaZespolona tObj;

    tObj.cz_real = cz_real * p_num1.cz_real - cz_im * p_num1.cz_im ;
    tObj.cz_im = cz_real * p_num1.cz_im + cz_im * p_num1.cz_real  ;

    return tObj;
}
LiczbaZespolona	LiczbaZespolona::operator/(const LiczbaZespolona& p_num1) // '/' przeciazenie
{
    LiczbaZespolona tObj;

    tObj.cz_real = (cz_real * p_num1.cz_real + cz_im * p_num1.cz_im) /
                   (p_num1.cz_real * p_num1.cz_real + p_num1.cz_im * p_num1.cz_im) ;
    tObj.cz_im = (cz_im * p_num1.cz_real - cz_real * p_num1.cz_im) /
                 (p_num1.cz_real * p_num1.cz_real + p_num1.cz_im * p_num1.cz_im);

    return tObj;
}
const LiczbaZespolona& LiczbaZespolona::operator=(const LiczbaZespolona& p_num1) // przeciazenie '='
{

    cz_real =p_num1.cz_real ;
    cz_im = p_num1.cz_im ;

    return *this;
}
LiczbaZespolona::~LiczbaZespolona() //Destruktor
{
};
