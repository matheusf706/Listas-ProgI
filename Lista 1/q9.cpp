#include <iostream> 
using namespace std;

int main() { 
    float pesoSacoKg, racaoPorGatoGramas, pesoSacoGramas, racaoTotalConsumida, racaoRestante; 
    
    cout << "Digite o peso do saco de racao (em kg): "; 
    cin >> pesoSacoKg; 
    cout << "Digite a quantia de racao dada para cada gato em gramas: "; 
    cin >> racaoPorGatoGramas; 
    
    pesoSacoGramas = pesoSacoKg * 1000; 
    
    racaoTotalConsumida = (racaoPorGatoGramas * 2) * 5; 
    
    racaoRestante = pesoSacoGramas - racaoTotalConsumida; 

    cout << "Apos 5 dias, restara " << racaoRestante << " g de racao." << 
    endl; 

    return 0;
}