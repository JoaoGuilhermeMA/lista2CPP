#include<iostream>

using namespace std;

int main()
{
    int anoCarro;
    float taxaCarro, precoCarro;

    cout << "Por favor digite o ano em que seu carro foi fabricado: " << endl;
    cin >> anoCarro;

    cout << "Por favor digite o preco do seu carro: " << endl;
    cin >> precoCarro;


    cout << "O valor do seu carro e de: " << precoCarro << " reais." << endl;
    if(anoCarro < 1990){
        taxaCarro = 1.01;
        precoCarro *= taxaCarro;
    }else{
        taxaCarro = 1.015;
        precoCarro *= taxaCarro;
    }
        cout << "O valor do seu carro com os impostos vai ser de " << precoCarro << " reais" << endl;
}
