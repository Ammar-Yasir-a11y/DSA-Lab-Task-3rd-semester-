#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    const int TOTAL_NODES = 5;
    Node* head = NULL;
    Node* tail = NULL;

    cout << "Enter " << TOTAL_NODES << " integer values: ";
    for (int i = 0; i < TOTAL_NODES; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Traverse and count nodes
    Node* temp = head;
    int count = 0;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << "Total nodes: " << count << endl;

    // Release dynamically allocated memory using a loop
    temp = head;
    while (temp != NULL) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = NULL;

    return 0;
}
