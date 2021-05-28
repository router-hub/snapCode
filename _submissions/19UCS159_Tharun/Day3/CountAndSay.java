public class CountAndSay {
  public String countAndSay(int A) {
      if(A==1) return "1";
      String prev="1";
      for(int i=2;i<=A;i++){
          char curr=prev.charAt(0);
          int j=1,currCount=1;
          StringBuilder ith=new StringBuilder();
          while(j<prev.length()){
              while(j<prev.length() && prev.charAt(j)==curr){
                  currCount++;
                  j++;
              }
              if(j==prev.length()) break;
              ith.append(Integer.toString(currCount));
              ith.append(curr);
              curr=prev.charAt(j);
              currCount=1;
              j++;
          }
          ith.append(Integer.toString(currCount));
          ith.append(curr);
          prev=ith.toString();
      }
      return prev;
  }
}
