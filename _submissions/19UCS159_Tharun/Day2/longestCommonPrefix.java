
import java.util.*;

class longestCommonPrefix1 {
  public String longestCommonPrefix(String[] A) {
    Arrays.sort(A);
    for (int i = 0; i < Math.min(A[0].length(), A[A.length - 1].length()); i++) {
      if (A[0].charAt(i) != A[A.length - 1].charAt(i)) {
        return A[0].substring(0, i);
      }
    }
    return A[0];
  }
}
