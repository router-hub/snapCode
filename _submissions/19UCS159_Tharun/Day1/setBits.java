public class setBits {
  public int numSetBits(long a) {
    int ones = 0;
    while (a > 0) {
      ones++;
      a = (a & (a - 1));
    }
    return ones;
  }
}
