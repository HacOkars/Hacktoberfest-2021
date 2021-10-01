 //Write a program to find partial sums of the terms of the Fibonacci sequence.

package daysOfCode;
import java.util.Scanner;

public class sol_2 {	
	public static void main(String args[]) {
	    	Scanner sc=new Scanner(System.in);
	    	System.out.println("Enter the number");
	        int num = sc.nextInt();
	        System.out.println("The required series is:");
	        int a=0;
	        int b=1;
	        System.out.print(a+" ");
	        System.out.print(b+" ");
	        for(int i=0; i<num-1; i++) {
	        	int c=a+b;
	        	System.out.print(c+" ");
	        	a=b;
	        	b=c;
	        }
	        System.out.println("and");
	        System.out.println("Partial sum of Fibonacci numbers is ");
	        System.out.println( result(num));       
	    }   
	    static int result(int num)
	    {
	        int fi_no[]=new int[num+1];
	        fi_no[0] = 0; 
	        fi_no[1] = 1;
	        int add = fi_no[0] + fi_no[1];
	      
	        for (int i=2; i<=num; i++)
	        {
	        	fi_no[i] = fi_no[i-1]+fi_no[i-2];
	            add += fi_no[i];
	        }	      
	        return add;
	    }
	}

