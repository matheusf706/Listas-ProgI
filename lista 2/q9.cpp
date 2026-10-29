#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    float alturaDegrau, metros;
    
    ifstream entrada("entrada.txt");
    entrada >> alturaDegrau >> metros;
    entrada.close();
    
    ofstream degraus("degraus.txt");
    int d = ceil((metros*100)/alturaDegrau);
    degraus << d;
    cout << "Quantidade de degraus: " << d << endl;
    degraus.close();
    
    return 0;
}