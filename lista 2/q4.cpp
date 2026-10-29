#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string nomeArquivo, palavra1, palavra2;

    cin >> nomeArquivo;
    ifstream arquivo(nomeArquivo);
    if (!arquivo) {
        cout << "Nao foi possivel abrir o arquivo.\n";
        return 0;
    }

    ofstream arquivo2(nomeArquivo);
    cin >> palavra1;
    arquivo2 << palavra1;
    arquivo2.close();

    cin >> nomeArquivo;
    ifstream arquivo3(nomeArquivo);
    if (!arquivo3) {
        cout << "Nao foi possivel abrir o arquivo.\n";
        return 0;
    }

    ofstream arquivo4(nomeArquivo);
    cin >> palavra2;
    arquivo4 << palavra2;
    arquivo4.close();

    cin >> nomeArquivo;
    ifstream arquivo5(nomeArquivo);
    if (!arquivo5) {
        cout << "Nao foi possivel abrir o arquivo.\n";
        return 0;
    }

    ofstream arquivo6(nomeArquivo);
    arquivo6 << palavra1 <<" "<< palavra2;
    arquivo6.close();

    ifstream leitura(nomeArquivo);
    leitura >> palavra1 >> palavra2;
    cout << "Conteudo do arquivo " << nomeArquivo << ": " << endl;
    cout << palavra1 << " " << palavra2; 
    leitura.close();

    return 0;
}