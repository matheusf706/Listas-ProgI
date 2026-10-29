#include <iostream> 
#include <cmath> // Biblioteca para usar sqrt() 
using namespace std; 

int main() { 
    float cateto1, cateto2, hipotenusa; 
    // Entrada de dados 
    cout << "Digite o valor do primeiro cateto: "; 
    cin >> cateto1; 
    cout << "Digite o valor do segundo cateto: "; 
    cin >> cateto2; 
    // Cálculo da hipotenusa 
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    cout << "A medida da hipotenusa é: " << hipotenusa << endl; 
    return 0; 
}