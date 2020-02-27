#include "sort/bubble.h"
#include "search/linear.h"

auto PrintVet (int size, int *vet) -> void{
    for (int i = 0; i < size; i++){
        std::cout <<vet[i]<<' ';
    }
    std::cout<<std::endl;
}

int main(int argc, char const *argv[])
{
    int vec[20] = {32,45,10,6,23,4324,15,8,1,73,5,20,68,3,4,98,56,24,76,2};
    PrintVet(20,vec);
    Bubble(20,vec);
    PrintVet(20,vec);
    std::cout << LinearSearch(20,vec,8787) <<std::endl;
    
    return 0;
}

