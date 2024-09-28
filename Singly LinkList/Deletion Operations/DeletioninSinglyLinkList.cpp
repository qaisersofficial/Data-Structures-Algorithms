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
    //insert a node
    void insertNode(int data) {
        // Create a new node
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;

        // If the linked list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
        }
        else {
            // Traverse the list to find the last node
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            // Point the last node to the new node
            temp->next = newNode;
        }
    }

   // Delete a node from the beginning.
        void deleteFromBeginning(){
            if (head == nullptr) {
                cout << "List is empty, nothing to delete." << endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node with data " << temp->data << " deleted from the beginning." << endl;
        }

    // Delete a node from the end.
        void deleteAtEnd(){
            // if list is empty
            if (head == nullptr){
                cout << "Link list is empty";
            }
            // if list has only one node
            if (head->next == nullptr)
            {
                delete head;
                head = nullptr;
                return;
            }
            // traverse to find the second-to-last node
            Node* temp = head;
            while (temp->next->next != nullptr)
            {
               temp = temp->next;
            }
                Node* delTailNode = temp->next;
                delete delTailNode;
                temp->next = nullptr; 
        }
        void display(){
            Node* tempPtr = head;
            while (tempPtr != nullptr)
            {
               cout << tempPtr->data <<"->";
            if (tempPtr->next == nullptr) {
                cout << "null";
            }
               tempPtr = tempPtr->next;
            }
        }
};
int main() {
    singlyLinkList sLL; // Object of singlyLinkList
    
    // sLL.insertNode(65+16+80); //161
    //sLL.insertNode(70);
    // sLL.insertNode(90);
    // sLL.deleteFromBeginning(); 
    // sLL.deleteFromBeginning();
    // sLL.deleteFromBeginning();
    // sLL.deleteFromBeginning();
    // sLL.display();
/*  output: Node with data 161 deleted from the beginning.
    Node with data 70 deleted from the beginning.
    Node with data 90 deleted from the beginning.
    List is empty, nothing to delete. */
    sLL.insertNode(31);
    sLL.insertNode(74);
    sLL.insertNode(12);
    cout << "List before Deletion at end:- \t";
    sLL.display();
    sLL.deleteAtEnd();
    cout << "\nList after Deletion at end:- \t";
    sLL.display();
    return 0;
}