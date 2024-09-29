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
    // Function to reverse the singly link list
    void reverseSinglyLinkList()
    {
        Node* prev = nullptr; // Create a previous pointer and initialize it to NULL
        Node* current = head; // Create a current pointer and initialize it to head
        Node* next = nullptr; // Create a next pointer and initialize it to NULL
        while(current != nullptr) // Iterate till the end of the link list
        {
            next = current->next; // Point the next pointer to the next node
            current->next = prev; // Point the current node to the previous node
            prev = current; // Move the previous pointer to the current node
            current = next; // Move the current pointer to the next node
        }
        head = prev; // Make the last node as head
    }
      void display() // Function to display the link list
    {
        Node* temp = head; // Create a temporary pointer to head
        while(temp != nullptr) // Traverse till the end of the link list
        {
            cout << temp->data << "->"; // Print the data
             if (temp->next == nullptr) {
                cout << "null";
            }
            temp = temp->next; // Move the pointer to the next node
        }
    }
};
int main() {
    singlyLinkList sLL; // Object of singlyLinkList
    cout << "After inserting at the beginning: ";
    sLL.insertAtBegin(1);
    sLL.display(); 
    cout << endl;
    cout << "After inserting at the end: ";
    sLL.insertAtEnd(3);
    sLL.display(); 
    cout << endl;
    cout << "After inserting at the position 2: ";
    sLL.insertAtPosition(2,2);
    sLL.display(); // Display the singly link list
    cout << endl;
    cout << "Reversed singly link list: ";
    sLL.reverseSinglyLinkList(); // Reverse the singly link list
    sLL.display(); // Display the singly link list
return 0;
}
