#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int value;
    Node* prev; // ponteiro para o nó anterior
    Node* next; // ponteiro para o nó seguinte
};

Node* head = NULL; // cabeça da lista
Node* tail = NULL; // cauda da lista

// Função para criar um novo nó
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Função para adicionar um nó no final da lista
void addToEnd(int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

// Função para adicionar um nó no início da lista
void addToBeginning(int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// Função para remover um nó do final da lista
void removeFromEnd() {
    if (tail == NULL) {
        printf("Lista vazia\n");
        return;
    }
    Node* nodeToRemove = tail;
    tail = tail->prev;
    if (tail == NULL) {
        head = NULL;
    } else {
        tail->next = NULL;
    }
    free(nodeToRemove);
}

// Função para remover um nó do início da lista
void removeFromBeginning() {
    if (head == NULL) {
        printf("Lista vazia\n");
        return;
    }
    Node* nodeToRemove = head;
    head = head->next;
    if (head == NULL) {
        tail = NULL;
    } else {
        head->prev = NULL;
    }
    free(nodeToRemove);
}

// Função para listar um nó da lista
void printNode(int index) {
    Node* current = head;
    int i = 0;
    while (current != NULL && i < index) {
        current = current->next;
        i++;
    }
    if (current == NULL) {
        printf("Elemento não encontrado\n");
    } else {
        printf("Elemento na posição %d: %d\n", index, current->value);
    }
}

// Função para listar todos os nós da lista
void printList() {
    Node* current = head;
    printf("Lista: ");
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main() {
    addToEnd(1);
    addToEnd(2);
    addToEnd(3);
    addToBeginning(0);
    printList(); // Lista: 0 1 2 3
    printNode(2); // Elemento na posição 2: 2
    removeFromEnd();
    removeFromBeginning();
    printList(); // Lista: 1 2
    return 0;
}