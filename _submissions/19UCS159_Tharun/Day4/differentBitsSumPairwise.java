public class differentBitsSumPairwise {
  public int cntBits(int[] A) {
    long ans = 0, mod = (long) (1e9) + 7;
    for (int i = 0; i <= 31; i++) {
      long ones = 0, zeroes = 0;
      for (int e : A) {
        int bit = e & (1 << i);
        if (bit == 0)
          zeroes++;
        else
          ones++;
      }
      long curr = (2 * zeroes * ones) % mod;
      ans = (ans + curr) % mod;
    }
    return (int) ans;
  }

}
