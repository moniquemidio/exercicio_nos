#include <iostream>
using namespace std;

struct Node {
    int dado;
    Node* prox;
};

void inserirInicio(Node*& head, int valor) {
    Node* novo = new Node{valor, head};
    head = novo;
}

void imprimirLista(Node* head) {
    Node* atual = head;

    while (atual != nullptr) {
        cout << atual->dado << " -> ";
        atual = atual->prox;
    }
    cout << "NULL" << endl;
}

int main() {

    Node* head = new Node{30, nullptr};
    head = new Node{15, head};

    cout << "Lista inicial:" << endl;
    imprimirLista(head);

    inserirInicio(head, 50);

    cout << "Lista após inserir 50 no início:"< endl;
    imprimirLista(head);

    return 0;
}
