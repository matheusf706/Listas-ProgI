#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int populacao;
    double bio1, reg1, bio2, reg2;

    cout <<"Populacao total da fauna: "; cin >> populacao;

    ofstream arquivo("dados.txt");
    arquivo << populacao * 0.11 << endl;
    arquivo << populacao * 0.11 * 0.73 << endl;
    arquivo << (populacao * 0.11)/3 << endl;
    arquivo << (populacao * 0.11 * 0.73)/4 << endl;
    arquivo.close();

    ifstream arquivoSaida("dados.txt");
    arquivoSaida >> bio1 >> reg1 >> bio2 >> reg2;
    arquivoSaida.close();

    cout << int(bio1) << "\n" << int(reg1) << endl;
    cout << int(bio2) << "\n" << int(reg2) << endl;

    return 0;
}