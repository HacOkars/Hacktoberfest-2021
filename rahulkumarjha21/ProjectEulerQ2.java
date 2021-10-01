public class ProjectEulerQ2
{
	public static void main(String[] args)
	{
		int a=1,b=2,c=a+b,sum=2;
		while(c<4000000)
		{
			if(c%2==0)
				sum=sum+c;
			c=a+b;
			a=b;
			b=c;
		}
		System.out.println(sum);
	}
}
