#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Digite 3 numeros: " << endl;
    cin >> num1 >> num2 >> num3;

    if((num1 == num2) && (num1 == num3) && (num2 == num3)){
        cout << "todos os numeros sao iguais" << endl;
    }else if(num1 == num2 || num1 == num3 || num2 == num3){
        cout << "Apenas 2 numeros sao iguais" << endl;
    }else{
        cout << "todos numeros sao diferentes" << endl;
    }
}
