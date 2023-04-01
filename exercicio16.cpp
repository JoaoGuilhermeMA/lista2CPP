#include <iostream>

using namespace std;

int main() {
    int idade;
    cout << "Quantos ano voce tem? " << endl;
    cin >> idade;

    if(idade < 18){
        cout << "falta " << 18 - idade << " anos para voce poder tirar a carteira de motorista" << endl;
    }else{
        cout << "Pode tirar a carteira";
    }
}
