import java.util.Scanner;
public class Factor {
    public static void main(String[] args) {
        Scanner var = new Scanner(System.in);
        System.out.println("Enter the Number to check: ");
        int Hcf =0;
        int num1 = var.nextInt();
        int num2 = var.nextInt();
        for (int i = 1; i <=num1 || i<= num2; i++) {
            if (num1%i==0 && num2%i == 0) {
                Hcf = i;
            }
        }
        System.out.println("Hcf of the two no is: "+Hcf);
    }
}
