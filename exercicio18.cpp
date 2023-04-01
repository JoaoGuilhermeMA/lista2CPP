#include<iostream>

using namespace std;

int main()
{
    float valorCompra, valorParcela;
    int qntdParcela;
    bool comJuros;

    cout << "Digite o valor total de sua compra: " << endl;
    cin >> valorCompra;
    cout << "Digite quantas parcelas voce pagou: " << endl;
    cin >> qntdParcela;
    cout << "Digite o valor de cada parcela: " << endl;
    cin >> valorParcela;

    comJuros = valorParcela > (valorCompra / qntdParcela);

    if(comJuros){
        cout << "O pagamento foi realizado com juros" << endl;
    }else {
        cout << "O pagamento foi realizado sem juros" << endl;
    }
}
