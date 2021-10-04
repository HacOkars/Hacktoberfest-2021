/*
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
 */
 
public class Problem_9 {

	public static void main(String[] args) {
		
		for(int a = 3; a <= 1000; a++)
		{
			for(int b = a + 1; b <= 1000; b++)
			{
				double cSquare = Math.pow(a,2) + Math.pow(b,2);
				double c = Math.pow(cSquare,0.5);
				if(a + b + c == 1000)
				
				{
				double prod = a*b*c;
				System.out.println((int)prod);
				break;
				}
		
			}
		}

	}

}