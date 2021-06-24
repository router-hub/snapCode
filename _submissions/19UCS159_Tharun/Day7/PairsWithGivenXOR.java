import java.util.*;

public class PairsWithGivenXOR {
  public int solve(int[] A, int B) {
    /*
     * a=100 b=111 X=011 a^X=111=b b^X=100=a
     */
    HashMap<Integer, Integer> map = new HashMap<>();
    int res = 0;
    for (int e : A) {
      res += map.getOrDefault(e, 0);
      map.put(e ^ B, map.getOrDefault(e ^ B, 0) + 1);
    }
    return res;
  }
}
