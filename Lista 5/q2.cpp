#include <iostream>
using namespace std;

int main(){
    float numeros[10], p = 0, n = 0;
    int i;

    for (i = 0; i < 10; i++){
        cin >> numeros[i];
    }
    for (i = 0;i < 10;i++){
        if (numeros[i] >= 0){
        p++;
        } else {
            n += numeros[i];
        }
    } 

    cout <<"Número de positivos: " << p << endl;
    cout <<"Soma dos negativos: " << n << endl;
    for (i = 9; i > -1;i--){
        cout << numeros[i] << " ";
    }
    return 0;
}