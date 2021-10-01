import java.util.Scanner;
import java.lang.Math;
public class Main

{
	public static void main(String[] args) {
	  
	  Scanner s = new Scanner(System.in);
	  System.out.println("Enter the number you want to find power of: ");
	  int n = s.nextInt();
	  System.out.println("Enter the range till which  powers are to be printed: ");
	  int power = s.nextInt();
	  
	  for(int i = 1; i<=power; i++){
	      long ans = (long)Math.pow(n, i);
	      System.out.print("\n"+ ans);
	  }

		
	}
}
