#include <iostream>
using namespace std;

int main() {
    int numero, quadrado, parte;
    
    cout <<"Digite 1 número: ";
    cin >> numero;
    
    quadrado = numero * numero;
    
    parte = quadrado / 5;
    
    cout <<"O quadrado é igual a: " << quadrado;
    
    cout <<"\nA quinta parte é igual a: " << parte << ends;
    return 0;
}