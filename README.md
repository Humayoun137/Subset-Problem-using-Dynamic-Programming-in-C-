# Subset-Problem-using-Dynamic-Programming-in-C-
The Subset Sum Problem is a classic computational problem in the field of computer science and mathematics. Given a set of positive integers and a target sum, the task is to determine whether there is a subset of the given set that adds up to the given sum. Dynamic Programming is a popular technique used to solve this problem efficiently.
Using dynamic programming to solve the Subset Sum Problem involves creating a two-dimensional array, often denoted as dp, where dp[i][j] represents whether it is possible to form a subset using the first i elements of the given set that adds up to the sum j. The array is initialized to False for all cells. Then, the base cases are set: dp[0][0] is True (an empty set can form a subset with a sum of 0), and for the first row, dp[0][j] is True if and only if j is equal to the first element of the set.
The dynamic programming approach iterates through the elements of the given set and the possible sums, filling up the dp array based on the following recurrence relation:
dp[i][j] = dp[i-1][j] or dp[i-1][j - set[i]]

Here, dp[i-1][j] represents the case where the i-th element is not included in the subset, and dp[i-1][j - set[i]] represents the case where the i-th element is included in the subset.
After filling up the dp array, the solution to the Subset Sum Problem can be found in dp[n][target], where n is the number of elements in the given set, and target is the desired sum. If dp[n][target] is True, there exists a subset that adds up to the target sum; otherwise, there is no such subset.
Dynamic programming optimizes the Subset Sum Problem by breaking it down into smaller subproblems, solving them independently, and using their solutions to construct the final solution. This approach avoids redundant calculations, making it much more efficient than naive recursive solutions.

