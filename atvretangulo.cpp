#include <bits/stdc++.h>
using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;
    cout << "Digite a base do retangulo (EM CM): ";
    cin >> base;
    cout << "Digite a altura do retangulo (EM CM): ";
    cin >> altura;

    perimetro = base + altura * 2;
    area = base * altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    cout << "A area do seu retangulo e igual a -->" << fixed << setprecision(3) << area << "cm" << endl;
    cout << "O perimetro do seu retangulo e igual a -->" << fixed << setprecision(2) << perimetro << "cm" <<endl;
    cout << "A Diagonal do seu retangulo e igual a -->" << fixed << setprecision(2) << diagonal << "cm" << endl;

}