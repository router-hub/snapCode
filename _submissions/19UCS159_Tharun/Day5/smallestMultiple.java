import java.util.*;

public class smallestMultiple {
  public String multiple(int A) {
    if (A == 0 || A == 1)
      return Integer.toString(A);
    Queue<Node> queue = new LinkedList<>();
    queue.add(new Node("1", 1));
    boolean[] visited = new boolean[A];
    visited[1] = true;
    while (!queue.isEmpty()) {
      Node curr = queue.remove();
      int r1 = (curr.remainder * 10) % A, r2 = (curr.remainder * 10 + 1) % A;
      if (r1 == 0)
        return curr.value + "0";
      if (r2 == 0)
        return curr.value + "1";
      if (!visited[r1]) {
        visited[r1] = true;
        queue.add(new Node(curr.value + "0", r1));
      }
      if (!visited[r2]) {
        visited[r2] = true;
        queue.add(new Node(curr.value + "1", r2));
      }
    }
    return "";
  }

  class Node {
    String value;
    int remainder;

    Node(String s, int rem) {
      value = s;
      remainder = rem;
    }
  }
}
