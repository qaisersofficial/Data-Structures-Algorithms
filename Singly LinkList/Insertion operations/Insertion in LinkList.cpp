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
    // Function to insert at the end
    void insertAtEnd(int data)
    {
        Node* newNode = new Node(); // Create a new node
        newNode->data = data; // Assign data to the new node
        newNode->next = nullptr; // Point the new node to NULL
        if(head == nullptr) // If the link list is empty
        {
            head = newNode; // Make the new node as head
            return;
        }else
        {
            Node* temp = head; // Create a temporary pointer to head
            while(temp->next != nullptr) // Iterate till the end of the link list
            {
                temp = temp->next; // Move the pointer to the next node
            }
            temp->next = newNode; // Point the last node to the new node
        }
    }
  
    // Function to insert at a given position
    void insertAtPosition(int data, int position)
    {
        Node* newNode = new Node(); // Create a new node
        newNode->data = data; // Assign data to the new node
        newNode->next = nullptr; // Point the new node to NULL
        if(position == 1) // If the position is true
        {
            newNode->next = head; // Point the new node to the head
            head = newNode; // Make the new node as head
            return;
        }
        Node* temp = head; // Create a temporary pointer to head
        for(int i = 1; i < position - 1; i++) // Iterate till the position - 1
        {
            temp = temp->next; // Move the pointer to the next node
        }
        newNode->next = temp->next; // Point the new node to the next node
        temp->next = newNode; // Point the previous node to the new node
    }
      void display() // Function to display the link list
    {
        Node* temp = head; // Create a temporary pointer to head
        while(temp != nullptr) // Traverse till the end of the link list
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
    sLL.insertAtEnd(40); // Insert 40 at the end
    sLL.insertAtEnd(50); // Insert 50 at the end
    sLL.insertAtPosition(25, 2); // Insert 25 at position 2
    sLL.display(); // Display the singly link list
return 0;
}
