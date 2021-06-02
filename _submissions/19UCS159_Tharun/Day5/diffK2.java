import java.util.*;

public class diffK2 {
  // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
  public int diffPossible(final int[] A, int B) {
    Arrays.sort(A);
    int i = 0, j = 1;
    while (j < A.length) {
      int diff = A[j] - A[i];
      if (diff == B)
        return 1;
      if (diff < B)
        j++;
      else {
        i++;
        if (i == j)
          j++;
      }
    }
    return 0;
  }
}
