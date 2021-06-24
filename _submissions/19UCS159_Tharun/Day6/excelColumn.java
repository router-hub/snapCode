public class excelColumn {
  public int titleToNumber(String A) {
    int n = A.length(), res = 0;
    for (int i = n - 1; i >= 0; i--) {
      int val = A.charAt(i) - 'A' + 1;
      res += (int) Math.pow(26, n - i - 1) * val;
    }
    return res;
  }
}
