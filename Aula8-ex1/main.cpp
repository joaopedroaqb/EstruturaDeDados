#include <iostream>
#include <queue>

using namespace std;

void enfileirar(queue<int>& fila) {
    int n1;
    cout << "Digite um número inteiro positivo: ";
    cin >> n1;
    if (n1 > 0) {
        fila.push(n1);
        cout << "Número enfileirado com sucesso!" << endl;
    } else {
        cout << "Número inválido! Apenas números inteiros positivos são permitidos." << endl;
    }
}

void desenfileirarImprimirDobro(queue<int>& fila) {
    if (!fila.empty()) {
        int n1 = fila.front();
        fila.pop();
        cout << "O dobro do número desenfileirado é: " << n1 * 2 << endl;
    } else {
        cout << "A fila está vazia. Não é possível desenfileirar um número." << endl;
    }
}

void desenfileirarExibirValores(queue<int>& fila) {
    if (!fila.empty()) {
        cout << "Valores desenfileirados:" << endl;
        while (!fila.empty()) {
            int n1 = fila.front();
            fila.pop();
            cout << n1 << endl;
        }
    } else {
        cout << "A fila está vazia. Não há valores para desenfileirar." << endl;
    }
}

int main() {
    queue<int> fila;
    int opc;

    do {
        cout << "Menu:" << endl;
        cout << "1. Enfileirar um número inteiro positivo" << endl;
        cout << "2. Desenfileirar um número e imprimir o seu dobro" << endl;
        cout << "3. Desenfileirar tudo, exibindo os valores sem alterações" << endl;
        cout << "4. Terminar o programa" << endl;
        cout << "Escolha uma opção: ";
        cin >> opc;

        switch (opc) {
            case 1:
                enfileirar(fila);
                break;
            case 2:
                desenfileirarImprimirDobro(fila);
                break;
            case 3:
                desenfileirarExibirValores(fila);
                break;
            case 4:
                cout << "Programa encerrado." << endl;
                break;
            default:
                cout << "Opção inválida! Digite um número válido." << endl;
        }

        cout << endl;

    } while (opc != 4);

    return 0;
}
