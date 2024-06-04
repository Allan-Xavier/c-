#include <iostream>
using namespace std;
#define MAX 100
struct Pilha{
    int array[MAX];
    int topo;
};
void iniciarPilha(Pilha &pilha){ // inicializa a pilha vazia
 pilha.topo = -1;
}
bool pilha_cheia(Pilha &pilha){
    // verifica
    if(pilha.topo == MAX){
        return true;
    }
    else{
        return false;
    }
}
bool pilha_vazia(Pilha &pilha){ 
    //verifica
    if(pilha.topo == -1){
        return true;
    }else{
        return false;
    }

 
}
 
void empilha(Pilha &pilha,int valor){ //armazena o valor no topo da pilha
  pilha.array[++pilha.topo] = valor;
}
int desempilha(Pilha &pilha){ // remove o valor do topo da pilha
 return (pilha.array[pilha.topo--]);
}
int topo(Pilha &pilha){ //verifica e exibe o valor do topo
  return (pilha.array[pilha.topo]);
  cout << pilha.topo << endl;
  cout << "Teste ";
}
int main(){
    Pilha pilha;
    iniciarPilha(pilha);
    pilha_cheia(pilha);
    pilha_vazia(pilha);
    empilha(pilha, 7 );
    empilha(pilha, 6);
    empilha(pilha, 10);
    topo(pilha);
    return 0;
   
}

