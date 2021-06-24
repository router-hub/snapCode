public class Solution {
  public int solve(int A) {
    long mod = (long) 1e9 + 7;
    long[][] ncr = new long[A + 1][A + 1];
    for (int i = 0; i <= A; i++) {
      for (int j = 0; j <= i; j++) {
        if (i == j || j == 0) {
          ncr[i][j] = 1;
          continue;
        }
        ncr[i][j] = (ncr[i - 1][j] + ncr[i - 1][j - 1]) % mod;
      }
    }
    long[] dp = new long[A + 1];
    dp[0] = 1;
    for (int i = 1; i <= A; i++) {
      // finding left nodes this subtree rooted at i has
      int complete_nodes = 0, total = i - 1;
      int level = 1;
      while (complete_nodes + (1 << level) <= total) {
        complete_nodes += (1 << level);
        level++;
      }
      int last_level_nodes = total - complete_nodes;
      int left = complete_nodes / 2;
      left += Math.min(last_level_nodes, (1 << (level - 1)));
      dp[i] = ncr[i - 1][left];
      dp[i] = (dp[i] * dp[left]) % mod;
      dp[i] = (dp[i] * dp[i - left - 1]) % mod;
    }
    return (int) dp[A];
  }
}
