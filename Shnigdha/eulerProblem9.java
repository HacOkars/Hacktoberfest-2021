//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

//

//a2 + b2 = c2

//For example, 32 + 42 = 9 + 16 = 25 = 52.

//

//There exists exactly one Pythagorean triplet for which a + b + c = 1000.

//Find the product abc.

public class eulerProblem9

{

	public static void main(String[] args)	{

		for(int a=3; a<=1000; a++)

		{

			for(int b=a+1; b<=1000; b++)

			{

				double c2= Math.pow(a, 2) + Math.pow(b, 2);

				double c= Math.pow(c2, 0.5);

				if(a + b + c==1000)

				{int x= (int)(a * b * c);

					System.out.println(x);

					break;

				}

			}

		}

	}

}

//output:-31875000
