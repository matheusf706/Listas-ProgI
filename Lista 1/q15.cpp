#include <iostream>
using namespace std;

int main(){
    float F, C;

    cout <<"Temperatura em Farenheit: "; cin >> F;

    C = (F-32)*(5/9);
    
    cout <<"Temperatura em Celsius: " << C << "°" << endl;
}