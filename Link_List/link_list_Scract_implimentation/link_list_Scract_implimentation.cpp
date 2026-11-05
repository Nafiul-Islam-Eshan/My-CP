#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
    
    public:
        List(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if (head == NULL)
            {
                head = tail = newNode;
                return;
            }
            else
            {
                newNode->next = head;
                head = newNode;
            }   
        }

        void push_back(int val)
        {
            Node* newNode = new Node(val);
            if(head == NULL)
            {
                head = tail = newNode;
                return;
            }
            else
            {
                tail->next =newNode;
                tail = newNode;
            }
            
        }

        void pop_front()
        {
            if(head==NULL) // If head points to null that means the link list is empty. Thus there nothing to delete.
            {
                cout << "Empty linked list\n";
                return;
            }

            Node* temp = head; // storing the very beginning node (head) in temp node.
            head = head->next; // Moving the head pointer to the next existing node cause we are deleting the first node and so second node is going to first node now.
            temp->next = NULL; // Disconnecting the first node from the entire link list. Thus it will not link with the second node . Thus First node is totally separated from the linked list.
            delete temp; // now the isolated first node is completely deleted from the memory location. 
        }
        
        void displayLL(){
            Node* temp = head;

            while (temp!=NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            
        }
        
};


int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.pop_front();

    ll.displayLL();
    
    return 0;
}