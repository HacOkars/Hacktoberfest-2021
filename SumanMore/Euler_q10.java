//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.
package code;
public class q10 {
public static void main(String[] args) {
		 int x,i,f=0;
	        long s=2;
	        for(x=3;x<=2000000;x+=2)
	        {
	            for(i=3;i<=Math.sqrt(x);i+=2)
	            {
	                if(x%i==0)
	                {
	                    f=1; 
	                }
	            }
	           if(f==0)
	           {
	            s=s+x; 
	            }
	            f=0;
	        }
	   System.out.println(s);
	    }
	}
//output:
//142913828922
