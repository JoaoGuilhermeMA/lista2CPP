#include <iostream>

using namespace std;

int main() {
  int numero;
  cout << "Escreva um numero" << endl;
  cin >> numero;
  bool numeroPar = (numero % 2) == 0;

  if(numeroPar){
    cout << "O numero e par" << endl;
    if(numero > 100){
      cout << "e maior que 100" << endl;
    }else{
      cout << "nao e maior que 100" << endl;
    }
  }else{
    cout << "o numero e impar" << endl;
    if(numero > 0){
      cout << "Positivo" << endl;
    }else{
      cout << "Negativo" << endl;
    }
  }
}
