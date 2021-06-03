public class highestProduct {
  public int maxp3(int[] A) {
    int n = A.length;
    if (n < 3)
      return 0;
    Arrays.sort(A);
    int ans1 = A[n - 1] * A[n - 2] * A[n - 3];
    int ans2 = A[n - 1] * A[0] * A[1];
    return Math.max(ans1, ans2);
  }
}
