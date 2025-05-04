# 1128. Number of Equivalent Domino Pairs 🁢🁣

**Difficulty:** Easy  
**Tags:** Hash Map, Combinatorics

---

## 🧩 Problem Statement

Given a list of dominoes, where each domino is represented as a pair of integers `[a, b]`, two dominoes are considered **equivalent** if one can be rotated to match the other.

Formally, dominoes `[a, b]` and `[c, d]` are equivalent **if and only if**:
- `(a == c and b == d)` or `(a == d and b == c)`

Return the number of pairs `(i, j)` such that `0 <= i < j < dominoes.length` and `dominoes[i]` is equivalent to `dominoes[j]`.

---

## 🔍 Examples

### Example 1
Input: dominoes = ```[[1,2],[2,1],[3,4],[5,6]]```
Output: 1

Explanation: Only dominoes [1,2] and [2,1] are equivalent.

---

### Example 2
Input: dominoes = [[1,2],[1,2],[1,1],[1,2],[2,2]]
Output: 3

Explanation: The three pairs of [1,2] are:
- (0,1)
- (0,3)
- (1,3)

---

## ✅ Constraints
- `1 <= dominoes.length <= 4 * 10^4`
- `dominoes[i].length == 2`
- `1 <= dominoes[i][j] <= 9`

---

## 💡 Approach

- Normalize each domino by sorting the two numbers: `(min(a,b), max(a,b))` or by sorting each using sorted(domino)
- Count how many times each normalized domino appears using a hash map.
- For each count `n`, add `n * (n - 1) // 2` to the result.

---

## 🧠 Time & Space Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)