import java.util.*;

public class minCostPath {
  public int solve(int A, int B, String[] C) {
    Deque<int[]> queue = new ArrayDeque<>();
    boolean[][] visited = new boolean[A][B];
    queue.add(new int[] { 0, 0, 0 });
    while (!queue.isEmpty()) {
      int size = queue.size();
      while (size-- > 0) {
        int[] curr = queue.pollFirst();
        visited[curr[0]][curr[1]] = true;
        if (curr[0] == A - 1 && curr[1] == B - 1)
          return curr[2];
        int[] dx = { 0, 0, 1, -1 };
        int[] dy = { 1, -1, 0, 0 };
        for (int k = 0; k < 4; k++) {
          int x = curr[0] + dx[k], y = curr[1] + dy[k];
          char dir = getDirection(dx[k], dy[k]);
          if (isValid(x, y, A, B, visited)) {
            if (C[curr[0]].charAt(curr[1]) != dir)
              queue.addLast(new int[] { x, y, curr[2] + 1 });
            else
              queue.addFirst(new int[] { x, y, curr[2] });
          }
        }
      }
    }
    return -1;
  }

  private boolean isValid(int i, int j, int rows, int cols, boolean[][] visited) {
    if (i < 0 || j < 0 || i >= rows || j >= cols)
      return false;
    if (visited[i][j])
      return false;
    return true;
  }

  private char getDirection(int dx, int dy) {
    if (dx == 0) {
      if (dy == 1)
        return 'R';
      else
        return 'L';
    } else if (dx == 1) {
      return 'D';
    } else {
      return 'U';
    }
  }
}
