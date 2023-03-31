#include<iostream>

using namespace std;

int main()
{
    int horaAula, nivelProfessor;
    float salarioHora, salario;

    cout << "Digite o seu nivel como professor: " << endl;
    cout << "Professor nivel 1 - digite 1 | Professor nivel 2 - digite 2 | Professor nivel 3 - digite 3 " << endl;
    cin >> nivelProfessor;

    switch (nivelProfessor)
    {
    case 1:
        salarioHora = 12.00;
        break;
    case 2:
        salarioHora = 17.00;
        break;
    case 3:
        salarioHora = 25.00;
        break;
    default:
        cout << "numero invalido";
        return 0;
    }
    cout << "Digite quantas aulas voce dar por mes: " << endl;
    cin >> horaAula;

    salario = horaAula * salarioHora;
    cout << "O seu salario como professor e de " << salario << " reais mensais";

}
