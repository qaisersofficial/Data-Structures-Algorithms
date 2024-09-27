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
        head = NULL; // Initialize head to NULL
    }
};
int main() {
    singlyLinkList sLL; // Object of singlyLinkList
return 0;
}
