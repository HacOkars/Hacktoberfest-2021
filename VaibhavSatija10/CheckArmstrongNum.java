import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        int number = s.nextInt();


        int originalNumber, remainder, result = 0, n = 0;
        
        originalNumber = number;

        for (;originalNumber != 0; originalNumber /= 10, ++n);

        originalNumber = number;

        for (;originalNumber != 0; originalNumber /= 10)
        {
            remainder = originalNumber % 10;
            result += Math.pow(remainder, n);
        }

        if(result == number)
            System.out.println("true");
        else
            System.out.println("false");
    }
}
