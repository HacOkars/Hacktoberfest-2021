import java.util.Scanner;
// calculator program
public class calculator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // Take input from user untill user doesn't press X or x.

        while(true) {
            // Take operator as input.
            System.out.print("Enter The operator: ");
            char operator = in.next().trim().charAt(0);
            int result = 0;
            if(operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%') {
                // Input of Two num.
                System.out.print("Enter Two no. for operation: ");
                int num1 = in.nextInt();
                int num2 = in.nextInt();

                // Addition
                if(operator == '+') {
                    result = num1 + num2;
                }
                if(operator == '-') {
                    result = num1 - num2;
                }
                if(operator == '*') {
                    result = num1 * num2;
                }
                if(operator == '/') {
                    if(num2 > num1){
                        if(num1 != 0){
                            result = num2 / num1;
                        } else {
                            System.out.println("Undefine Result due to num1");
                        }
                    } else {
                        if(num2 != 0){
                            result = num1 / num2;
                        } else {
                            System.out.println("Undefine Result due to num2");
                        }
                    }
                }
                if(operator == '%') {
                    result = num1 % num2;
                }
                System.out.println(result);
            } else if(operator == 'X' || operator == 'x') {
                System.out.println("Program terminated Successfully! :-)");
                break;
            } else {
                System.out.println("Invalid Opertion! :~)");
                return;
            }
        }
    }
}
