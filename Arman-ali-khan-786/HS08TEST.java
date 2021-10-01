import java.util.*;

public class HS08TEST
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		int withdraw;
	    float amount;
	    Scanner sc = new Scanner(System.in);
	    withdraw = sc.nextInt();
	    amount = sc.nextFloat();
	    if(amount >=  withdraw + 0.5 && withdraw % 5 == 0){
	        System.out.println(String.format("%.2f", amount - withdraw - 0.5));
	    }
	    else{
	        System.out.println(String.format("%.2f", amount));
	    }
		}catch(Exception e){
		    return;
		}
	}
}
