#include <iostream>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

void enfileirar(queue<char>& fl) {
    string seq;
    cout << "Digite uma sequência de caracteres: ";
    getline(cin, seq);

    for (char c : seq) {
        fl.push(c);
    }

    cout << "Caracteres enfileirados com sucesso!" << endl;
}

void desenfileirarEmpilhar(queue<char>& fl, stack<char>& pilha1) {
    while (!fl.empty()) {
        char caracter = fl.front();
        fl.pop();

        if (isalpha(caracter)) {
            caracter = toupper(caracter);
        }

        pilha1.push(caracter);
    }

    cout << "Caracteres desenfileirados e empilhados com sucesso!" << endl;
}

void desempilharImprimir(stack<char>& pilha1) {
    cout << "Caracteres desempilhados e impressos:" << endl;
    while (!pilha1.empty()) {
        char caracter = pilha1.top();
        pilha1.pop();
        cout << caracter;
    }
    cout << endl;
}

int main() {
    queue<char> fl;
    stack<char> pilha1;

    enfileirar(fl);
    desenfileirarEmpilhar(fl, pilha1);
    desempilharImprimir(pilha1);

    return 0;
}