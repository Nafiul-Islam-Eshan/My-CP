# Binary Search



## 📌 Overview

**Binary Search** is an efficient search algorithm that finds the position of a target value within a **sorted array or vector**. It works by repeatedly dividing the search space in half until the target is found or the search range becomes empty.

---

## 🚀 How It Works (Step-by-Step Algorithm)

1. **Input Collection**: Read $n$ numbers from the user and store them in a dynamic vector (`std::vector<int>`).
2. **Sorting (Mandatory)**: Sort the vector in ascending order using `std::sort(numbers.begin(), numbers.end())`.
3. **Initialize Pointers**:
   - `start = 0` (beginning of the search space)
   - `end = n - 1` (end of the search space)
4. **Binary Search Loop**:
   - Calculate the midpoint: $\text{mid} = \frac{\text{start} + \text{end}}{2}$
   - If `numbers[mid] == target`: Target found! Store `mid + 1` as position and exit loop.
   - If `target < numbers[mid]`: Search the left half by setting `end = mid - 1`.
   - If `target > numbers[mid]`: Search the right half by setting `start = mid + 1`.
5. **Output**: Display the 1-based index position if found, or report that the number is not in the list.

---

## 📊 Visual Example

Search for **`target = 7`** in elements: `[9, 3, 7, 1, 5]`

### Step 1: Sort the Vector
```
Index:    0   1   2   3   4
Vector:  [1,  3,  5,  7,  9]
```

### Step 2: Binary Search Iterations

* **Iteration 1**:
  - `start = 0`, `end = 4`
  - $\text{mid} = \frac{0 + 4}{2} = 2$ (`numbers[2] = 5`)
  - Since $7 > 5$, move right: `start = mid + 1 = 3`.

* **Iteration 2**:
  - `start = 3`, `end = 4`
  - $\text{mid} = \frac{3 + 4}{2} = 3$ (`numbers[3] = 7`)
  - Match found (`7 == 7`)! Position = $3 + 1 = 4$.

---

## ⏱️ Time & Space Complexity

- **Time Complexity**:
  - **Sorting**: $O(n \log n)$
  - **Binary Search**: $O(\log n)$
  - **Overall**: $O(n \log n)$
- **Space Complexity**: $O(n)$ (for storing elements in `std::vector`)