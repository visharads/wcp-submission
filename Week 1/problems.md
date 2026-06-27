## Distinct Numbers
Interestingly, using unordered map gave TLE but `(set<int>)` was fine.

## Apartments
Sort, generate sliding window:
`wstart`: first index such that element is >= apt-4.
`wend`: first index such that element is > apt+4.
active window starts from `wstart` ends at `wend-1`; window DNE if both are equal.
`lastadded`: pointer which tracks the last house sold.

Apparently called greedy. Time complexity $O(n \log n)$. Space complexity $O(n)$.

## Ferris Wheel
Another greedy alg involving sorting, $O(n \log n)$ time complexity. Space complexity $O(n)$.

## Sort Colours
Weird problem. Why not just hashmap or store in a vector the number of occurences? So much more general.

## Binary Search
Standard problem. Okay! in a while loop, if first condition is false, second isn't evaluated!

## Factory Machines
Interesting problem. If we consider a long array whose indices represent time (our answer), and the values represent the maximum number of products for that time, we have to find the minimum index such that its value $\geq t$.

Where to cap this array? Absolute maximum time that can be practically taken is when worst machine is only used, so $t \times \max(k_i)$.

Complexity: Sorting is $O(n\log n)$, searching is $O(n \log (t \times \max(k_i)))$. Whichever is larger. Either that, or no need to sort for $tmax$, rather just set to `1e18`.