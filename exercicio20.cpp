#include <iostream>

using namespace std;

int main()
{
    int idade;
    float valor = 100;

    cout << "Digite a sua idade: " << endl;
    cin >> idade;

    if (idade < 10)
    {
        valor += 80;
    }
    else if (idade >= 10 && idade <= 30)
    {
        valor += 50;
    }
    else if (idade <= 60)
    {
        valor += 95;
    }
    else
    {
        valor += 130;
    }

    cout << "voce vai pagar " << valor << " reais pelo plano de saude!" << endl;
}
