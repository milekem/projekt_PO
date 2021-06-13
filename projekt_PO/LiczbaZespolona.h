#ifndef PROJEKT_PO_LICZBAZESPOLONA_H
#define PROJEKT_PO_LICZBAZESPOLONA_H

class LiczbaZespolona
{
private:
    double cz_real; //czesc real
    double cz_im; //czesc imaginary

public:
    explicit LiczbaZespolona(double real = 0.0, double imaginary = 0.0); //konstruktor

    /*przeciazenia operatorow*/

    LiczbaZespolona	operator+(const LiczbaZespolona& p_num1); //+

    LiczbaZespolona	operator-(const LiczbaZespolona& p_num1); //-

    LiczbaZespolona	operator*(const LiczbaZespolona& p_num1); //*

    LiczbaZespolona	operator/(const LiczbaZespolona& p_num1); // /

    const LiczbaZespolona& operator=(const LiczbaZespolona& p_num1); // =

    virtual void InputLiczba();

    virtual void PrintLiczba() const;
    ~LiczbaZespolona(); //Destruktor

};

#endif //PROJEKT_PO_LICZBAZESPOLONA_H
