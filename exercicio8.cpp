#include <iostream>
using namespace std;

int main()
{
    int numero, soma, numeroA;
    char letra;
    cout << "Digite um numero inteiro: " << endl;
    cin >> numero;

    cout << "Digite uma letra: (a) - antecessores ou (s) - sucessores " << endl;
    cin >> letra;

    if (letra == 'a')
    {
        numeroA = numero - 1;
        soma = (numero + numeroA);
        soma += --numeroA;
        soma += --numeroA;
        soma += --numeroA;
        soma += --numeroA;
        soma += --numeroA;
        soma += --numeroA;
        soma += --numeroA;
        soma += --numeroA;
        soma += --numeroA;
    }
    else
    {
        if (letra == 's')
        {
        numeroA = numero + 1;
        soma = (numero + numeroA);
        soma += ++numeroA;
        soma += ++numeroA;
        soma += ++numeroA;
        soma += ++numeroA;
        soma += ++numeroA;
        soma += ++numeroA;
        soma += ++numeroA;
        soma += ++numeroA;
        soma += ++numeroA;
        }
        else
        {
            cout << "Letra digitada invalida" << endl;
            return 0;
        }
    }

    cout << "A soma e " << soma << endl;
}
