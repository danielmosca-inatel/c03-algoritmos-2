#include <iostream>

using namespace std;

void insertionSort(int vetor[], int tamanho)
{
    int i,j;
    int chave;

    for (j=1;j<tamanho;j++)
    {
        chave = vetor[j];
        i = j-1;
        while ((i >= 0) && (vetor[i] > chave))
        {
            vetor[i+1] = vetor[i];
            i = i-1;
        }
        vetor[i+1] = chave;
    }
}

int main() {
    int vetor[] = {12, 11, 13, 5, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    cout << "Vetor original: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    insertionSort(vetor, tamanho);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}