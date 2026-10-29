#include <iostream>
using namespace std;

int main(){
    int faces[10];
    int i, cara = 0, coroa = 0;

    cout <<"Jogue a moeda 10 vezes:" << endl;

    for (i = 0;i < 10;i++){
        cin >> faces[i];
    }
    for (i = 0;i < 10;i++){
        if (faces[i] == 1){
            coroa++;
        } else if (faces[i] == 2){
            cara++;
        }
    }
    cout << "Cara:\n" << cara << "\n" << "Coroa:\n" << coroa << endl;
    return 0;
}