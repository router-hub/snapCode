public class editDistance {
  public int minDistance(String A, String B) {
    int n = A.length(), m = B.length();
    int[][] steps = new int[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
      steps[i][0] = i;
    }
    for (int i = 1; i <= m; i++) {
      steps[0][i] = i;
    }
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (A.charAt(i - 1) == B.charAt(j - 1)) {
          steps[i][j] = steps[i - 1][j - 1];
        } else {
          int ans1 = 1 + steps[i - 1][j - 1]; // replace
          int ans2 = 1 + Math.min(steps[i - 1][j], steps[i][j - 1]); // delete a char
          steps[i][j] = Math.min(ans1, ans2);
        }
      }
    }
    return steps[n][m];
  }
}
