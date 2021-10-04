/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
 */
 
public class Euler10 {
		
   public static boolean isPrime(long n)
        
        {    
	       if (n < 2) {return false;}
           else if (n == 2) {return true;}
           for (int a = 3; a < Math.sqrt(n) + 1; a += 2)
                  {
                      if (n % a == 0)
                      {
                        return false;
                      }
                  }
             return true;
         }
           
   
   public static void main(String[] args)
       {
   	    long s = 2;
    	int b;
   	    for(b = 3; b < 2000000; b += 2)
   	   {
   		   if(isPrime(b)== true)
   		   {
   		      s = s + b;
   		   }
     	}

   	    System.out.println(s);

	}

}