#include <iostream>
using namespace std;

int main(){
    int idade[3];
    
    
    for (int i = 0; i < 3; i++){
        cin >> idade[i];
    }
    
    
    int maiorValor = idade[0], maiorPosicao = 0;
    int menorValor = idade[0], menorPosicao = 0;
    for (int i = 1; i < 3; i++){
        
        if (idade[i] > maiorValor){
            maiorPosicao = i;
            maiorValor = idade[i];
        }  
        
        if (idade[i] < menorValor){
            menorPosicao = i;
            menorValor = idade[i];
        }
    }
   
    
    int intermediario;
    for (int i = 1; i < 3; i++){
        if (i != maiorPosicao and i != menorPosicao){
           intermediario = idade[i]; 
        }
    }
    
    cout << "Idade de camila: " << intermediario << endl;

    return 0;
}