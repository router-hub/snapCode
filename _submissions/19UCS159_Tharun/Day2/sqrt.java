class Sqrt {
  public int sqrt(int A) {
    long l = 0, r = A, ans = -1;
    while (l <= r) {
      long mid = l + (r - l) / 2;
      if (mid * mid <= A) {
        ans = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    return (int) ans;
  }
}
