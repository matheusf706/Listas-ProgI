#include <iostream>
using namespace std;
#include <cmath>

int main(){
    float raio, pi = 3.14, area;

    cout <<"Raio do circulo:\n";
    cin >> raio;

    area = pi * pow(raio, 2);
    cout <<"Tamanho da area: "<< area<< endl;
}