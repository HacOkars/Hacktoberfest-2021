import java.util.Scanner;
public class Main

{
	public static void main(String[] args) {
	  
	  Scanner s = new Scanner(System.in);
	  int x = s.nextInt();
	  
	  for(int i = 1; i<=10; i++){
	      int ans = x*i;
	      System.out.println(x + " X " + i + " = " + ans);
	  }

		
	}
}