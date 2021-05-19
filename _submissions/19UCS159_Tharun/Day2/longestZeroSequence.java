
import java.util.*;

public class longestZeroSequence {
  public int[] lszero(int[] A) {
    HashMap<Integer, Integer> map = new HashMap<>();
    int sum = 0, l = 0, r = -1;
    map.put(0, -1);
    for (int i = 0; i < A.length; i++) {
      sum += A[i];
      if (map.containsKey(sum)) {
        if ((i - map.get(sum)) > (r - l)) {
          l = map.get(sum);
          r = i;
        }
      } else {
        map.put(sum, i);
      }
    }
    if (r == -1)
      return new int[] {};
    // System.out.println(l+" "+r);
    int[] res = new int[r - l];
    l++;
    for (int k = l; k <= r; k++) {
      res[k - l] = A[k];
    }
    return res;
  }
}
