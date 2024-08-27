#include <iostream>
using namespace std;

void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        int temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }
}

int main() {
    int vetor[] = {64, 25, 12, 22, 11};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    cout << "Vetor original: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    selectionSort(vetor, tamanho);
    
    cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;
    return 0;
}
