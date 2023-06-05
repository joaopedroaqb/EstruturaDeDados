#include <iostream>
#include <queue>
#include <cctype>

using namespace std;

void enfileirarSeLetra(char c, queue<char>& fA) {
    if (isalpha(c)) {
        fA.push(c);
    }
}

void enfileirarSeDigito(char c, queue<int>& fB) {
    if (isdigit(c)) {
        int dgt = c - '0';
        fB.push(dgt);
    }
}

void enfileirarCaracteres(queue<char>& fA, queue<int>& fB) {
    string sqc;
    cout << "Digite uma sequência de caracteres: ";
    getline(cin, sqc);

    for (char c : sqc) {
        enfileirarSeLetra(c, fA);
        enfileirarSeDigito(c, fB);
    }

    cout << "Caracteres enfileirados com sucesso!" << endl;
}

void desenfileirarImprimirValores(queue<int>& fB, queue<char>& fA) {
    cout << "Valores desenfileirados em ordem (filaB seguido de filaA):" << endl;

    while (!fB.empty()) {
        int vB = fB.front();
        fB.pop();
        cout << vB << " ";
    }

    while (!fA.empty()) {
        char vA = fA.front();
        fA.pop();
        cout << vA << " ";
    }

    cout << endl;
}

int main() {
    queue<char> fA;
    queue<int> fB;

    enfileirarCaracteres(fA, fB);
    desenfileirarImprimirValores(fB, fA);

    return 0;
}
