//
// Created by milos on 13.05.2021.
//

#ifndef PROJEKT_PO_INPUT_H
#define PROJEKT_PO_INPUT_H
#include "LiczbaZespolona.h"

class input
        : public LiczbaZespolona
        {
    virtual void InputLiczba() = 0; //Takes input of Complex Number Object members.
};


#endif //PROJEKT_PO_INPUT_H
