#include <iostream>
#include <cstring>
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

    char palavra[10];

    cout << "Digite uma palavra (máx 10 caracteres): ";
    cin >> palavra;

    cout << "A palavra digitada é: " << palavra <<std::endl;

    return 0;
}

int exe05(){

    //Declare um array de caracteres frase com 20 posições. Leia uma frase do usuário usando cin e armazene-a em frase.
    //Imprima a frase usando cout.

    char frase[20];

    cout << "Digite uma frase curta: ";
    cin.getline(frase, 20);
    cout << "A frase digitada foi: " << frase << std::endl;

    return 0;
}

int exe06(){

    //Declare um array de caracteres numeros com 10 posições.
    //Armazene manualmente os números de 1 a 10 nas posições do array. Imprima os números pares do array em linhas separadas usando cout.

    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    if(numeros[0] % 2 == 0) {
        cout << numeros[0] << endl;
    }
    if(numeros[1] % 2 == 0) {
        cout << numeros[1] << endl;
    }
    if(numeros[2] % 2 == 0) {
        cout << numeros[2] << endl;
    }
    if(numeros[3] % 2 == 0) {
        cout << numeros[3] << endl;
    }
    if(numeros[4] % 2 == 0) {
        cout << numeros[4] << endl;
    }
    if(numeros[5] % 2 == 0) {
        cout << numeros[5] << endl;
    }
    if(numeros[6] % 2 == 0) {
        cout << numeros[6] << endl;
    }
    if(numeros[7] % 2 == 0) {
        cout << numeros[7] << endl;
    }
    if(numeros[8] % 2 == 0){
        cout << numeros[8] << endl;
    } 
    if(numeros[9] % 2 == 0) {
        cout << numeros[9] << endl;
    }

    

    return 0;
}


int exe07(){

    //Declare um array de caracteres frutas com 5 posições.
    //Armazene manualmente os nomes de 5 frutas nas posições do array. Imprima a fruta que está na posição 3 do array usando cout.

    string frutas[5] = {"melão", "maçã", "uva", "pêra", "manga"};

    cout << "Fruta na 3° posição é: " << frutas[2] <<std::endl;

    return 0;
    }


int exe08(){

    //Declare um array de caracteres cores com 7 posições. Armazene manualmente os nomes de 7 cores nas posições do array.
    //Leia um número do usuário entre 1 e 7 usando cin. Imprima a cor que está na posição informada pelo usuário usando cout.

    string cores[7] = {"azul", "verde", "rosa", "preto", "amarelo", "branco", "roxo"};
    int n;

    cout << "Digite um número de 1-7: ";
    cin >> n;

    if(n == 1){
        cout << cores[0] <<std::endl;
    } else if(n == 2){
        cout << cores[1] <<std::endl;
    } else if(n == 3){
        cout << cores[2] <<std::endl;
    } else if(n == 4){
        cout << cores[3] <<std::endl;
    } else if(n == 5){
        cout << cores[4] <<std::endl;
    } else if(n == 6){
        cout << cores[5] <<std::endl;
    } else if(n == 7){
        cout << cores[6] <<std::endl;
    } else {
        cout << "Não encontrado." <<std::endl;
    }


    return 0;
}


int exe09(){

    //Declare um array de caracteres animais com 10 posições. Armazene manualmente os nomes de 10 animais nas posições do array.
    //Leia um caractere do usuário usando cin. Verifique se o caractere é a primeira letra de um animal do array. Se for, imprima o nome do animal completo.

    string animal[10] = {"gato", "hamster", "vaca", "boi", "macaco", "pássaro", "tigre", "onça", "crocodilo", "anta"};
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if(letra == 'g'){
        cout << "Animal: " << animal [0] <<std::endl;
    } else if(letra == 'h'){
        cout << "Animal: " << animal [1] <<std::endl;
    } else if(letra == 'v'){
        cout << "Animal: " << animal [2] <<std::endl;
    } else if(letra == 'b'){
        cout << "Animal: " << animal [3] <<std::endl;
    } else if(letra == 'm'){
        cout << "Animal: " << animal [4] <<std::endl;
    } else if(letra == 'p'){
        cout << "Animal: " << animal [5] <<std::endl;
    } else if(letra == 't'){
        cout << "Animal: " << animal [6] <<std::endl;
    } else if(letra == 'o'){
        cout << "Animal: " << animal [7] <<std::endl;
    } else if(letra == 'c'){
        cout << "Animal: " << animal [8] <<std::endl;
    } else if(letra == 'a'){
        cout << "Animal: " << animal [9] <<std::endl;
    } else {
        cout << "Não encontrado." <<std::endl;
    }



    return 0;
}


int exe10(){

    //Declare um array de caracteres dias com 7 posições. Armazene manualmente os nomes dos 7 dias da semana nas posições do array.
    //Leia um número do usuário entre 1 e 7 usando cin. Imprima o dia da semana que está na posição informada pelo usuário usando cout.

    string dias[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};
    int n;

    cout << "Digite um número de 1-7: ";
    cin >> n;

    if(n == 1){
        cout << dias[0] <<std::endl;
    } else if(n == 2){
        cout << dias[1] <<std::endl;
    } else if(n == 3){
        cout << dias[2] <<std::endl;
    } else if(n == 4){
        cout << dias[3] <<std::endl;
    } else if(n == 5){
        cout << dias[4] <<std::endl;
    } else if(n == 6){
        cout << dias[5] <<std::endl;
    } else if(n == 7){
        cout << dias[6] <<std::endl;
    } else {
        cout << "Não econtrado." <<std::endl;
    }


    return 0;
}

int exe11(){

    //Declare um array de caracteres palavra1 e palavra2 com 10 posições cada. Leia duas palavras do usuário usando cin e armazene-as em palavra1 e palavra2.
    //Compare as duas palavras usando a estrutura if e imprima qual palavra é maior em ordem alfabética.

    char palavra1[10], palavra2[10];

    cout << "Digite uma palavra (máx 10 caracteres): ";
    cin >> palavra1;

    cout << "Digite outra palavra (máx 10 caracteres): ";
    cin >> palavra2;

    int comparar = strcmp(palavra1, palavra2) ; //strcmp serve para fazer comparações com strings

    if(comparar < 0){
        cout << "A palavra " << palavra1 << " vem antes de " << palavra2 << " na ordem alfabética." <<std::endl;
    } else if(comparar > 0){
        cout << "A palavra " << palavra2 << " vem antes de " << palavra1 << " na ordem alfabética." <<std::endl;
    } else {
        cout << "As palavras " << palavra1 << " e " << palavra2 << " são iguais" <<std::endl;
    }


    return 0;
}


int exe12(){

    //Declare um array de caracteres frase com 20 posições. Leia uma frase do usuário usando cin e armazene-a em frase.
    //Conte o número de vogais na frase e imprima o resultado usando cout.

    char frase[20];
    int vogais = 0;
    
    cout << "Digite uma frase: ";
    cin.getline(frase, 20);

    if(frase[0] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u')vogais++;
    if(frase[1] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u')vogais++;
    if(frase[2] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u')vogais++;
    if(frase[3] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u')vogais++;
    if(frase[4] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u')vogais++;
    if(frase[5] == 'a' || frase[5] == 'e' || frase[5] == 'i' || frase[5] == 'o' || frase[5] == 'u')vogais++;
    if(frase[6] == 'a' || frase[6] == 'e' || frase[6] == 'i' || frase[6] == 'o' || frase[6] == 'u')vogais++;
    if(frase[7] == 'a' || frase[7] == 'e' || frase[7] == 'i' || frase[7] == 'o' || frase[7] == 'u')vogais++;
    if(frase[8] == 'a' || frase[8] == 'e' || frase[8] == 'i' || frase[8] == 'o' || frase[8] == 'u')vogais++;
    if(frase[9] == 'a' || frase[9] == 'e' || frase[9] == 'i' || frase[9] == 'o' || frase[9] == 'u')vogais++;
    if(frase[10] == 'a' || frase[10] == 'e' || frase[10] == 'i' || frase[10] == 'o' || frase[10] == 'u')vogais++;
    if(frase[11] == 'a' || frase[11] == 'e' || frase[11] == 'i' || frase[11] == 'o' || frase[11] == 'u')vogais++;
    if(frase[12] == 'a' || frase[12] == 'e' || frase[12] == 'i' || frase[12] == 'o' || frase[12] == 'u')vogais++;
    if(frase[13] == 'a' || frase[13] == 'e' || frase[13] == 'i' || frase[13] == 'o' || frase[13] == 'u')vogais++;
    if(frase[14] == 'a' || frase[14] == 'e' || frase[14] == 'i' || frase[14] == 'o' || frase[14] == 'u')vogais++;
    if(frase[15] == 'a' || frase[15] == 'e' || frase[15] == 'i' || frase[15] == 'o' || frase[15] == 'u')vogais++;
    if(frase[16] == 'a' || frase[16] == 'e' || frase[16] == 'i' || frase[16] == 'o' || frase[16] == 'u')vogais++;
    if(frase[17] == 'a' || frase[17] == 'e' || frase[17] == 'i' || frase[17] == 'o' || frase[17] == 'u')vogais++;
    if(frase[18] == 'a' || frase[18] == 'e' || frase[18] == 'i' || frase[18] == 'o' || frase[18] == 'u')vogais++;
    if(frase[19] == 'a' || frase[19] == 'e' || frase[19] == 'i' || frase[19] == 'o' || frase[19] == 'u')vogais++;
    if(frase[20] == 'a' || frase[20] == 'e' || frase[20] == 'i' || frase[20] == 'o' || frase[20] == 'u')vogais++;

    cout << "O número de vogais na frase é: " << vogais <<std::endl;



    return 0;
}

int exe13(){

    //Declare um array de caracteres texto com 50 posições. Leia um texto do usuário usando cin e armazene-o em texto.
    //Encontre a primeira ocorrência da letra 'a' no texto e imprima a posição da letra.

    char texto[15];

    cout << "Digite um texto: ";
    cin.getline(texto, 15);

    if(texto[0] == 'a'){
        cout << "Primeiro caractere" << endl;
    } else if(texto[1] == 'a'){
        cout << "Segundo caractere" << endl;
    } else if(texto[2] == 'a'){
        cout << "Terceiro caractere" << endl;
    } else if(texto[3] == 'a'){
        cout << "Quarto caractere" << endl;
    } else if(texto[4] == 'a'){
        cout << "Quinto caractere" << endl;
    } else if(texto[5] == 'a'){
        cout << "Sexto caractere" << endl;
    } else if(texto[6] == 'a'){
        cout << "Sétimo caractere" << endl;
    } else if(texto[7] == 'a'){
        cout << "Oitavo caractere" << endl;
    } else if(texto[8] == 'a'){
        cout << "Nono caractere" << endl;
    } else if(texto[9] == 'a'){
        cout << "Décimo caractere" << endl;
    } else if(texto[10] == 'a'){
        cout << "Décimo Primeiro caractere" << endl;
    } else if(texto[11] == 'a'){
        cout << "Décimo Segundo caractere" << endl;
    } else if(texto[12] == 'a'){
        cout << "Décimo Terceiro caractere" << endl;
    } else if(texto[13] == 'a'){
        cout << "Décimo Quarto caractere" << endl;
    } else if(texto[14] == 'a'){
        cout << "Décimo Quinto caractere" << endl;
    }


    return 0;
}


int exe14(){

    //Declare um array de caracteres palavra com 10 posições. Leia uma palavra do usuário usando cin e armazene-a em palavra.
    //Inverta a ordem dos caracteres da palavra e imprima a palavra invertida usando cout.

    char palavra[10];

    cout << "Digite uma palavra";
    cin >> palavra;





    return 0;
}


int exe15(){

    //Declare um array de caracteres frase com 20 posições. Leia uma frase do usuário usando cin e armazene-a em frase. Substitua todas as vogais da frase por '*'.
    //Imprima a frase com as vogais substituídas usando cout.

    char frase[20];

    cout << "Digite uma frase: ";
    cin >> frase;

    if(frase[0] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u')

    vec.insert(vec.begin() + 1, "laranja")


    return 0;
}










int main(){
    //exe01();
    //exe02();
    //exe03();
    //exe04();
    //exe05();
    //exe06();
    //exe07();
    //exe08();
    //exe09();
    //exe10();
    //exe11();
    //exe12();
    //exe13();
    //exe14();
    exe15();

    }