import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner var= new Scanner(System.in);
        System.out.println("Enter the no:");
        int num = var.nextInt();
        for (int i = num-1; i >0 ; i--) {
            num = num*i;
            
        }

        System.out.println(num);
        
    }
    
}
