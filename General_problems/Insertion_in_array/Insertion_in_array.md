# Array Insertion Algorithm

This document explains the standard algorithm for **inserting an element into a specific position ($K$) of an Array (`DATA`)** containing $N$ elements.

---

## 📌 Problem Definition

Given an array `DATA` of size $N$, we want to insert a new element `ITEM` at index/position $K$ (where $K \le N$).

### 💡 Core Logic
To insert an element at position $K$ without overwriting existing data:
1. All elements from index $K$ to $N-1$ must be shifted **one position to the right (downward)**.
2. The empty slot at index $K$ is filled with `ITEM`.
3. The total number of elements ($N$) increases by $1$.

---

## 📜 Algorithm

```text
Algorithm: INSERT(DATA, N, K, ITEM)

Step 1: [Initialize counter] 
        Set J := N

Step 2: [Loop to shift elements] 
        Repeat Steps 3 and 4 while J >= K

Step 3:     [Move J-th element downward] 
            Set DATA[J + 1] := DATA[J]

Step 4:     [Decrease counter] 
            Set J := J - 1
        [End of Step 2 Loop]

Step 5: [Insert new element] 
        Set DATA[K] := ITEM

Step 6: [Update total count] 
        Set N := N + 1

Step 7: Exit
```

---

## 📊 Step-by-Step Visual Explanation

Suppose we have an array `DATA = [10, 20, 40, 50]` ($N = 4$) and we want to insert `ITEM = 30` at position $K = 2$ (0-based index).

### 1️⃣ Initial Array ($N = 4$)
| Index | 0 | 1 | 2 | 3 | 4 |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **DATA** | 10 | 20 | 40 | 50 | _Empty_ |

---

### 2️⃣ Shifting Elements Right ($J \ge K$)
* **$J = 3$**: Move `DATA[3]` to `DATA[4]` $\rightarrow$ `[10, 20, 40, 50, 50]`
* **$J = 2$**: Move `DATA[2]` to `DATA[3]` $\rightarrow$ `[10, 20, 40, 40, 50]`

---

### 3️⃣ Insert `ITEM` at Index $K = 2$ & Update $N$
Set `DATA[2] = 30` and increase $N$ to $5$.

| Index | 0 | 1 | 2 (K) | 3 | 4 |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **DATA** | 10 | 20 | **30** | 40 | 50 |

---

## ⏱️ Complexity Analysis

| Complexity Case | Time Complexity | Reason |
| :--- | :--- | :--- |
| **Best Case** | $\mathcal{O}(1)$ | Inserting at the end ($K = N$), no shifting needed. |
| **Worst Case** | $\mathcal{O}(N)$ | Inserting at the beginning ($K = 0$), all elements must shift. |
| **Average Case** | $\mathcal{O}(N)$ | On average, half the elements ($N/2$) need shifting. |
| **Space Complexity** | $\mathcal{O}(1)$ | Auxiliary space required for in-place array operation. |