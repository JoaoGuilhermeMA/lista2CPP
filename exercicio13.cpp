#include <iostream>

using namespace std;

int main() {
    float distanciaPercorrida, gasolinaLitro, kgPorLitro;
    cout << "Digite quantos quilomentros voce percorreu: " << endl;
    cin >> distanciaPercorrida;

    cout << "Digite quantos litros de gasolina foram consumidos: " << endl;
    cin >> gasolinaLitro;

    kgPorLitro = distanciaPercorrida / gasolinaLitro;

    if(kgPorLitro < 8){
        cout << "Venda o carro!" << endl;
    }else if(kgPorLitro >=8 && kgPorLitro <= 12){
        cout << "Economico!" << endl;
    }else{
        cout << "Super economico!" << endl;
    }
}
