
//WAP to print the factorial of any number inputed between 1 to 100

import java.util.*;
import java.io.*;
import java.math.BigInteger;
class Solution{
	public static void main(String args[])
	{
		try{
			Scanner sc=new Scanner(System.in);
			int n=sc.nextInt();
			if(n>=1 && n<=100)
			{
				BigInteger b = new BigInteger("1");
				for(int i=1;i<=n;i++)
				{
					BigInteger l=new BigInteger(""+i);
					b=b.multiply(l);
				}
				System.out.println(b);
			}
		}catch(Exception e){}
	}
}

//25
//15511210043330985984000000