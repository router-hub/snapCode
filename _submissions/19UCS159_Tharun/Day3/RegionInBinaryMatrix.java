public class RegionInBinaryMatrix {
  public int solve(int[][] A) {
    int rows = A.length, cols = A[0].length;
    boolean[][] visited = new boolean[rows][cols];
    int ans = 0;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (A[i][j] == 1 && !visited[i][j]) {
          int sa = dfs(i, j, A, visited);
          ans = Math.max(ans, sa);
        }
      }
    }
    return ans;
  }

  private int dfs(int i, int j, int[][] A, boolean[][] visited) {
    visited[i][j] = true;
    int ans = 1;
    int[] dx = { 0, 0, 1, 1, -1, -1, 1, -1 };
    int[] dy = { 1, -1, 1, -1, 0, 1, 0, -1 };
    for (int k = 0; k < 8; k++) {
      int ci = i + dx[k], cj = j + dy[k];
      if (valid(ci, cj, A, visited)) {
        ans += dfs(ci, cj, A, visited);
      }
    }
    return ans;
  }

  private boolean valid(int i, int j, int[][] A, boolean[][] visited) {
    int R = A.length, C = A[0].length;
    if (i < 0 || i >= R || j < 0 || j >= C)
      return false;
    if (A[i][j] == 0 || visited[i][j])
      return false;
    return true;
  }
}
