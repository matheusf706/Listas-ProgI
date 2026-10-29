#include <iostream>
using namespace std;

int main(){
    float pes, pol, jardas, milhas;

    cout <<"Distancia em pes: ";
    cin >> pes;

    pol = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280;

    cout <<"Polegadas: " << pol << endl;
    cout <<"Jardas: " << jardas << endl;
    cout <<"Milhas: " << milhas << endl;
}