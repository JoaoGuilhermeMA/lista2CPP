#include <iostream>

using namespace std;

int main()
{
    int codigoSanduiche, codigoBebida, quantidadeSanduiche, quantidadeBebida;
    float precoSanduiche, precoBebida, valorTotal;

    cout << "Informe o codigo do sanduiche (100 a 104):" << endl;
    cin >> codigoSanduiche;

    cout << "Informe o codigo da bebida (105 a 107):" << endl;
    cin >> codigoBebida;

    cout << "Informe a quantidade de sanduiche: " << endl;
    cin >> quantidadeSanduiche;
    cout << "Informe a quantidade de bebida: " << endl;
    cin >> quantidadeBebida;

    switch (codigoSanduiche)
    {
    case 100:
        precoSanduiche = 1.10;
        break;
    case 101:
        precoSanduiche = 1.30;
        break;
    case 102:
        precoSanduiche = 1.50;
        break;
    case 103:
        precoSanduiche = 1.10;
        break;
    case 104:
        precoSanduiche = 1.30;
        break;
    default:
        cout << "Codigo digitado invalido";
        return 0;
    }
    switch (codigoBebida)
    {
    case 105:
        precoBebida = 1;
        break;
    case 106:
        precoBebida = 2;
        break;
    case 107:
        precoBebida = 1.5;
        break;
    default:
        cout << "Codigo digitado invalido";
        return 0;
        break;
    }

    valorTotal = (quantidadeBebida * precoBebida) + (quantidadeSanduiche * precoSanduiche);

    cout << "O preco total do seu lanche vai ser " << valorTotal << " reais" << endl;
}
