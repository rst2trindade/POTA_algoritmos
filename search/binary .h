#pragma once
#include <iostream>

auto BinarySearch(int size, int *vet, int key) -> bool{
    int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero          )
    int sup = size-1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
    int meio;
    while (inf <= sup){
        meio = (inf + sup)/2;
        if (key == vet[meio])
            return 1;
        if (key < vet[meio])
            sup = meio-1;
        else
            inf = meio+1;
    }
    return 0;   // não encontrado

}

