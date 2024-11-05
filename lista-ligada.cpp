#include <iostream>

typedef struct No {
    int info;
    struct No* prox;
} Lista;

// Inicializa a lista como vazia
Lista* inicializar() {
    return nullptr;
}

// Insere um elemento no início da lista
Lista* inserir(Lista* lista, int valor) {
    Lista* novo = new No;
    novo->info = valor;
    novo->prox = lista;
    return novo;
}

// Exibe todos os elementos da lista
void exibir(Lista* lista) {
    Lista* p = lista;
    while (p != nullptr) {
        std::cout << p->info << " ";
        p = p->prox;
    }
    std::cout << std::endl;
}

// Libera toda a memória alocada para a lista
void liberar(Lista* lista) {
    Lista* p = lista;
    while (p != nullptr) {
        Lista* temp = p->prox;
        delete p;
        p = temp;
    }
}

// Remove um elemento da lista (primeira ocorrência)
Lista* remover(Lista* lista, int valor) {
    Lista* anterior = nullptr;
    Lista* p = lista;
    while (p != nullptr && p->info != valor) {
        anterior = p;
        p = p->prox;
    }
    if (p == nullptr) return lista; // elemento não encontrado
    if (anterior == nullptr) {
        lista = p->prox; // remove o primeiro elemento
    } else {
        anterior->prox = p->prox; // remove um elemento do meio ou final
    }
    delete p;
    return lista;
}

int main() {
    Lista* lista = inicializar();
    lista = inserir(lista, 10);
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);

    std::cout << "Lista atual: ";
    exibir(lista);

    lista = remover(lista, 20);
    std::cout << "Lista após remover 20: ";
    exibir(lista);

    liberar(lista);
    return 0;
}
