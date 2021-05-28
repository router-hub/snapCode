
public class powerOfIntegers {
  public int isPower(int A) {
    if (A == 1)
      return 1;
    for (int i = 2; i * i <= A; i++) {
      float log = (float) (Math.log(A) / Math.log(i));
      int val = (int) log;
      if (log == val)
        return 1;
    }
    return 0;
  }
}