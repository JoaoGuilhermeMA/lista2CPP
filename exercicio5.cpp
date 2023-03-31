#include <iostream>

using namespace std;

int main()
{
    int codigo;
    float salarioAntigo, salarioNovo, diferencaSalarial;

    cout << "Digite o seu salario" << endl;
    cin >> salarioAntigo;

    cout << "Digite o codigo do seu cargo: " << endl;
    cin >> codigo;

    cout << "Seu salario antigo era " << salarioAntigo << " reais" << endl;
    switch (codigo)
    {
    case 101:
        salarioNovo = salarioAntigo * 1.1;
        break;
    case 102:
        salarioNovo = salarioAntigo * 1.2;
        break;
    case 103:
        salarioNovo = salarioAntigo * 1.3;
        break;
    default:
        salarioNovo = salarioAntigo * 1.4;
    }

    diferencaSalarial = salarioNovo - salarioAntigo;
    cout << "Seu salario atual e de " << salarioNovo << " reais" << endl;
    cout << "A diferenca entre o seu antigo salario e o novo e de " << diferencaSalarial << " reais" << endl;
}
