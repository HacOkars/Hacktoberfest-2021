//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

public class eulerProgram5

 {

   public static long evenlydivide(long a,long b) {

    long temp,m=0,n;

    temp=Math.min(a, b);

    for(long l=1;l<=temp;l++) {

      if(a%l==0&&b%l==0) {

        m=l;

      }

    }

    n=(a*b)/m;

    return n;

  }

  public static void main(String[] args){

    long a=1;  

    for(long l=2;l<21;l++ ) {

      a=evenlydivide(a,l);

      }

    System.out.println(a);

    }  

 }

//output:-232792560
