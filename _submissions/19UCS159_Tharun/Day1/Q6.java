
/*
Pair With Given Difference : https://www.interviewbit.com/problems/pair-with-given-difference/

Given an one-dimensional unsorted array A containing N integers.

You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

Return 1 if any such pair exists else return 0.
*/

import java.util.*;

public class Q6 {
  // T = O(nlogn) => sorting ,S= O(1)
  public int solve(int[] A, int B) {
    Arrays.sort(A);
    int i = 0, j = 1, n = A.length;
    while (i < n && j < n) {
      int diff = A[j] - A[i];
      if (i != j && diff == B) {
        return 1;
      }
      if (A[j] - A[i] < B)
        j++;
      else
        i++;
    }
    return 0;
  }
}
