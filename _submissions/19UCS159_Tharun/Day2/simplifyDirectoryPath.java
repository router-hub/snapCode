import java.util.*;

public class simplifyDirectoryPath {
  public String simplifyPath(String A) {
    String[] strs = A.split("/");
    Deque<String> dq = new ArrayDeque<>();
    for (String s : strs) {
      if (s.equals(".") || s.equals(""))
        continue;
      if (s.equals("..")) {
        if (!dq.isEmpty())
          dq.removeLast();
      } else
        dq.addLast(s);
    }
    StringBuilder ans = new StringBuilder("/");
    while (!dq.isEmpty()) {
      ans.append(dq.removeFirst());
      if (!dq.isEmpty())
        ans.append("/");
    }
    return ans.toString();
  }
}
