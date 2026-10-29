#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float valor, custo, convite;

    cout <<"Custo do espetaculo: R$"; cin >> valor;
    ofstream arquivoValor ("teatro.txt");
    arquivoValor << valor;
    arquivoValor.close();

    ifstream arquivoCusto("teatro.txt");
    arquivoCusto >> custo;
    arquivoCusto.close();

    cout <<"Valor do convite: R$"; cin >> convite;

    int n = custo / convite + 1;

    cout <<"Para cobrir o custo de realizacao e necessario " << n << " convites";

    ofstream arquivoConvites("convite.txt");
    arquivoConvites << n;
    arquivoConvites.close();

    return 0;
}