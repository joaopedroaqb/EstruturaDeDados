#include <iostream>
#include <queue>

using namespace std;

void enfileirar(queue<int>& fila) {
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;
    if (numero > 0) {
        fila.push(numero);
        cout << "Número enfileirado com sucesso!" << endl;
    } else {
        cout << "Número inválido! Apenas números inteiros positivos são permitidos." << endl;
    }
}

void desenfileirarMultiplosDeCinco(queue<int>& fila) {
    cout << "Desenfileirando e imprimindo múltiplos de 5:" << endl;
    while (!fila.empty()) {
        int numero = fila.front();
        if (numero % 5 == 0) {
            cout << numero << endl;
        }
        fila.pop();
    }
}

int main() {
    queue<int> fila;
    int opcao;

    do {
        cout << "Menu:" << endl;
        cout << "1. Enfileirar um número inteiro positivo" << endl;
        cout << "2. Desenfileirar todos e imprimir os múltiplos de 5" << endl;
        cout << "3. Terminar o programa" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                enfileirar(fila);
                break;
            case 2:
                desenfileirarMultiplosDeCinco(fila);
                break;
            case 3:
                cout << "Programa encerrado." << endl;
                break;
            default:
                cout << "Opção inválida! Digite um número válido." << endl;
        }

        cout << endl;

    } while (opcao != 3);

    return 0;
}
