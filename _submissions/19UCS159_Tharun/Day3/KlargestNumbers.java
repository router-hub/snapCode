import java.util.*;

public class KlargestNumbers {
  public int[] solve(int[] A, int B) {
    PriorityQueue<Integer> pq = new PriorityQueue<>();
    for (int e : A) {
      if (pq.size() < B)
        pq.add(e);
      else {
        int min = pq.peek();
        if (e > min) {
          pq.remove();
          pq.add(e);
        }
      }
    }
    int[] res = new int[B];
    for (int i = 0; i < B; i++) {
      res[i] = pq.remove();
    }
    return res;
  }
}
