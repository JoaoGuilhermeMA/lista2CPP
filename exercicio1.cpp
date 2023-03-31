#include <iostream>
using namespace std;

int main() {
  int X, Y, Z;
  cout << "Digite os valores de X, Y e Z" << endl;
  cin >> X >> Y >> Z;
  bool trianguloEquilatero = X == Y && X == Z && Y == Z;
  bool trianguloIsosceles = X == Y || X == Z || Y == Z;
  bool numeroValido = X == 0 && Y == 0  && X == 0;

  if (!numeroValido) {
    if (trianguloEquilatero) {
      cout << "E um triangulo equilatero" << endl;
    } else {
      if (trianguloIsosceles) {
        cout << "E um triangulo isosceles" << endl;
      } else {
        cout << "E um triangulo escaleno";
      }
    }
  } else {
    cout << "invalido";
  }
}
