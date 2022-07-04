#include <iostream>
using namespace std;

class Node {
    public :
        int value;
        Node* next;
};

void printList(Node*n){
    while(n!=NULL){
        cout << n->value << endl;
        n=n->next;
    }
}

void insertAtTheFront (Node**head, int newValue){
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = *head;
    *head = newNode;
}

void insertAtTheEnd(Node**head, int newValue){
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node* last = *head;
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newNode;
}


int main (){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;    
    third->next = NULL;
    insertAtTheEnd(&head,4);
    printList(head);
    return 0;
}