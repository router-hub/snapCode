import java.util.*;

public class twoSumArray {
  // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
  public int[] twoSum(final int[] A, int B) {
    HashMap<Integer, Integer> map = new HashMap<>();
    for (int i = 0; i < A.length; i++) {
      if (map.containsKey(B - A[i])) {
        return new int[] { map.get(B - A[i]) + 1, i + 1 };
      }
      if (!map.containsKey(A[i]))
        map.put(A[i], i);

    }
    return new int[] {};
  }
}
