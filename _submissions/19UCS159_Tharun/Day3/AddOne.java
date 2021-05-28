public class AddOne {
  public int[] plusOne(int[] A) {
    int n = A.length;
    int zeroes = 0;
    for (int i = 0; i < n; i++) {
      if (A[i] != 0)
        break;
      zeroes++;
    }
    boolean hasCarry = true;
    for (int i = n - 1; i >= zeroes; i--) {
      if (A[i] != 9)
        hasCarry = false;
    }
    int[] ans = new int[(hasCarry) ? n - zeroes + 1 : n - zeroes];
    int i = ans.length - 1, j = n - 1;
    int carry = 1;
    while (j >= zeroes) {
      ans[i] = (A[j] + carry) % 10;
      carry = (A[j] + carry) / 10;
      j--;
      i--;
    }
    if (hasCarry)
      ans[0] = 1;
    return ans;
  }
}
