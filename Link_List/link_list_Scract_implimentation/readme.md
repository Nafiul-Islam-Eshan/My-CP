# Singly Linked List Implementation in C++

A simple implementation of a **Singly Linked List** using C++ and Object-Oriented Programming (OOP).

This project demonstrates the fundamental operations of a linked list, including insertion, deletion, and traversal.

## 📌 Table of Contents

- [Introduction](#introduction)
- [Node Structure](#node-structure)
- [Linked List Structure](#linked-list-structure)
- [Implemented Operations](#implemented-operations)
  - [1. Insert at Front](#1-insert-at-front-push_front)
  - [2. Insert at Back](#2-insert-at-back-push_back)
  - [3. Delete from Front](#3-delete-from-front-pop_front)
  - [4. Delete from Back](#4-delete-from-back-pop_back)
  - [5. Insert at a Specific Position](#5-insert-at-a-specific-position-insert)
  - [6. Display Linked List](#6-display-linked-list-displayll)
- [Time Complexity Analysis](#time-complexity-analysis)
- [Example Usage](#example-usage)
- [Known Issues and Improvements](#known-issues-and-improvements)

---

## Introduction

A **Linked List** is a linear data structure in which elements are stored in individual nodes.

Unlike arrays, linked list elements are not required to occupy consecutive memory locations. Each node contains:

1. **Data:** Stores the actual value.
2. **Next Pointer:** Stores the address of the next node.

### Visual Representation

```text
 HEAD
  |
  v
+------+------+
|  10  |   o--|---->
+------+------+    |
                   v
              +------+------+
              |  20  |   o--|---->
              +------+------+    |
                                 v
                            +------+------+
                            |  30  | NULL |
                            +------+------+
```

The last node points to `NULL`, indicating the end of the linked list.

## Node Structure

```cpp
class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
```

### Explanation

| Member | Description |
|---|---|
| `data` | Stores the value of the node. |
| `next` | Stores the address of the next node. |
| `Node(int val)` | Constructor that initializes a new node. |

Every newly created node initially points to `NULL`.

## Linked List Structure

The `List` class manages the entire linked list.

```cpp
class List
{
    Node* head;
    Node* tail;
};
```

It maintains two important pointers:

- **head:** Points to the first node.
- **tail:** Points to the last node.

Initially:

```cpp
List()
{
    head = tail = NULL;
}
```

This represents an empty linked list.

---

## Implemented Operations

### 1. Insert at Front (`push_front`)

**Objective:** Insert a new node at the beginning of the linked list.

**Algorithm:**

1. Create a new node with the given value.
2. Check whether the linked list is empty.
3. If empty:
   - Set `head` and `tail` to the new node.
   - Return.
4. Otherwise:
   - Make the new node point to the current head.
   - Update `head` to the new node.

**Pseudocode:**

```text
PUSH_FRONT(value)

1. Create NEW_NODE
2. IF HEAD == NULL
      HEAD = TAIL = NEW_NODE
      RETURN
3. NEW_NODE.next = HEAD
4. HEAD = NEW_NODE
```

**Example:**

Before insertion:

```text
HEAD -> 20 -> 30 -> NULL
```

Insert `10`:

```text
HEAD -> 10 -> 20 -> 30 -> NULL
```

**Time Complexity:** `O(1)`

---

### 2. Insert at Back (`push_back`)

**Objective:** Insert a new node at the end of the linked list.

**Algorithm:**

1. Create a new node.
2. Check whether the list is empty.
3. If empty:
   - Set `head` and `tail` to the new node.
   - Return.
4. Otherwise:
   - Connect the current tail to the new node.
   - Update `tail` to the new node.

**Pseudocode:**

```text
PUSH_BACK(value)

1. Create NEW_NODE
2. IF HEAD == NULL
      HEAD = TAIL = NEW_NODE
      RETURN
3. TAIL.next = NEW_NODE
4. TAIL = NEW_NODE
```

**Example:**

Before insertion:

```text
HEAD -> 10 -> 20 -> NULL
                   ^
                  TAIL
```

Insert `30`:

```text
HEAD -> 10 -> 20 -> 30 -> NULL
                          ^
                         TAIL
```

**Time Complexity:** `O(1)`

---

### 3. Delete from Front (`pop_front`)

**Objective:** Remove the first node of the linked list.

**Algorithm:**

1. Check whether the list is empty.
2. If empty, display an appropriate message and return.
3. Create a temporary pointer to store the current head.
4. Move `head` to the next node.
5. Disconnect the old first node.
6. Delete the temporary node from memory.

**Pseudocode:**

```text
POP_FRONT()

1. IF HEAD == NULL
      PRINT "Empty linked list"
      RETURN
2. TEMP = HEAD
3. HEAD = HEAD.next
4. TEMP.next = NULL
5. DELETE TEMP
```

**Example:**

Before deletion:

```text
HEAD -> 10 -> 20 -> 30 -> NULL
```

After deleting the first node:

```text
HEAD -> 20 -> 30 -> NULL
```

**Time Complexity:** `O(1)`

---

### 4. Delete from Back (`pop_back`)

**Objective:** Remove the last node of the linked list.

**Algorithm:**

1. Check whether the list is empty.
2. If empty, display a message and return.
3. Start traversal from the head.
4. Find the second-last node (the previous node of tail).
5. Disconnect the last node.
6. Delete the old tail from memory.
7. Update `tail` to the second-last node.

**Pseudocode:**

```text
POP_BACK()

1. IF HEAD == NULL
      PRINT "Empty linked list"
      RETURN

2. TEMP = HEAD

3. WHILE TEMP.next != TAIL
      TEMP = TEMP.next

4. TEMP.next = NULL
5. DELETE TAIL
6. TAIL = TEMP
```

**Example:**

Before deletion:

```text
HEAD -> 10 -> 20 -> 30 -> NULL
                   ^
                  TAIL
```

After deleting the last node:

```text
HEAD -> 10 -> 20 -> NULL
              ^
             TAIL
```

**Time Complexity:** `O(n)`

Reason: We must traverse the list to find the second-last node.

---

### 5. Insert at a Specific Position (`insert`)

**Objective:** Insert a new node at a user-defined position.

This implementation uses **zero-based indexing**.

For example:

```text
Position:  0    1    2    3
          10 -> 20 -> 30 -> 40
```

**Algorithm:**

1. Check whether the given position is negative.
2. If negative, display an invalid-position message.
3. If position is `0`, call `push_front()`.
4. Otherwise:
   - Start traversal from `head`.
   - Move to the node at position `pos - 1`.
   - Check whether the position is valid.
5. Create a new node.
6. Connect the new node to the next node.
7. Connect the previous node to the new node.

**Pseudocode:**

```text
INSERT(value, position)

1. IF position < 0
      PRINT "Invalid position"
      RETURN

2. IF position == 0
      PUSH_FRONT(value)
      RETURN

3. TEMP = HEAD

4. FOR i = 0 TO position - 2
      IF TEMP == NULL
          PRINT "Invalid position"
          RETURN
      TEMP = TEMP.next

5. Create NEW_NODE

6. NEW_NODE.next = TEMP.next

7. TEMP.next = NEW_NODE
```

**Example:**

Before insertion:

```text
HEAD -> 10 -> 20 -> 30 -> NULL
```

Insert `15` at position `1`:

```text
HEAD -> 10 -> 15 -> 20 -> 30 -> NULL
```

**Time Complexity:** `O(n)`

Reason: We may need to traverse the list to reach the specified position.

---

### 6. Display Linked List (`displayLL`)

**Objective:** Traverse the entire linked list and display its elements.

**Algorithm:**

1. Create a temporary pointer and initialize it with `head`.
2. Continue traversing while the temporary pointer is not `NULL`.
3. Print the current node's data.
4. Move the temporary pointer to the next node.
5. Stop when `NULL` is reached.

**Pseudocode:**

```text
DISPLAY()

1. TEMP = HEAD

2. WHILE TEMP != NULL
      PRINT TEMP.data
      TEMP = TEMP.next

3. END
```

**Example Output:**

```text
10 -> 20 -> 30 -> NULL
```

**Time Complexity:** `O(n)`

---

## Time Complexity Analysis

| Operation | Time Complexity |
|---|---|
| `push_front()` | O(1) |
| `push_back()` | O(1) |
| `pop_front()` | O(1) |
| `pop_back()` | O(n) |
| `insert()` | O(n) |
| `displayLL()` | O(n) |

**Space Complexity:**

- Each node requires `O(1)` space.
- A linked list containing `n` nodes requires `O(n)` total space.
- The insertion operations allocate additional memory for new nodes.

---

## Example Usage

```cpp
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

    ll.insert(12, 1);

    ll.displayLL();

    return 0;
}
```

### Expected Output

```text
2 12 1 4 5
```

### Execution Flow

| Step | Operation | Linked List |
|---|---|---|
| 1 | `push_front(1)` | 1 |
| 2 | `push_front(2)` | 2 → 1 |
| 3 | `push_front(3)` | 3 → 2 → 1 |
| 4 | `push_back(4)` | 3 → 2 → 1 → 4 |
| 5 | `push_back(5)` | 3 → 2 → 1 → 4 → 5 |
| 6 | `push_back(6)` | 3 → 2 → 1 → 4 → 5 → 6 |
| 7 | `pop_front()` | 2 → 1 → 4 → 5 → 6 |
| 8 | `pop_back()` | 2 → 1 → 4 → 5 |
| 9 | `insert(12, 1)` | 2 → 12 → 1 → 4 → 5 |

---

## Known Issues and Improvements

The current implementation demonstrates the basic operations, but some edge cases should be handled before considering it fully robust.

1. **Single-node deletion:** `pop_front()` should also update `tail = NULL` when deleting the only node.

2. **Single-node `pop_back()`:** The current implementation does not handle this case and may dereference a NULL pointer. It needs a separate check for `head == tail`.

3. **Tail update during insertion:** When inserting at the end using `insert()`, the `tail` pointer should also be updated.

4. **Invalid positions:** `insert()` needs an additional check when `head == NULL` or when the traversal reaches the end before the requested position.

5. **Memory management:** A destructor should be implemented in the `List` class to release all remaining dynamically allocated nodes when the list is destroyed.

These improvements will make the implementation more reliable.

---

## Learning Outcomes

After implementing this project, you should understand:

- How linked lists work internally.
- How structures/classes represent nodes.
- How pointers connect nodes.
- How dynamic memory allocation works using `new`.
- How to insert and delete nodes.
- How to traverse a linked list.
- How to manage `head` and `tail` pointers.
- How to analyze the time complexity of linked list operations.

**Next Step:** Extend this implementation with searching, reversing, and doubly linked list operations.

---

*Implemented as part of Data Structures and Algorithms learning.*