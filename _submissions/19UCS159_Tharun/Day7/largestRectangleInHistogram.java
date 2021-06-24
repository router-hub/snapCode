import java.util.*;

public class largestRectangleInHistogram {
  public int largestRectangleArea(int[] A) {
    // For every index find next smaller element to its left and right
    // ans is max of (right[i]-left[i]-1)*arr[i]
    int n = A.length;

    Stack<Integer> stack = new Stack<>();
    int[] left = new int[n], right = new int[n];
    // prev smaller
    for (int i = 0; i < n; i++) {
      while (!stack.isEmpty() && A[stack.peek()] >= A[i]) {
        stack.pop();
      }
      left[i] = stack.isEmpty() ? -1 : stack.peek();
      stack.push(i);
    }
    stack.clear();
    // next smaller element
    for (int i = n - 1; i >= 0; i--) {
      while (!stack.isEmpty() && A[stack.peek()] >= A[i]) {
        stack.pop();
      }
      right[i] = stack.isEmpty() ? n : stack.peek();
      stack.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans = Math.max(ans, (right[i] - left[i] - 1) * A[i]);
    }
    return ans;

  }
}
