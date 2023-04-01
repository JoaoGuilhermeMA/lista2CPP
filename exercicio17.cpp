#include<iostream>

using namespace std;

int main()
{
    int numero;
    bool ehPar, multPorDez, divPorCinco;

    cout << "Digite um numero qualquer: " << endl;
    cin >> numero;

    ehPar = numero % 2 == 0;
    multPorDez = numero % 10 == 0;
    divPorCinco = numero % 5 == 0;
    if(ehPar){
        cout << "Eh par" << endl;
        if(multPorDez){
            cout << "Eh multiplo de 10" << endl;
        }else{
            cout << "Nao eh multiplo de 10" << endl;
        }
    }else{
        cout << "Eh impar" << endl;
        if(divPorCinco){
            cout << "Eh divisivel por 5" << endl;
        }else{
            cout << "Nao eh divisivel por 5" << endl;
        }
    }
}
