public class diffK {
  public int diffPossible(int[] A, int B) {
    int n = A.length;
    int i = 0, j = 1;
    while (j < n) {
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
