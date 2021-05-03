#include <bits/stdc++.h>

using namespace std;

int main()
{
    int distancia;
    double combustivel, media;

    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustivel gasto: ";
    cin >> combustivel;

    media = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << media << endl;

    return 0;
}
