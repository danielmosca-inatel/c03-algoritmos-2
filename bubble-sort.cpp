#include <iostream>
using namespace std;

void bubbleSort (int vetor[], int tamanho)
{
    int i,j; // contadores
    int trab;
    bool troca;
    int limite;

    troca = true;
    limite = tamanho-1;
    while (troca)
    {
        troca = false;
        for (i=0;i<limite;i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                trab = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = trab;
                j = i;
                troca = true;
            }
        }

        limite = j;
    }
}

int main() {
    int vetor[] = {5, 2, 9, 1, 5, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    cout << "Vetor original: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    bubbleSort(vetor, tamanho);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}