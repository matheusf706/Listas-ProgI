#include <iostream>
using namespace std;

int main(){
    int n, i;
    float peso[] = {}, soma;
    cout << "Quantos atletas no time?" << endl;
    cin >> n;

    for (i = 0; i < n;i++){
        cin >> peso[i];
        soma += peso[i]; 
    }
    
    double media = soma/n;

    for (i = 0;i < n;i++){
        if (peso[i] > media){
            cout << i << endl;
        }
    }
    return 0;
}