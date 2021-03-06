//Q29) Consider all integer combinations of ab for 2 ≤ a ≤ 5 and 2 ≤ b ≤ 5:
//
//22=4, 23=8, 24=16, 25=32
//32=9, 33=27, 34=81, 35=243
//42=16, 43=64, 44=256, 45=1024
//52=25, 53=125, 54=625, 55=3125
//If they are then placed in numerical order, with any repeats removed, we get the following sequence of 15 distinct terms:
//
//4, 8, 9, 16, 25, 27, 32, 64, 81, 125, 243, 256, 625, 1024, 3125
//
//How many distinct terms are in the sequence generated by ab for 2 ≤ a ≤ 100 and 2 ≤ b ≤ 100?


public class eulerQ29 {

	public static void main(String[] args) {
		int n=getLength(),x=0;
		double a[]=new double[n];
		for(double i=2;i<=100;i++)
			for(double j=2;j<=100;j++) {
				a[x]=Math.pow(i, j);
				x++;
			}
		int g= countDistinct(a,n);
		System.out.println(g);
	}
	public static int getLength() {
		int c=0;
		for(int i=2;i<=100;i++)
			for(int j=2;j<=100;j++) {
				c++;
			}
		return c;
	}
    
	public static int countDistinct(double arr[], int n) 
	{ 
		int r= 1; 
		for(int i=1;i<n;i++)  
		{ 
			int j=0; 
			for (j=0;j<i;j++) 
				if (arr[i]==arr[j]) 
					break; 

			if (i==j) 
				r++; 
		} 
		return r; 
} 

}