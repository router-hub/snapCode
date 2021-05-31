import java.util.*;

public class maxSpecialProduct {
  public int maxSpecialProduct1(int[] A) {
    int n = A.length;
    long mod = (long) 1e9 + 7;
    Stack<Integer> stack = new Stack<>();
    long[] left = new long[n];
    long[] right = new long[n];
    for (int i = 0; i < n; i++) {
      while (!stack.isEmpty() && A[stack.peek()] <= A[i]) {
        stack.pop();
      }
      left[i] = stack.isEmpty() ? 0 : stack.peek() % mod;
      stack.push(i);
    }
    stack.clear();
    for (int i = n - 1; i >= 0; i--) {
      while (!stack.isEmpty() && A[stack.peek()] <= A[i]) {
        stack.pop();
      }
      right[i] = stack.isEmpty() ? 0 : stack.peek() % mod;
      stack.push(i);
    }

    long ans = 0;
    for (int i = 0; i < n; i++) {
      long curr = left[i] * right[i];
      if (curr > ans)
        ans = curr;
    }
    return (int) (ans % mod);
  }
}
