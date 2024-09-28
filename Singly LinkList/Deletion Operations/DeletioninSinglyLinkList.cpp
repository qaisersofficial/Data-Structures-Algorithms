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

        // Delete a node from a given position.
        void deleteFromPosition(int position){
            if (!head) //head == nullptr
            {
                cout << "Link List is empty";
            }
            //if the position is 1, delete the head node
            if (position == 1) // position starts fromm 1
            {
                Node* toDeleteHead = head;
                head = head->next;
                delete toDeleteHead;
                return;
            }
            //traverse to find the node just before the position
            Node* deleteSpecificPosition = head;
            for (int i = 1; deleteSpecificPosition && i < position - 1; ++i) // deleteSpecificPosition != nullptr
            {
                deleteSpecificPosition = deleteSpecificPosition->next;
            }
            if (!deleteSpecificPosition || !deleteSpecificPosition->next)
            {
                cout << "Position out of bounds";
            }
            Node* nodeToDelete = deleteSpecificPosition->next;
            deleteSpecificPosition->next = deleteSpecificPosition->next->next;
            delete nodeToDelete;    
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
    // sLL.insertNode(31);
    // sLL.insertNode(74);
    // sLL.insertNode(12);
    // cout << "List before Deletion at end:- \t";
    // sLL.display();
    // sLL.deleteAtEnd();
    // cout << "\nList after Deletion at end:- \t";
    // sLL.display();

        sLL.insertNode(69);
        sLL.insertNode(23);
        sLL.insertNode(45);
        sLL.insertNode(12);
        sLL.insertNode(89);
        sLL.insertNode(34);
        sLL.insertNode(56);
        sLL.insertNode(78);
        cout << "List before deletion: ";
        sLL.display();
        sLL.deleteFromPosition(3);
        cout << "\nList after deletion from position 3: ";
        sLL.display();
    return 0;
}