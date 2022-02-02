## Arrays


- [x] [Two Sum](https://leetcode.com/problems/two-sum/)  

1. **Brute Force O(n<sup>2</sup>)** - Check each element with every other. 2 For loops 'i' and 'j'.

2. **Optimal Hash Map O(n)** - put each value in hashmap and check if target - nums[i] is present. 

```java
HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                result[1] = i;
                result[0] = map.get(target - nums[i]);
                return result;
            }
        map.put(nums[i], i);
        }
        return result;
```

---

- [ ] [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

1. **Brute Force O(n<sup>2</sup>)** - Check each element and find max difference.

2. **Optimal O(n)** - Check each element as you go. Keep track of minimum element. Replace max difference with difference of current and minimum element when max is lesser.

```java
int max = 0, min = Integer.MAX_VALUE;
        for(int i : prices) {
            min = (i < min) ? i : min;
            max = (i - min > max) ? i - min : max;
        }
        return max;
```

---

- [x] [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

1. **Brute Force O(n<sup>2</sup>)** - check for each.

2. **Sort O(n<sup>2</sup>logn)** - sort and check next.

3. **HashSet O(n)** - add to hashet and check each

```java
HashSet<Integer> set = new HashSet<Integer>();
        for(int x : nums) {
            if(set.contains(x)) return true;
            set.add(x);
        }
        return false;
```

---

- [ ] [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)

1. **Brute Force O(n<sup>2</sup>)** - run loop for each element, omit element and calculate product.

2. **Optimal Extra Space O(n)** - create 2 arrays for left product and right product.\
Loop left --> for(int i = 1; i < n; i++) {
            left[i] = nums[i-1] * left[i-1];
        }\
This updates left[i] with all product of all elements left of itself excluding itself. Vice Versa for right side.\
Now we have 2 arrays with elements with left and right products excluding themeselves.\
Multiply both the arrays to get result.\
for(int i = 0; i < n; i++) {
            out[i] = left[i] * right[i];
            } 

```java
int n = nums.length;
        
        int[] left = new int[n];
        int[] right = new int[n];
        int[] out = new int[n];

        //Don't forget to initialize first element with 1 for multiplication
        left[0] = 1; 
        right[n-1] = 1;

        for(int i = 1; i < n; i++) {
            left[i] = nums[i-1] * left[i-1];
        }
        
        for(int i = n-2; i >= 0; i--) {
            right[i] = nums[i+1] * right[i+1];
        }
        
        
        for(int i = 0; i < n; i++) {
            out[i] = left[i] * right[i];    
        }
        return out;
```

3. **Optimal Constant Space O(n)** - Same process as above. Use output array and nums array. Use variable for second loop.

```java
int n = nums.length;
        
        // output array not counted as extra space.
        int[] out = new int[n];
        out[0] = 1; // for multiplication.
        int r = 1;
        for(int i = 1; i < n; i++) {
            out[i] = nums[i-1] * out[i-1];
        }
        for(int i = n-1; i >= 0; i--) {
            out[i] = out[i] * r;
            r = r * nums[i];
        }
        return out;
```

---

- [ ] [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
- [ ] [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)
- [ ] [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
- [ ] [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- [ ] [3Sum](https://leetcode.com/problems/3sum/)
- [ ] [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

---

## Binary

- [ ] [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)
- [ ] [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [ ] [Counting Bits](https://leetcode.com/problems/counting-bits/)
- [ ] [Missing Number](https://leetcode.com/problems/missing-number/)
- [ ] [Reverse Bits](https://leetcode.com/problems/reverse-bits/)

---

## Dynamic Programming

- [ ] [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- [ ] [Coin Change](https://leetcode.com/problems/coin-change/)
- [ ] [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)
- [ ] [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/)
- [ ] [Word Break Problem](https://leetcode.com/problems/word-break/)
- [ ] [Combination Sum](https://leetcode.com/problems/combination-sum-iv/)
- [ ] [House Robber](https://leetcode.com/problems/house-robber/)
- [ ] [House Robber II](https://leetcode.com/problems/house-robber-ii/)
- [ ] [Decode Ways](https://leetcode.com/problems/decode-ways/)
- [ ] [Unique Paths](https://leetcode.com/problems/unique-paths/)
- [ ] [Jump Game](https://leetcode.com/problems/jump-game/)

---

## Graph

- [ ] [Clone Graph](https://leetcode.com/problems/clone-graph/)
- [ ] [Course Schedule](https://leetcode.com/problems/course-schedule/)
- [ ] [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)
- [ ] [Number of Islands](https://leetcode.com/problems/number-of-islands/)
- [ ] [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)
- [ ] [Alien Dictionary (Leetcode Premium)](https://leetcode.com/problems/alien-dictionary/)
- [ ] [Graph Valid Tree (Leetcode Premium)](https://leetcode.com/problems/graph-valid-tree/)
- [ ] [Number of Connected Components in an Undirected Graph (Leetcode Premium)](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)

---

## Interval

- [ ] [Insert Interval](https://leetcode.com/problems/insert-interval/)
- [ ] [Merge Intervals](https://leetcode.com/problems/merge-intervals/)
- [ ] [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)
- [ ] [Meeting Rooms (Leetcode Premium)](https://leetcode.com/problems/meeting-rooms/)
- [ ] [Meeting Rooms II (Leetcode Premium)](https://leetcode.com/problems/meeting-rooms-ii/)

---

## Linked List

- [ ] [Reverse a Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [ ] [Detect Cycle in a Linked List](https://leetcode.com/problems/linked-list-cycle/)
- [ ] [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [ ] [Merge K Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)
- [ ] [Remove Nth Node From End Of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
- [ ] [Reorder List](https://leetcode.com/problems/reorder-list/)

---

## Matrix

- [ ] [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)
- [ ] [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)
- [ ] [Rotate Image](https://leetcode.com/problems/rotate-image/)
- [ ] [Word Search](https://leetcode.com/problems/word-search/)

---

## String

- [ ] [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
- [ ] [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)
- [ ] [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
- [ ] [Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- [ ] [Group Anagrams](https://leetcode.com/problems/group-anagrams/)
- [ ] [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [ ] [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
- [ ] [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)
- [ ] [Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)
- [ ] [Encode and Decode Strings (Leetcode Premium)](https://leetcode.com/problems/encode-and-decode-strings/)

---

## Tree
- [ ] [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- [ ] [Same Tree](https://leetcode.com/problems/same-tree/)
- [ ] [Invert/Flip Binary Tree](https://leetcode.com/problems/invert-binary-tree/)
- [ ] [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)
- [ ] [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)
- [ ] [Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)
- [ ] [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)
- [ ] [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)
- [ ] [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
- [ ] [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)
- [ ] [Lowest Common Ancestor of BST](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)
- [ ] [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)
- [ ] [Add and Search Word](https://leetcode.com/problems/add-and-search-word-data-structure-design/)
- [ ] [Word Search II](https://leetcode.com/problems/word-search-ii/)

---

## Heap

- [ ] [Merge K Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)
- [ ] [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)
- [ ] [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)

## Important Link:
[14 Patterns to Ace Any Coding Interview Question](https://hackernoon.com/14-patterns-to-ace-any-coding-interview-question-c5bb3357f6ed)