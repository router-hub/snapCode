public class Solution {
  public int solve(String A) {
    Stack<Character> stack = new Stack<>();
    for (char c : A.toCharArray()) {
      if (c == '(') {
        stack.push(c);
      } else {
        if (stack.isEmpty())
          return 0;
        if (stack.peek() != '(')
          return 0;
        stack.pop();
      }
    }
    return stack.isEmpty() ? 1 : 0;
  }
}
