# Notes

## Make I/O Efficient
Add these lines at the beginning:
```cpp
ios::sync_with_stdio(0);
cin.tie(0);
```

## Macros
```cpp
#define [macro] [expansion]
```
Beware of literal translations!
```cpp
#define SQ(a) a*a
// SQ(3+3) = 3+3*3+3
```

## Complexity analysis
| Size | Time Complexity |
| --- | --- |
| $n \leq 10$ | $O(n!)$ |
| $n \leq 20$ | $O(2^n)$|
| $n \leq 500$ | $O(n^3)$ |
| $n \leq 5000$ | $O(n^2)$ |
| $n \leq 10^6$ | $O(n \log n)$ or $O(n)$ |
| $n$ large | $O(1)$ or $O(\log n)$ |

## Sorting

### Inversions
Number of swaps needed to sort.

### Binary Search
```cpp
for (int b = n/2; b >= 1; b /= 2) {
    while ()
}
```

## Data Structures

### 