#include <iostream>
using namespace std;

int exe01(){

    //Declare uma variável do tipo String chamada nome e armazene seu nome nela. Imprima o valor de nome usando cout.
    
    string nome;

    cout << "Digite seu nome de usuário: ";
    cin >> nome;

    cout << "Seu nome: " << nome << std::endl;

    return 0;
}


int exe02(){

    //Declare um array de caracteres vogais com 5 posições. Insira manualmente as vogais ('a', 'e', 'i', 'o', 'u') nas posições do array.
    //Imprima cada vogal em uma linha usando cout.


    char arrV[5] = {'a', 'e', 'i', 'o', 'u'};

    cout << arrV[0] << std::endl;
    cout << arrV[1] << std::endl;
    cout << arrV[2] << std::endl;
    cout << arrV[3] << std::endl;
    cout << arrV[4] << std::endl;

    return 0;
}


int exe03(){

    //Declare uma variável do tipo String chamada letra. Leia um caractere do usuário usando cin e armazene-o em letra.
    //Verifique se letra é uma vogal usando a estrutura if e imprima uma mensagem informando se é ou não.

    string letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        cout << "A letra é vogal" <<std::endl;
    } else {
        cout << "A letra é consoante" <<std::endl;
    }

    return 0;
}

int exe04(){

    //Declare um array de caracteres palavra com 10 posições. Leia uma palavra do usuário usando cin e armazene-a em palavra. Imprima a palavra usando cout.

    char palavra[11];

    cout << "Digite uma palavra (máx 10 caracteres): ";
    cin >> palavra[11];

    cout << palavra[0] << palavra[1] << palavra[2] << palavra[3] << palavra[4] << palavra[5] << palavra[6] << palavra[7] << palavra0]


    return 0;
}









int main(){
    //exe01();
    //exe02();
    //exe03();
    exe04();





}