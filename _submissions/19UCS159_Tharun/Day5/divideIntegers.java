public class divideIntegers {
  public int divide(int a, int b) {
    if (a == Integer.MIN_VALUE && b == -1)
      return Integer.MAX_VALUE;
    if (a == Integer.MIN_VALUE && b == 1)
      return Integer.MIN_VALUE;
    if (b == 1)
      return a;
    long A = a, B = b;
    A = Math.abs(A);
    B = Math.abs(B);
    int res = 0;
    while (A > B) {
      int x = 0;
      while ((B << x) <= A) {
        x++;
      }
      x--;
      A -= B << x;
      res += 1 << x;

    }
    return ((a > 0 && b > 0) || (a < 0 && b < 0)) ? res : -res;
  }
}
