public class partitions {
  public int solve(int A, int[] B) {
    if (A < 3)
      return 0;
    long total = 0;
    for (int e : B)
      total += e;
    if (total % 3 != 0)
      return 0;

    long req = total / 3;
    int[] prefix = new int[A]; // from start
    long curr = 0;
    for (int i = 0; i < A; i++) {
      curr += B[i];
      if (curr == req) {
        prefix[i] = (i == 0) ? 1 : 1 + prefix[i - 1];
      } else {
        prefix[i] = (i == 0) ? 0 : prefix[i - 1];
      }

    }
    curr = 0;
    int ans = 0;
    for (int i = A - 1; i >= 2; i--) {
      curr += B[i];
      if (curr == req) {
        ans += prefix[i - 2];
      }
    }
    return ans;
  }
}
