import java.util.*;

public class scrambleString {
  // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
  public int isScramble(final String A, final String B) {
    HashMap<String, Boolean> map = new HashMap<>();
    return helper(A, B, map) ? 1 : 0;
  }

  private boolean helper(String A, String B, HashMap<String, Boolean> map) {
    if (A.length() != B.length())
      return false;
    if (A.equals(B)) {
      return true;
    }
    String curr = A + " " + B;
    if (map.containsKey(curr)) {
      return map.get(curr);
    }
    int n = A.length();
    boolean ok = false;
    for (int i = 1; i < n; i++) {
      if (helper(A.substring(0, i), B.substring(0, i), map) && helper(A.substring(i, n), B.substring(i, n), map)) {
        ok = true;
        break;
      }
      if (helper(A.substring(0, i), B.substring(n - i, n), map)
          && helper(A.substring(i, n), B.substring(0, n - i), map)) {
        ok = true;
        break;
      }
    }
    map.put(curr, ok);
    return ok;
  }
}
