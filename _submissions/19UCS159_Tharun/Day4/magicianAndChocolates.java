import java.util.*;

public class magicianAndChocolates {
  public int nchoc(int A, ArrayList<Integer> B) {
    PriorityQueue<Integer> pq = new PriorityQueue<>((x, y) -> (y - x));
    for (int e : B)
      pq.add(e);

    long sum = 0, mod = (long) 1e9 + 7;
    while (A-- > 0) {
      int curr = pq.remove();
      sum += curr;
      pq.add(curr / 2);
    }
    return (int) (sum % mod);
  }
}
