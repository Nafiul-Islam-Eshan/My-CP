# Linear Search


## 📌 Overview

**Linear Search** is a sequential search algorithm that checks every element in a list one by one until the desired element is found or the end of the list is reached.

---

## 🚀 Algorithm Logic (Step-by-Step)

```
[Start] ➡️ [Get total items 'n'] ➡️ [Input elements into vector using push_back()]
                                               │
                                               ▼
[Output result] ⬅️ [Compare target with vector[i]] ⬅️ [Get 'target' number]
```

1. **Initialization**: Initialize an empty `vector<int>` to store numbers dynamically.
2. **Read Array Size**: Read integer $n$ (the total count of numbers).
3. **Populate Vector**: Loop $n$ times to accept inputs from the user and insert them using `.push_back()`.
4. **Read Search Target**: Read the integer value `target` that needs to be found.
5. **Linear Scanning**:
   - Loop through index $i = 0$ to $n - 1$:
   - Check if `numbers[i] == target`.
   - **Found**: Print the position ($i + 1$) and terminate the program.
6. **Not Found**: If the loop completes without a match, print that the target is missing.

---

## 📊 Trace Example

**Input Vector:** `[15, 8, 42, 4]`  
**Target:** `42`

| Iteration | Current Element (`numbers[i]`) | Comparison (`numbers[i] == target`) | Result |
| :---: | :---: | :---: | :--- |
| **i = 0** | `15` | `15 == 42` (False) | Keep searching |
| **i = 1** | `8` | `8 == 42` (False) | Keep searching |
| **i = 2** | `42` | `42 == 42` (True) | **Found at 3rd position! Stop.** |

---

## ⏱️ Algorithm Efficiency

- **Best Case Time Complexity**: $O(1)$ — Target is the first element.
- **Worst Case Time Complexity**: $O(n)$ — Target is the last element or not present.
- **Space Complexity**: $O(n)$ — Dynamic storage for $n$ elements.