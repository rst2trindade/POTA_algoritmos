#pragma once
#include <iostream>

auto Bubble(int size, int *vet)-> void{
    int aux,control = 1 ;
    while (control){
        control = 0;
        for (int i = 0; i < size -1; i++){
            if (vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
                control =1;
            }
        }
    }
}