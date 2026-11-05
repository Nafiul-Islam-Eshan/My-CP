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

        void pop_back()
        {
            if(head == NULL)
            {
                cout << "Empty linked list\n";
                return;
            }


            Node* temp = head;
            while (temp->next != tail) // This loop will help to find the 2nd last node(previous node of tail), so that tail pointer can be shifted to previouse node.
            {
                temp = temp->next;
            }

            temp->next=NULL; //Temp is now contain the second last node and so we are disconnected it with the tail node.
            delete tail; 
            tail = temp; // Setting tail to point the lastest node.
        }
        
        void insert(int val, int pos)
        {
            if(pos<0)
            {
                cout << "Invalid position\n";
                return ;
            }

            if(pos == 0)
            {
                push_front(val);
                return;
            }

            Node* temp = head;
            for(int i=0; i<pos-1; i++) // This loop helps to store the node at position 'pos-1' inside temp. 
            {
                if(temp == NULL)
                {
                    cout << "Invalid Position\n";
                    return;
                }
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
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

    ll.pop_back();

    ll.insert(12,1);

    ll.displayLL();
    
    return 0;
}