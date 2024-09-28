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

   // Delete a node from the beginning.
        void deleteFromBeginning(){
            if (head == nullptr) {
                cout << "List is empty, nothing to delete." << endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node deleted from the beginning." << endl;
        }
};
int main() {
    singlyLinkList sLL; // Object of singlyLinkList
    sLL.deleteFromBeginning(); // output: List is empty, nothing to delete.
    return 0;
}