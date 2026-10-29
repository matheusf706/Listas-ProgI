#include <iostream>
using namespace std;

int main(){
    float valori, valord, valorf;
    
    cout << "Valor inicial do produto: ";
    cin >> valori;
    
    valord = valori * 0.12;
    valorf = valori - valord;
    
    cout <<"O valor após o desconto é: " << valorf << ends;
    return 0;
}