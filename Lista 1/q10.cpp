#include <iostream> 
using namespace std; 

int main () { 
    int a = 20, b = 88, aux;
     
    aux = a; 
    a = b;
    b = aux;

    cout<<" Valor de a " <<a<<endl; 
    cout<<" Valor de b " <<b<<endl; 
    return 0; 
}