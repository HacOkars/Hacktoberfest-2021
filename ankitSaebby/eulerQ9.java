//Q9) A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.


public class eulerQ9 {

	public static void main(String[] args) { int a=0;
		for(int b=1;b<1000;b++)
			for(int c=b+1;c<1000;c++)
			{
				a=1000-b-c;
				if(a*a==b*b+c*c){
					System.out.println((a*b*c));
				}
			}

	}

}