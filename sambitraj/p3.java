
import java.util.*;

public class p3
{
	void ex(int ar[], int a, int b)
	{
		int c = ar[a];
		ar[a] = ar[b];
		ar[b] = c;
	}

	void sorting(int ar[], int n)
	{
		Arrays.sort(ar);

		for (int i=0; i<n-1; i += 2)
			ex(ar, i, i+1);
	}

	public static void main(String args[])
	{
		p3 obj = new p3();
		Scanner sc=new Scanner(System.in);  
		System.out.print("Enter the number of elements you want to store: ");  
		int arr=sc.nextInt();  
		  
		int ar[] = new int[arr];  
		System.out.println("Enter the elements of the array: "); 
		
		for(int i=0; i<arr; i++)  
		{  
		
			ar[i]=sc.nextInt();  
		} 
		
		System.out.print("input array {");
		for (int i=0; i<arr; i++)   
		{  
			System.out.print(ar[i]+",");  
		}  
		System.out.println("}");

		int n = ar.length;
		obj.sorting(ar, n);
		System.out.print("output array {");
		for (int i : ar) {
			System.out.print(i + ",");
		}
		System.out.print("}");
	}
}
