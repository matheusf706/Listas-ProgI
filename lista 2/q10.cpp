#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int hora, minuto, segundo;

    cout << "Horas: "; cin >> hora;
    cout << "Minuto: "; cin >> minuto;

    ofstream arquivo("saida.txt");
    int conversao = hora*60;
    int totalM = conversao + minuto;
    segundo = totalM * 60;
    arquivo << conversao << "\n" << totalM << "\n" << segundo;
    arquivo.close();

    return 0;
}