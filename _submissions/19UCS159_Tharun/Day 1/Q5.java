
/*
Number of 1 Bits : https://www.interviewbit.com/problems/number-of-1-bits/

Write a function that takes an unsigned integer and returns the number of 1 bits it has.

Example:

The 32-bit integer 11 has binary representation

00000000000000000000000000001011

so the function should return 3.
*/
public class Q5 {
  public int numSetBits(long a) {
    int ones = 0;
    while (a > 0) {
      ones++;
      a = (a & (a - 1));
    }
    return ones;
  }
}
