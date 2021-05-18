
/*
Balanced Parantheses : https://www.interviewbit.com/problems/balanced-parantheses/

Given a string A consisting only of '(' and ')'.

You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0.
*/

import java.util.*;

public class Q8 {
  // T=O(n),S=O(n)(stack)
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
