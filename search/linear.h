#pragma once 
#include<iostream>

auto LinearSearch(int size, int* vet, int key ) -> bool 
{
    bool resp = false;
    for (int i = 0; i < size; i++){
        if (vet[i] == key){
            resp = true;
            break;
        }     
    }
    return resp;
}