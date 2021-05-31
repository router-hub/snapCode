public class paintersPartition {
  public int paint(int A, int B, int[] C) {
    int mod = 10000003;
    long l = 0, r = 0;
    for (int e : C)
      r += e;
    r *= B;

    long ans = r;
    while (l <= r) {
      long mid = l + (r - l) / 2; // mid is max. time taken by each painter
      if (good(C, mid, A, B)) {
        ans = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return (int) (ans % mod);
  }

  private boolean good(int[] C, long x, int A, int B) {
    int count = 0;
    long currSum = 0;
    for (int e : C) {
      long curr = (long) e * B;
      if (curr > x)
        return false;
      if (currSum + curr > x) {
        count++;
        currSum = curr;
      } else {
        currSum += curr;
      }
    }
    count++;
    return count <= A;
  }

}
