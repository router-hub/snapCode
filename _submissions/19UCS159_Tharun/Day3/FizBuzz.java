public class FizBuzz {
  public String[] fizzBuzz(int A) {
    String[] ans = new String[A];
    int freq3 = 0, freq5 = 0;
    for (int i = 0; i < A; i++) {
      freq3++;
      freq5++;
      if (freq3 == 3 && freq5 == 5) {
        ans[i] = "FizzBuzz";
        freq3 = 0;
        freq5 = 0;
      } else if (freq3 == 3) {
        ans[i] = "Fizz";
        freq3 = 0;
      } else if (freq5 == 5) {
        ans[i] = "Buzz";
        freq5 = 0;
      } else {
        ans[i] = Integer.toString(i + 1);
      }
    }
    return ans;
  }
}
