//
// Created by milos on 15.05.2021.
//

#ifndef PROJEKT_PO_PRINT_H
#define PROJEKT_PO_PRINT_H
#include "LiczbaZespolona.h"

class Print
        : public LiczbaZespolona
        {
   virtual void PrintLiczba()=0; //output
};


#endif //PROJEKT_PO_PRINT_H
