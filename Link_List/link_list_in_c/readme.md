## 1. What is Link list
Link list is a collection of nodes where each node contains: <br>
1. data: The actual value
1. next: The address of next node.

```c
struct Node{
    int data;
    struct Node* next;
};
```

## 2. Insertion
### Case A: Insert at the beginning:
Suppose,
```
 10 -> 20 -> 30 
  |
Head
```

