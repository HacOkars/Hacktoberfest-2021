import java.util.*;
public class p1
{
    static void c(int ar[], int n, int x)
    {
        int res = 0;
        for (int i=0; i<n; i++) {
            if (x == ar[i]) {
              res++;
            }
        }
        
        if (res==0) {
        	System.out.println("no not found");
        }
        else {
        	System.out.println("occurance "+ res +"times");
        }      
    }
     
    public static void main(String args[])
    {
		Scanner sc=new Scanner(System.in);  
		System.out.print("how many no of elements you want to store in array ");  
		int arr=sc.nextInt();  
		  
		int ar[] = new int[arr];  
        int n = ar.length;
		System.out.println("Enter the elements of the array: "); 
		
		for(int i=0; i<arr; i++)  
		{  
		
			ar[i]=sc.nextInt();  
		} 
		
		System.out.print("array {");
		for (int i=0; i<arr; i++)   
		{  
			System.out.print(ar[i]+",");  
		}  
		System.out.println("}");       
        System.out.println( "enter the number");
        int x = sc.nextInt();
        c(ar, n, x);
    }
}
