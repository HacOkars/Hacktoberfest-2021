//Q7) By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number?


public class eulerQ7 {
	public static void main(String args[]) {
		int n=3,i=1;
		while(i<10001) { int c=0;
			for(int j=3;j<=n/2;j+=2) {
				if(n%j==0)
				{	c++;break;}}
			if(c==0)
			{
				i++;
			}n+=2;
		}
		System.out.println((n-2));
	}
}