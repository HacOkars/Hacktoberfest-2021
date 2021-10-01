import java.util.*;
public class Solution{
  private static String rev(String n){
      char a[] = n.toCharArray();
      String rev = "";
      for(int i = (a.length)-1; i>=0 ; i--){
             rev+=a[i];
      }
      return rev;
  }
  public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      String n = sc.next();
      if(n.equals(rev(n))){
          System.out.println("Yes");
      }
      else{
          System.out.println("No");
      }
   }
}
