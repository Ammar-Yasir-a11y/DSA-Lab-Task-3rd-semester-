#include <iostream>
using namespace std;

// Define the structure of a node
struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    // Create five nodes dynamically
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    // Take five integer values from the user
    cout << "Enter 5 integer values: ";
    cin >> head->data >> second->data >> third->data >> fourth->data >> fifth->data;

    // Connect the first node
    head->prev = NULL;
    head->next = second;

    // Connect the second node
    second->prev = head;
    second->next = third;

    // Connect the third node
    third->prev = second;
    third->next = fourth;

    // Connect the fourth node
    fourth->prev = third;
    fourth->next = fifth;

    // Connect the fifth node
    fifth->prev = fourth;
    fifth->next = NULL;

    // Forward traversal: start at head and count nodes
    cout << "Forward Traversal:" << endl;
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Backward traversal: start at last node (fifth)
    cout << "Backward Traversal:" << endl;
    temp = fifth;
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;

    // Display total number of nodes
    cout << "Total Nodes: " << count << endl;

    // Release dynamically allocated memory
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
