import java.util.*;

public class assignMiceToHoles {
  public int mice(int[] A, int[] B) {
    Arrays.sort(A);
    Arrays.sort(B);
    int res = 0;
    for (int i = 0; i < A.length; i++) {
      res = Math.max(res, Math.abs(A[i] - B[i]));
    }
    return res;
  }
}
