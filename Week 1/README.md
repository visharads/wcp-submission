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
    while (nums[ind+b] <= target && ind + b <= n) ind += b;
}
```
This does NOT go into overflow. Switching order of `&&` does. Interesting...

## Data Structures

## New Syntax Stuff

### Lambdas!
Good functions. Basically variables which can access stuff from surrounding scope. 
capture list: capture stuff (like arguments, but defined separately because they're not passed). `[&]` means capture EVERYTHING by reference. Learnt while Factory Machines.
Syntax:

```cpp
auto lambda_name [capture_list](argument) {
    // code
    return value_of_lambda_name;
    // lambda_name is essentially a variable
}
```