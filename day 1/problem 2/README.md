# Problem 2: Minimum Length After Removing Adjacent Equals

## Description
You are given a string `s` consisting only of lowercase English letters.
In one operation, you can remove any two adjacent equal characters.
Return the minimum possible length of the string after performing operations optimally.

## Constraints
- $1 \le s.length \le 2 \times 10^5$
- `s` consists only of lowercase English letters.

## Input / Output
- **Input:** A string `s`.
- **Output:** An integer representing the minimum length after operations.

## Examples

### Example 1
**Input:** `s = "abba"`  
**Output:** `0`  
**Explanation:** 
1. Remove "bb" -> "aa"
2. Remove "aa" -> ""

### Example 2
**Input:** `s = "aaabccddd"`  
**Output:** `3`  
**Explanation:**
1. Remove "aa" -> "abccddd"
2. Remove "cc" -> "abddd"
3. Remove "dd" -> "abd"

---

## Metrics
| Metric | Value |
| :--- | :--- |
| **Expected Time Complexity** | $O(N)$ |
| **Target Time** | 45 minutes |
| **Actual Time** | 10:33.21 minutes |