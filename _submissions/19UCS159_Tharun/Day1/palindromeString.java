public class palindromeString {
  public int isPalindrome(String A) {
    A = A.toLowerCase();
    char[] s = A.toCharArray();
    int i = 0, j = s.length - 1;
    while (i < j) {
      if (!isValid(s[i])) {
        i++;
        continue;
      }
      if (!isValid(s[j])) {
        j--;
        continue;
      }
      if (s[i] != s[j]) {
        return 0;
      }
      i++;
      j--;
    }
    return 1;
  }

  private boolean isValid(char c) {
    if (c >= 'a' && c <= 'z')
      return true;
    if (c >= '0' && c <= '9')
      return true;
    return false;

  }
}
