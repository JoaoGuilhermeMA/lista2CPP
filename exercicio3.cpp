#include <iostream>

using namespace std;

int main() {
  float altura;
  char sexo;

  cout << "Digite sua altura: " << endl;
  cin >> altura;

  cout << "Qual e o seu sexo? (m - masculino | f - feminino)" << endl;
  cin >> sexo;

  if (sexo == 'm') {
    float formulaHomem = (72.7 * altura) - 58;
    cout << "O seu peso ideal e de " << formulaHomem << " Kilos" << endl;
  } else if (sexo == 'f') {
    float formulaMulher = (62.1 * altura) - 44.7;
    cout << "O seu peso ideal e de " << formulaMulher << " Kilos" << endl;
  }
}
