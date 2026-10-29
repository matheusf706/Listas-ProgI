#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nomeArquivo;
    cin >> nomeArquivo;          // lê o nome do arquivo da entrada padrão

    ifstream arquivo(nomeArquivo);
    if (!arquivo) {
        cerr << "Nao foi possivel abrir o arquivo.\n";
        return 1;
    }

    string palavra;
    arquivo >> palavra;               // lê uma palavra (para no primeiro espaço/quebra de linha)
    arquivo.close();
    cout << palavra << endl;
    
    return 0;
}