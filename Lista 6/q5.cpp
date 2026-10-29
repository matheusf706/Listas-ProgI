#include <iostream>
using namespace std;

int main(){
    int maior = 0;

    int m[3][3];
    for (int i = 0;i < 3;i++){
        for (int j = 0;j < 3;j++){
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 3;i++){
        for (int j = 0;j < 3;j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0;i < 3;i++){
        for (int j = 0; j < 3;j++){
            if (m[i][j] > maior){
                maior = m[i][j];
            }
        }
    }

    cout << "Maior elemento da matriz: " << maior << endl;

    return 0;
}