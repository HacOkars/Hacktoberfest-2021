import java.util.*;
import java.util.Arrays;
public class TLG
{
	public static void main (String[] args) throws java.lang.Exception
	{		
		try{
			Scanner sc = new Scanner(System.in);
			int r = sc.nextInt();
			int a[] = new int[r];
			int b[]  =new int[r];
			Integer lead[] = new Integer[r];
			int leader[] = new int[r];
			for(int i = 0 ; i<r ; i++){
			    a[i]=sc.nextInt();
			    b[i]=sc.nextInt();
			   
			}
			int cum1=0;
			int cum2=0;
		    for(int i = 0 ; i<r ; i++){
		        cum1+=a[i];
		        cum2+=b[i];
		        if(cum1>cum2){
			        leader[i] = 1;
			        if((cum1-cum2)<0){
			            lead[i] = (-1)*(cum1-cum2);
			        }
			        else{
			            lead[i] = cum1-cum2;
			        }
			    }
			    else{
			        leader[i] = 2;
			        if((cum2-cum1)<0){
			            lead[i] = (-1)*(cum2-cum1);
			        }
			        else{
			            lead[i] = cum2-cum1;
			        }
			    }
		        
		    }
			int max = lead[0];
			for (int i = 1; i < lead.length; i++){
                if (lead[i] > max){
                  max = lead[i];
                }
			}
			    int index = Arrays.asList(lead).indexOf(max);
			    System.out.println(leader[index]+" "+max);
			    
		}catch(Exception e){
			return;
		}
	}
}

