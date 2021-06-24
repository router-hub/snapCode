public class countTotalSetBits {
  public int solve(int A) {
    if (A == 1)
      return 1;
    long ans = 0, mod = (long) 1e9 + 7;
    for (int i = 31; i >= 0; i--) {
      long size = 1 << i;
      long count = (A + 1) / size;
      ans = (ans + (count / 2) * size) % mod;
      if ((A & (1 << i)) != 0) {
        ans = (ans + ((A + 1) % size)) % mod;
      }
    }
    return (int) ans;
  }
}
