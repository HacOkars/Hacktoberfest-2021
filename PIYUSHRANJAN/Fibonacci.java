import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner var = new Scanner(System.in);
        System.out.println("Enter the no. of fibonacci terms you want: ");
        int n = var.nextInt();
        int n1=0,n2=1,n3;
        System.out.println(n1 + "\n"+n2);
        for (int i = 3; i <=n ; i++) {
            n3 = n1+n2;
            System.out.println(n3);
            n1=n2;
            n2=n3;
        }
    }
}
