// Example program
#include <iostream>
#include <string>

class Aluno{
public:
    Aluno()=default;
    Aluno(int cpf,std::string nome);
    auto Nome()->std::string;
    auto CPF() ->int;
    
private:
    int cpf =0;
    std::string nome= "";
};
Aluno::Aluno(int cpf,std::string nome):nome(nome),cpf(cpf){}

auto Aluno::Nome()-> std::string {
    return nome;
}

auto Aluno::CPF()->int{
    return cpf;
}

auto AddAluno(int size,Aluno* aluno) -> void{
    int cpfAux =0;
    std::string nomeAux ="";
    for (int i = 0; i < size ; i++)
    {
        std::cout << i<<std::endl;
        std::cin >>cpfAux;
        std::cin >>nomeAux;
        Aluno a (cpfAux,nomeAux);
        aluno[i] = a;
    }
}
auto PrintAluno(int size,Aluno* aluno) -> void
{
    for (int i = 0; i < size ; i++){
        std::cout<<"Aluno "<<i<<":"<<aluno[i].Nome()<<",CPF:"<<aluno[i].CPF()<<std::endl;
    }
}

auto LinearSearch(int size, Aluno* aluno, int key ) -> bool 
{
    bool resp = false;
    for (int i = 0; i < size; i++){
        if (aluno[i].CPF() == key){
            resp = true;
            break;
        }     
    }
    return false;
}

auto BinarySearch(int size, Aluno *aluno, int key) -> bool{
    int inf = 0;     
    int sup = size-1; 
    int meio;
    while (inf <= sup){
        meio = (inf + sup)/2;
        if (key == aluno[meio].CPF())
            return 1;
        if (key < aluno[meio].CPF())
            sup = meio-1;
        else
            inf = meio+1;
    }
    return 0;   

}


int main()
{
 bool achou = false;
 Aluno alunos[3];
 AddAluno(3,alunos);
 PrintAluno(3,alunos);
 achou = BinarySearch(3,alunos,2);
 if(achou)
 {
     std::cout << "acho o aluno" <<std::endl;
 }
 else
 {
     std::cout << "nao acho o aluno" <<std::endl;
 } 
 
}
