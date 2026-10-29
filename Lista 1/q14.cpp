#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float D, x1, x2, y1, y2;

    cout <<"Informe as coordenadas: "; 
    cin >> x1 >> y1 >> x2 >> y2;

    D = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout <<"Distancia entre os pontos: " << D << endl;
}