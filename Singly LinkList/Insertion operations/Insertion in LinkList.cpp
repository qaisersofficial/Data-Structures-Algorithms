#include <iostream>
using namespace std;

struct Node // Node structure
{
    int data;   // Data to store
    Node* next; // Pointer to next node
};
class singlyLinkList
{
    public:
    Node* head; // Head of the link list
    singlyLinkList() // Constructor
    {
        head = nullptr; // Initialize head to NULL, we can also use nullptr 
    }
    void insertAtBegin(int data) // Function to insert at the beginning
    {
        Node* newNode = new Node(); // Create a new node
        newNode->data = data; // Assign data to the new node
        newNode->next = head; // Point the new node to the head
        head = newNode; // Make the new node as head
    }
    void display() // Function to display the link list
    {
        Node* temp = head; // Create a temporary pointer to head
        while(temp != nullptr) // Iterate till the end of the link list
        {
            cout << temp->data << " "; // Print the data
            temp = temp->next; // Move the pointer to the next node
        }
    }
};
int main() {
    singlyLinkList sLL; // Object of singlyLinkList
    sLL.insertAtBegin(10); // Insert 10 at the beginning
    sLL.insertAtBegin(20); // Insert 20 at the beginning
    sLL.insertAtBegin(30); // Insert 30 at the beginning
    sLL.display(); // Display the singly link list
return 0;
}
