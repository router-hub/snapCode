public class validPath {
  public String solve(int A, int B, int C, int D, int[] E, int[] F) {
    // mark blocked points
    int[][] grid = new int[A + 1][B + 1];
    for (int j = 0; j <= A; j++) {
      for (int k = 0; k <= B; k++) {
        if (grid[j][k] == 1)
          continue;
        for (int i = 0; i < C; i++) {
          if (((E[i] - j) * (E[i] - j)) + ((F[i] - k) * (F[i] - k)) <= D * D) {
            grid[j][k] = 1;
            break;
          }
        }
      }
    }
    boolean[][] visited = new boolean[A + 1][B + 1];
    if (grid[0][0] == 1)
      return "NO";
    visited[0][0] = true;
    return dfs(0, 0, A, B, grid, visited) ? "YES" : "NO";
  }

  private boolean dfs(int i, int j, int x, int y, int[][] grid, boolean[][] visited) {
    if (i == x && j == y)
      return true;

    visited[i][j] = true;

    int[] dx = { 0, 0, 1, 1, -1, -1, 1, -1 };
    int[] dy = { 1, -1, 0, -1, 0, -1, 1, 1 };

    for (int k = 0; k < 8; k++) {
      int cx = i + dx[k], cy = j + dy[k];
      if (!valid(cx, cy, x, y))
        continue;
      if (visited[cx][cy] || grid[cx][cy] == 1)
        continue;

      if (dfs(cx, cy, x, y, grid, visited)) {
        return true;
      }
    }
    return false;
  }

  private boolean valid(int i, int j, int x, int y) {
    return i >= 0 && i <= x && j >= 0 && j <= y;
  }
}
