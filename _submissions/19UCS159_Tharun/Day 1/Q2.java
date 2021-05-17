
/*
Prime Sum : https://www.interviewbit.com/problems/prime-sum/

Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.
*/
import java.util.*;

public class Q2 {
  public int[] primesum(int A) {
    boolean[] isPrime = new boolean[A + 1];
    Arrays.fill(isPrime, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= A; i++) {
      if (isPrime[i]) {
        for (int j = i * i; j <= A; j += i) {
          isPrime[j] = false;
        }
      }
    }
    for (int p = 2; p <= A / 2; p++) {
      if (isPrime[p] && isPrime[A - p]) {
        return new int[] { p, A - p };
      }
    }
    return null;
  }
}
