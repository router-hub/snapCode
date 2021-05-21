public class sumOfPairwiseHammingDistance {
  // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
  public int hammingDistance(final int[] A) {
    int[] zeroes = new int[32];
    int[] ones = new int[32];
    long ans = 0, mod = (long) 1e9 + 7;
    for (int e : A) {
      ans = (ans + findDistance(e, zeroes, ones)) % mod;
      insert(e, zeroes, ones);
    }
    ans = (ans * 2) % mod;// since opposite pairs are accepted(eg: (x,y),(y,x) both are accepted )
    return (int) ans;
  }

  // finds hamming distance of x with all the inserted numbers
  private long findDistance(int x, int[] zeroes, int[] ones) {
    long ans = 0;
    for (int i = 0; i < 32; i++) {
      int bit = x & (1 << i);
      if (bit == 0)
        ans += ones[i];
      else
        ans += zeroes[i];
    }
    return ans;
  }

  private void insert(int x, int[] zeroes, int[] ones) {
    for (int i = 0; i < 32; i++) {
      int bit = x & (1 << i);
      if (bit == 0)
        zeroes[i]++;
      else
        ones[i]++;
    }
  }
}

// optimised(without arrays)
class sumOfPairwiseHammingDistance2 {
  // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
  public int hammingDistance(final int[] A) {
    long ans = 0, mod = (long) 1e9 + 7;
    for (int i = 0; i < 32; i++) {
      long zeroes = 0, ones = 0;
      for (int e : A) {
        if ((e & (1 << i)) == 0)
          zeroes++;
        else
          ones++;
      }
      ans = (ans + (ones * zeroes) % mod) % mod;
    }
    ans = (ans * 2) % mod;
    return (int) ans;
  }
}
