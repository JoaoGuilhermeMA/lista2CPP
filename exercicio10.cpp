#include <iostream>

using namespace std;

int main() {
    float notaTrabalho, notaAvalicao, notaExame, media;
    cout << "Digite sua nota referente ao trabalho no laboratorio: " << endl;
    cin >> notaTrabalho;

    cout << "Digite sua nota referente a avalicao semestral: " << endl;
    cin >> notaAvalicao;

    cout << "Digite sua nota referente ao exame final: " << endl;
    cin >> notaExame;

    media = ((notaTrabalho * 2) + (notaAvalicao * 3) + (notaExame * 5)) / (2 + 3 + 5);

    cout << "Voce teve uma media de " << media << endl;
    if (media >= 5)
    {
        cout << "Aluno aprovado";
    }else{
        if (media >=3 && media <= 4.9)
        {
            cout << "Aluno de recuperacao";
        } else{
            cout << "Aluno reprovado";
        }
    }
}
