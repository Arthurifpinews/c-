#include<bits/stdc++.h>
using namespace std;

int main(){
    string nome1, nome2;
    cout << "Digite aqui o seu nome--> ";
    getline(cin, nome1);
    cout << "Digite o nome da sua amda--> ";
    getline(cin, nome2);
    if (nome1 == "Arthur Brito Veloso Dantas" && nome2 == "Eduarda Agnes Nascimento Silva"){
        cout << "Esse casal tem 100%, de chance de se casar e de viverem felizes e juntos" << endl;
        cout << "Parabens, senhor " << nome1 << " e senhora " << nome2 ;
    }else if (nome1 == "Arthur Brito Veloso Dantas" &&  nome2 != "Eduarda Agnes Nascimento Silva" || nome1 != "Eduarda Agnes Nascimento Silva" && nome2 == "Arthur Brito Veloso Dantas" )
    {
        cout << "tem mulher ja chara, ta tirando?";
        
    }
    
}