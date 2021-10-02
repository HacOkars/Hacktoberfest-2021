import java.math.BigInteger;
public class ProjectEulerQ20
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
		BigInteger n= new BigInteger("100");
		BigInteger product= new BigInteger("1");
		BigInteger i=BigInteger.TWO;
		while(i.compareTo(n)<=0)
		{
			product=product.multiply(i);
			i=i.add(BigInteger.ONE);
		}
		System.out.println(digitSum(product));
	}
}