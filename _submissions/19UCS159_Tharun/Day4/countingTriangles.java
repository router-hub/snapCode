import java.util.*;

public class countingTriangles {
  public int nTriang(int[] A) {
    Arrays.sort(A);
    int n = A.length;
    long ans = 0, mod = (long) 1e9 + 7;
    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {
        int sum = A[i] + A[j];
        int k = findNextGreater(A, j + 1, sum);
        // System.out.println(i+" "+j+" "+k);
        ans = (ans + (k - j - 1)) % mod;
      }
    }
    return (int) ans;
  }

  private int findNextGreater(int[] A, int start, int sum) {
    int l = start, r = A.length - 1;
    int ans = A.length;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (sum <= A[mid]) {
        ans = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return ans;
  }

}
