
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkList:
    def __init__(self):
        self.head = None
        self.tail = None
        
    def push_front(self, data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
            self.tail=new_node
            return
        else:
            new_node.next=self.head
            self.head=new_node
        
    def push_back(self, data):
        new_node = Node(data)
        
        if self.head is None:
            self.head=new_node
            self.tail=new_node
            return
        else:
            self.tail.next=new_node
            self.tail=new_node
        
        
    
    def display(self):
        temp = self.head
        
        while temp is not None:
            print(temp.data, end=" ")
            temp = temp.next
        
   
   
ll = LinkList()
ll.push_back(1)
ll.push_front(4)
ll.push_front(14)
ll.display()





