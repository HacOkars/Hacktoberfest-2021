import java.util.*;
public class HARDBET
{
    static int pos = 0;
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		    Scanner sc = new Scanner(System.in);
		    int t = sc.nextInt();
			String res[] = new String[t];
		    for(int i = 1 ; i <=t ;i++ ){
		        int a = sc.nextInt();
		        int b = sc.nextInt();
		        int c = sc.nextInt();
				if(b<a & b<c){
					res[pos++] = "Bob";
					
				}
				else if(c<a & c<a){
					res[pos++] = "Alice";
				}
				else{
					res[pos++] = "Draw";
				}
		        
		    }
			for(String i : res){
				System.out.println(i);
			}
		}catch(Exception e){
		    return;
		}
		
	}
}
