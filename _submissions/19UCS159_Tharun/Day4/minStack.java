import java.util.*;

public class minStack {
  Stack<int[]> stack = new Stack<>();

  public void push(int x) {
    int min = stack.isEmpty() ? x : Math.min(x, stack.peek()[1]);
    stack.push(new int[] { x, min });
  }

  public void pop() {
    if (stack.isEmpty())
      return;
    stack.pop();
  }

  public int top() {
    if (stack.isEmpty())
      return -1;
    return stack.peek()[0];
  }

  public int getMin() {
    if (stack.isEmpty())
      return -1;
    return stack.peek()[1];
  }

}
