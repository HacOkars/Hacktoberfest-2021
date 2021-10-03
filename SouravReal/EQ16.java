import java.math.BigInteger;

public class EQ16 {
    public static void main(String[] args) {
        int i = 1000, sum=0;
        BigInteger val = new BigInteger("2") ;
        BigInteger res = val.pow(i) ;

        String str = res.toString() ;
        for(char c : str.toCharArray())
        {
        sum+=Integer.parseInt(Character.toString(c)) ;
        }

        System.out.println(sum);

    }
    
}