public class ProjectEulerQ6
{
	public static void main(String args[])
	{
		int sum1=0,sum2=0;
		for(int i=1;i<=100;i++)
		{
			sum1=sum1+(int)(Math.pow(i,2));
			sum2=sum2+i;
		}
		sum2=(int)(Math.pow(sum2,2));
		System.out.println(sum2-sum1);
	}
}