import java.math.BigInteger;

public class EulerQ16{
    static String power(long x, int y)
    {
        BigInteger res = new BigInteger("1");
        BigInteger x1 = new BigInteger(String.valueOf(x));
        while (y > 0)
        {
            if ((y & 1) != 0)
                res = res.multiply(x1);
    
            y = y >> 1; 
            x1 = x1.multiply(x1);  
        }
        
        return res.toString();
    }
    public static void main(String[] args) {
        String s = (power(2, 1000));
        long sum = 0l;
        char[] ch = s.toCharArray();
        for(char c: ch)
        {
            sum += (c-48);
        }
        System.out.println(sum);
    }
}
