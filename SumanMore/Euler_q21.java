//Evaluate the sum of all the amicable numbers under 10000.
package code;
public class q21 {
public static void main(String[] args) {
		int i,j,a,sum=0,sum1=0,sum2=0;
		for(i =1;i<10000;i++)
		{sum=0;sum1=0;
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				{
					sum = sum+j;
				}
			}sum1=0;
			for( a=1;a<sum;a++)
			{
				if(sum%a==0)
				{
					sum1=sum1+a;
				}
			}
			if(i==sum1&&sum1!=sum)
			{
				sum2=sum2+i;
			}
		}
			
		System.out.println("the sum ="+sum2);
		}

	


}
//output
//the sum =31626
