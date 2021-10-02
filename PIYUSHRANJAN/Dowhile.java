import java.io.Console;
import java.util.Scanner;
public class Dowhile {
    public static void main(String[] args) {
        Scanner var = new Scanner(System.in);
        int num1,num2;
        char choice;
        do {
            System.out.println("Enter the two no. to get the sum: ");
            num1 = var.nextInt();
            num2 = var.nextInt();
            int sum = num1 + num2;
            System.out.println("The sum of the two no. is: "+sum);
            System.out.println("Press Y to continue or anything to terminate: ");
            choice = var.next().charAt(0);
            // System.out.println();
        } while (choice == 'y' || choice == 'y');
    }
}
