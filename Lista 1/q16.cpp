// #include <iostream>
// using namespace std;

// int main(){
//     float dinheiro;
//     int quantC, quantP, quantE;

//     cout <<"Quantia de dinheiro: R$"; cin >> dinheiro;

//     float canhao = 10000;
//     float polvora = 2000;
//     float espada = 1500;

//     if (dinheiro >= canhao){
//         quantC++;
//     }
//     if (dinheiro >= polvora){
//         quantP++;
//     }
//     if (dinheiro >= espada){
//         quantE++;
//     }

//     cout <<"Quantidade de canhoes: " << quantC << endl;
//     cout <<"Quantidade de polvora: " << quantP << endl;
//     cout <<"Quantidade de espadas: " << quantE << endl;
    
// }

#include <iostream>
using namespace std;

int main() {
    int dinheiro;
    // Definindo os preços dos itens de forma clara
    int preco_canhao = 10000;
    int preco_polvora = 2000;
    int preco_espada = 1500;
    
    int qtd_possivel1 = 0, qtd_possivel2 = 0, qtd_possivel3 = 0; // Contador de itens que podem ser comprados

    cout << "Quantia de dinheiro: R$"; 
    cin >> dinheiro;


    // Verificando cada item individualmente
    if (dinheiro >= preco_canhao) {
        //cout << "- Voce pode comprar o Canhao!\n";
        qtd_possivel1 = dinheiro / preco_canhao;
        dinheiro = dinheiro % 10000;
    }
    if (dinheiro >= preco_polvora) {
       // cout << "- Voce pode comprar a Polvora!\n";
        qtd_possivel2 = dinheiro / preco_polvora;
        dinheiro = dinheiro % 2000;
    }
    if (dinheiro >= preco_espada) {
       // cout << "- Voce pode comprar a Espada!\n";
        qtd_possivel3 = dinheiro / preco_espada;
        dinheiro = dinheiro % 1500;
    }

    cout << "Quantia de canhoes " << qtd_possivel1 << endl;
    cout << "Quantia de polvora " << qtd_possivel2 << endl;
    cout << "Quantia de espadas " << qtd_possivel3 << endl;

    return 0;
}