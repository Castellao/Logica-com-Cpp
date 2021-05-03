#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, X;
    double mediaAltura, somaAltura, porcen;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string vetNome[N];
    int vetIdade[N];
    double vetAltura[N];
    string vetMenor[N];

    X = 0;
    for (int i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, vetNome[i]);
        cout << "Idade: ";
        cin >> vetIdade[i];
        cout << "Altura: ";
        cin >> vetAltura[i];
        if (vetIdade[i] < 16) {
            vetMenor[i] = vetNome[i];
            X++;
        }
    }
    somaAltura = 0;
    for (int i = 0; i < N; i++) {
        somaAltura = somaAltura + vetAltura[i];
    }
    mediaAltura = somaAltura / N;

    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << mediaAltura << endl;

    porcen = (double)X * 100 / N;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcen << "%" << endl;

    for (int i = 0; i < N; i++) {
        if (vetIdade[i] < 16) {
            cout << vetMenor[i] << endl;
        }
    }

    return 0;
}
