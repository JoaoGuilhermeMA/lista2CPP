#include <iostream>

using namespace std;

int main() {
    int numero, soma = 0;
    cout << "Digite um numero inteiro maior que zero e de no maximo 5 algorismos: " << endl;
    cin >> numero;

    if(numero <= 0 || numero > 99999){
        cout << "Numero invalido!";
        return 0;
    }else{
        soma += numero % 10;
        numero /= 10;
        soma += numero % 10;
        numero /= 10;
        soma += numero % 10;
        numero /= 10;
        soma += numero % 10;
        numero /= 10;
        soma += numero % 10;
        numero /= 10;
    }

    cout << "A soma de todos os numeros do algorismo e: " << soma << endl;
}
