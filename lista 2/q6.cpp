#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string nomeArquivo;
    float salario;

    cin >> nomeArquivo;
    
    ifstream arquivo(nomeArquivo);
    arquivo >> salario;
    arquivo.close();

    cout << "O novo salario e: R$" << salario * 1.25 << endl;

    return 0;
}