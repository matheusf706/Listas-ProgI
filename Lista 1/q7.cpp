#include <iostream>
using namespace std;

int main(){
    double nota1, nota2, nota3;
    int peso1, peso2, peso3;
    
    cout <<"As notas dos alunos:\n";
    cin >> nota1>>nota2>>nota3;
    cout <<"Os pesos das notas:\n";
    cin >> peso1>>peso2>>peso3;
    
    cout <<"A media das notas é: " << ((peso1 * nota1) + (peso2 * nota2) + (peso3 * nota3)) / (peso1 + peso2 + peso3) << endl;
    return 0;
}