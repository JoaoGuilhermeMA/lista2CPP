#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x1, x2, a, b, c, delta;


    cout << "Digite o valor da incognita a: " << endl;
    cin >> a;

    cout << "Digite o valor da incognita b: " << endl;
    cin >> b;

    cout << "Digite o valor da incognita c: " << endl;
    cin >> c;

    delta = (b*b) - 4*a*c;
    if(a == 0){
        cout << "Nao e uma equacao do 2 grau" << endl;
    }else {
        if(delta < 0){
            cout << "Nao existe raiz" << endl;
        }else{
            if(delta == 0){
                cout << "raiz unica" << endl;
            }else{
                x1 = (-b + sqrt(delta))/(2*a);
                x2 = (-b - sqrt(delta))/(2*a);
                cout << "raiz positiva: " << x1 << endl;
                cout << "raiz negativa: " << x2 << endl;

            }
        }
    }



}
