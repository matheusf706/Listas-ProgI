#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string nomeArquivo, palavras;
    cin >> nomeArquivo;

    ifstream arquivo(nomeArquivo);
    if (!arquivo) {
        cerr << "Nao foi possivel abrir o arquivo.\n";
        return 1;
    }

    ofstream arquivo2(nomeArquivo);
    cin >> palavras;
    arquivo2 << palavras;
    arquivo.close();
}