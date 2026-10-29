#include <iostream>
using namespace std;

int main(){
    float num1, num2, num3, media;
    
    cout<< "Digite 1 número: ";
    cin>> num1;
    cout<< "Digite 1 número: ";
    cin>> num2;
    cout<< "Digite 1 número: ";
    cin>> num3;
    
    media = (num1 + num2 + num3) / 3;

    cout<< "A media é: " << media << ends;
    return 0;
}