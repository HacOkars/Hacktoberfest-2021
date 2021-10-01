//Even Fibonnaci Numbers
public class problem2 {

	public static void main(String[] args)
	{
		int n=4000000;
		int a=0;
		int b=1;
		int sum=0;
		int c=0;
		for(;c<n;c++)
		{
			 c=a+b;
			a=b;
			b=c;
			if(c%2==0) {
				sum=sum+c;
		}}
		System.out.println("The sum of even fibonnaci numbers are "+sum);
	}

}
//output:-The sum of even fibonnaci numbers are 4613732
