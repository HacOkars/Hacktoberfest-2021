//Ques=>Find the sum of all the multiples of 3 or 5 below 1000?
public class problem1
{

	public static void main(String[] args) 
	{
		
		int i;
		int sum=0;
		for(i=0;i<1000;i++)
		{
			if(i%3==0||i%5==0)
				sum=sum+i;
			
		}
System.out.println("sum of all multiples of 3 and 5 below 1000 is "+sum);
	}

}
// output:-233168
