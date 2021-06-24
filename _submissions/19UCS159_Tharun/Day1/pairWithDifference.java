public class pairWithDifference {
  public int solve(int[] A, int B) {
    Arrays.sort(A);
    int i = 0, j = 1, n = A.length;
    while (i < n && j < n) {
      int diff = A[j] - A[i];
      if (i != j && diff == B) {
        return 1;
      }
      if (A[j] - A[i] < B)
        j++;
      else
        i++;
    }
    return 0;
  }
}
