#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *createNode(int x) {
    Node *node;
    node = new Node();

    node->data = x;
    node->next = nullptr;

    return node;
}

void insertFirst(Node *&head, int x) {
    Node *node = createNode(x);

    if (head == nullptr) {
        head = node;
        return;
    }

    node->next = head;
    head = node;
}

void browse(Node *head) {
    while (head != nullptr) {
        if (head->next == nullptr) {
            cout << head->data << endl;
        } else {
            cout << head->data << " -> ";
        }
        
        head = head->next;
    }
}

int main() {
    Node *head = nullptr;

    for (int i = 1; i < 5; i++) {
        insertFirst(head, i);
    }

    browse(head);
}