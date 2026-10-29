#include <iostream>
using namespace std;

int main(){
    int n100, n50, n20, n10, n5, n2, n1;
    int valor;
    cout <<"Valor: R$"; cin >> valor;

    n100 = valor / 100;
    valor %= 100;

    n50 = valor / 50;
    valor %= 50;

    n20 = valor / 20;
    valor %= 20;

    n10 = valor / 10;
    valor %= 10;

    n5 = valor / 5;
    valor %= 5;

    n2 = valor / 2;
    valor %= 2;

    n1 = valor;

    cout <<"Nota(s) de 100: " << n100 << endl;
    cout <<"Nota(s) de 50: " << n50 << endl;
    cout <<"Nota(s) de 20: " << n20 << endl;
    cout <<"Nota(s) de 10: " << n10 << endl;
    cout <<"Nota(s) de 5: " << n5 << endl;
    cout <<"Nota(s) de 2: " << n2 << endl;
    cout <<"Nota(s) de 1: " << n1 << endl;
}