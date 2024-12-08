// Day4_Ceasar.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Ceasar.h"

int main()
{
    Ceasar* ceasar = new Ceasar("azc AZC 12390 ",2);
    std::cout << ceasar->Encrypt();

}

 