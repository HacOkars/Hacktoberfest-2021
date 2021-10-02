import java.util.Scanner;
public class Count {
    public static void main(String[] args) {
        int n,positive = 0,negative = 0, zero = 0;
        char choice;
        Scanner var = new Scanner(System.in);
        do {
            System.out.println("Enter the no: ");
            n = var.nextInt();
            if (n>0) {
                positive = positive+1;
            }
            if (n<0) {
                negative = negative + 1;
            }
            if (n==0){
                zero = zero +1;
            }
            System.out.println("Press Y to continue or anything to terminate: ");
            choice = var.next().charAt(0);
            
        }while (choice == 'y' || choice == 'y');

        System.out.println("No. of Positive  you entered: "+positive);
        System.out.println("No. of negative  you entered: "+negative);
        System.out.println("No. of zero  you entered: "+zero);


    }
}
