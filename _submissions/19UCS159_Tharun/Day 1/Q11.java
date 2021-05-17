
/*
Ways to form Max Heap : https://www.interviewbit.com/problems/ways-to-form-max-heap/

*/

public class Q11 {
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
      int total_nodes = 0; // all the nodes assuming perfect and complete binary tree
      int level = 1;
      int complete_nodes = 0; // all the nodes with full levels
      int current_nodes = i - 1; // leaving the top element, as it is the largest
      while (total_nodes < current_nodes) {
        complete_nodes = total_nodes;
        total_nodes += (1 << level);
        level++;
      }
      int left_nodes = 0, right_nodes = 0;
      int last_nodes = current_nodes - complete_nodes;
      int last_full_nodes = (total_nodes - complete_nodes);
      if (last_nodes >= last_full_nodes / 2) {
        left_nodes = last_full_nodes / 2;
        right_nodes = (current_nodes - complete_nodes - last_full_nodes / 2);
      } else {
        left_nodes = current_nodes - complete_nodes;
        right_nodes = 0;
      }
      left_nodes += complete_nodes / 2;
      right_nodes += complete_nodes / 2;
      dp[i] = ncr[current_nodes][left_nodes];
      dp[i] = (dp[i] * dp[left_nodes]) % mod;
      dp[i] = (dp[i] * dp[right_nodes]) % mod;
    }
    return (int) dp[A];
  }

}
