public class SnakeLadder {
  public int snakeLadder(int[][] A, int[][] B) {
    int[] adj = new int[101];
    for (int i = 1; i <= 100; i++)
      adj[i] = i;
    // add edges
    for (int[] a : A)
      adj[a[0]] = a[1];
    for (int[] b : B)
      adj[b[0]] = b[1];

    if (adj[1] == 100)
      return 0;

    // To find shortest path from 1 to 100
    Queue<Integer> queue = new LinkedList<>();
    boolean[] visited = new boolean[101];
    int distance = 0;
    queue.add(1);
    visited[1] = true;
    while (!queue.isEmpty()) {
      int size = queue.size();
      while (size-- > 0) {
        int top = queue.remove();
        if (top == 100)
          return distance;
        for (int j = 1; j <= 6; j++) {
          int curr = top + j;
          if (curr > 100)
            continue;
          curr = adj[curr];
          if (!visited[curr]) {
            visited[curr] = true;
            queue.add(curr);
          }
        }
      }
      distance++;
    }
    return -1;
  }
}
