#include <iostream>

using namespace std;

int main() {
    int idade, tempoServico;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    cout << "Digite a quantos anos voce trabalha: " << endl;
    cin >> tempoServico;

    if(idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)){
        cout << "Voce pode ser aposentar!" << endl;
    }else{
        cout << "Voce nao pode ser aposentar!" << endl;
    }
}
