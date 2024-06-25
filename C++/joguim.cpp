#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int numeroSecreto=rand()%100+1; //sorteia um numero aleatorio entre 1 e 100
    int tentativas=8; //numero de tentativas
        int palpite;

    do{ //Loop para adivinha o numero
    cout<<"Tentativas restantes: "<<tentativas<<":\n Digite um numero :"; //pede um palpite do usuario
    cin>>palpite;
if (palpite<numeroSecreto){
    cout<<"O numero e mais alto!"<<endl;
}
else if (palpite>numeroSecreto) { //verifica se o palpite esta correto
    cout<<"O numero e menor!"<<endl;
}
tentativas--; //Decrementa o numero de tentativas


    } while (palpite!=numeroSecreto && tentativas>0);
    if (palpite==numeroSecreto){
        cout<<"Parabens! voce acertou o numero faltando "<<tentativas<< " tentativas!"<<endl;
    } else {
        cout<<"Voce nao conseguiu adivinhar o numero. O numero certo era "<<numeroSecreto<<endl;
    }
    return 0;
}