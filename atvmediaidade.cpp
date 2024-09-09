#include<bits/stdc++.h>
using namespace std;

int main(){
    int idade1, idade2;
    string nome1, nome2;
    double media;

    cout << "Digite aqui o seu nome: ";
    cin >> nome1;
    cout << "Digite a sua idade: ";
    cin >> idade1;
      cout << "Digite aqui o segundo nome: ";
    cin >> nome2;
    cout << "Digite a segunda idade: ";
    cin >> idade2;
    
    media = (double) (idade1 + idade2)/2;
    cout << "A média de idade entre" << nome1 << " e " << nome2 << " e igual a --> " << fixed << setprecision(2) << media << endl;

}