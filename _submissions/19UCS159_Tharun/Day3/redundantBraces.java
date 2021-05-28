import java.util.*;

public class redundantBraces {
  public int braces(String A) {
    Stack<Character> stack = new Stack<>();
    for (char ch : A.toCharArray()) {
      if (ch == ')') {
        int operators = 0;
        while (stack.peek() != '(') {
          char c = stack.pop();
          if (c == '+' || c == '-' || c == '*' || c == '/')
            operators++;
        }
        stack.pop();
        if (operators == 0)
          return 1;
      } else {
        stack.push(ch);
      }
    }
    return 0;
  }
}
