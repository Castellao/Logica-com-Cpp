#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome;
    int horas;
    double valorPH, pagamento;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorPH;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valorPH * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;

    return 0;
}
