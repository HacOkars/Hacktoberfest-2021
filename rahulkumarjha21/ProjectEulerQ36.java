public class ProjectEulerQ36
{
	public static boolean intPalindrome(int n)
	{
		int tmp=n,rev=0;		
		while(tmp!=0)
		{
			rev=(rev*10)+(tmp%10);
			tmp=tmp/10;
		}
		
		if(n==rev)
			return(true);
		else
			return(false);
	}
	public static boolean binaryPalindrome(String str)
	{
		for(int i=0,j=str.length()-1;i<j;i++,j--)
		{
			if(str.charAt(i)!=str.charAt(j))
				return(false);
		}
		return(true);
	}
	public static void main(String args[])
	{
		long sum=0;
		for(int i=1;i<1000000;i++)
		{
			String str=Integer.toBinaryString(i);
			if((intPalindrome(i)) && (binaryPalindrome(str)))
				sum=sum+i;
		}
		System.out.println(sum);
	}
}