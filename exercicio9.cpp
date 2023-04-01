#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, numero3;
    char letra;
    cout << "Digite tres numero: " << endl;
    cin >> numero1 >> numero2 >> numero3;
    if (numero1 == numero2 && numero1 == numero3 && numero3 == numero2)
    {
        cout << "O numeros sao iguais" << endl;
        return 0;
    }

    cout << "Voce quer ordenar esses numeros na forma crescente - (c) ou decrescente - (d)" << endl;
    cin >> letra;

    if (letra == 'c')
    {
        if (numero1 < numero2 && numero1 < numero3)
        {                          // numero 1 menor
            if (numero2 < numero3) // numero1 < numero2 < numero3
            {
                cout << "numero1: " << numero1 << " numero2: " << numero2 << " numero3: " << numero3 << endl;
            }
            else
            { // numero1 < numero3 < numero2
                cout << "numero1: " << numero1 << " numero3: " << numero3 << " numero2: " << numero2 << endl;
            }
        }
        else
        {
            if (numero2 < numero1 && numero2 < numero3)
            { // numero 2 menor
                if (numero1 < numero3)
                { // numero2 < numero1 < numero3
                    cout << "numero2: " << numero2 << " numero1: " << numero1 << " numero3: " << numero3 << endl;
                }
                else
                { // numero2 < numero3 < numero1
                    cout << "numero2: " << numero2 << " numero3: " << numero3 << " numero1: " << numero1 << endl;
                }
            }
            else
            { // numero 2 nao e menor
                if (numero3 < numero1 && numero3 < numero2)
                { // numero 3 menor
                    if (numero1 < numero2)
                    { // numero3 < numero1 < numero2
                        cout << "numero3: " << numero3 << " numero1: " << numero1 << " numero2: " << numero2 << endl;
                    }
                    else
                    { // numero3 < numero2 < numero1
                        cout << "numero3: " << numero3 << " numero2: " << numero2 << " numero1: " << numero1 << endl;
                    }
                }
            }
        }
    }
    else
    {
        if (letra == 'd')
        {
            if (numero1 > numero2 && numero1 > numero3)
            { // numero 1 maior
                if (numero2 > numero3) // numero1 > numero2 > numero3
                {
                    cout << "numero1: " << numero1 << " numero2: " << numero2 << " numero3: " << numero3 << endl;
                }
                else
                { // numero1 > numero3 > numero2
                    cout << "numero1: " << numero1 << " numero3: " << numero3 << " numero2: " << numero2 << endl;
                }
            }
            else
            {
                if (numero2 > numero1 && numero2 > numero3)
                { // numero 2 maior
                    if (numero1 > numero3)
                    { // numero2 > numero1 > numero3
                        cout << "numero2: " << numero2 << " numero1: " << numero1 << " numero3: " << numero3 << endl;
                    }
                    else
                    { // numero2 > numero3 > numero1
                        cout << "numero2: " << numero2 << " numero3: " << numero3 << " numero1: " << numero1 << endl;
                    }
                }
                else
                {
                    if (numero3 > numero1 && numero3 > numero2)
                    { // numero 3 maior
                        if (numero1 > numero2)
                        { // numero3 > numero1 > numero2
                            cout << "numero3: " << numero3 << " numero1: " << numero1 << " numero2: " << numero2 << endl;
                        }
                        else
                        { // numero3 > numero2 > numero1
                            cout << "numero3: " << numero3 << " numero2: " << numero2 << " numero1: " << numero1 << endl;
                        }
                    }
                }
            }
        }
    }
}
