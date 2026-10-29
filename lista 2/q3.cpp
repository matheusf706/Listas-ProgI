#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float c, k, f;

    ofstream arquivo("temperatura.txt");
    cout << "Temperatura em Celsius:\n";
    cin >> c;

    k = c + 273;

    f = 1.8 * c + 32;

    arquivo << k <<"K\n" << f <<"F";
    arquivo.close();

    return 0;
}