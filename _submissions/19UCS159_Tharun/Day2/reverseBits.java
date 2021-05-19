
class reverseBits {
  public long reverse(long a) {
    long ans = 0;
    for (int i = 0; i < 32; i++) {
      ans <<= 1;
      int lastBit = (int) (a & 1);
      ans |= lastBit;
      a >>= 1;
    }
    return ans;
  }
}
