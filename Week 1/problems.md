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