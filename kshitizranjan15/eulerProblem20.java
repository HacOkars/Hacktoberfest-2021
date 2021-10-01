import java.math.BigInteger;
import java.util.Scanner;

//FIND THE SUM OF THE DIGITS IN THE NUMBER 100! 
public class eulerProblem20 {

	public static void main  (String[]args) 
	
	{
		Scanner sc=new Scanner(System.in);
		
		BigInteger fact=BigInteger.valueOf(1);
		
		for(long i=1; i<=100; i++)
		{
			fact = fact.multiply(BigInteger.valueOf(i));
		}		
		BigInteger sum=BigInteger.valueOf(0);
		BigInteger zer=BigInteger.valueOf(0);
		while(!fact.equals(zer))
		{
			sum=sum.add(fact.remainder(BigInteger.valueOf(10)));
			fact=fact.divide(BigInteger.valueOf(10));
			
			
		}
		System.out.println("The sum of 100! is "+sum);
		
             
		

	}

}
//output:-The sum of 100! is 648
