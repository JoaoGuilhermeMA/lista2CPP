#include<iostream>

using namespace std;

int main()
{
    int diaSemana;

    cout << "Digite o numero referente ao dia da semana: " << endl;
    cout << "(1) - domingo| (2) - Segunda| (3) - Terca| (4) - Quarta| (5) - Quinta| (6) - sexta| (7) - Sabado|" << endl;
    cin >> diaSemana;

   if(diaSemana > 1 && diaSemana < 7){
        cout << "E um dia util" << endl;
   }else if(diaSemana == 1 || diaSemana ==7){
        cout << "E um final de semana" << endl;
   }else{
        cout << "dia invalido" << endl;
   }
}
