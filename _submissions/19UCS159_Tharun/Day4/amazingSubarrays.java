import java.util.*;

public class amazingSubarrays {
  public int solve(String A) {
    long ans = 0;
    Set<Character> vowels = new HashSet<>();
    vowels.add('a');
    vowels.add('e');
    vowels.add('i');
    vowels.add('o');
    vowels.add('u');
    vowels.add('A');
    vowels.add('E');
    vowels.add('I');
    vowels.add('O');
    vowels.add('U');
    for (int i = 0; i < A.length(); i++) {
      if (vowels.contains(A.charAt(i)))
        ans += (A.length() - i);
    }
    return (int) (ans % 10003);
  }
}
