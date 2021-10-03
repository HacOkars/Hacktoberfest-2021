//Q16) 215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
//
//     What is the sum of the digits of the number 2^1000?


import java.math.BigInteger;
public class eulerQ16 {
	public static void main(String args[]) {
		BigInteger f = new BigInteger("2");
		BigInteger x=f.pow(1000);
		BigInteger a= new BigInteger("10");
        BigInteger s = new BigInteger("1");
        BigInteger sum = new BigInteger("0");
	    while( x.compareTo(s)>0 )
	    {
	    	s=x.remainder(a);
            sum=sum.add(s);
            x=x.divide(a);
	    }System.out.println(sum);
	}
}