import java.math.BigInteger;
public class ProjectEulerQ16 
{
	public static BigInteger digitSum(BigInteger n)
	{
		BigInteger sum=BigInteger.ZERO;
		while(!(n.equals(BigInteger.ZERO)))
		{
			sum=sum.add(n.mod(BigInteger.TEN));
			n=n.divide(BigInteger.TEN);
		}
		return(sum);
	}
	public static void main(String[] args) 
	{
		BigInteger x=new BigInteger("2");
		int y=1000;
		BigInteger z=x.pow(y);
		System.out.println(digitSum(z));
	}
}