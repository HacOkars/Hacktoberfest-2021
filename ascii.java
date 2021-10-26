import java.util.Scanner;

public class ascii {

        public static void main(String[] args) {

            Scanner scan = new Scanner(System.in);
            System.out.print("ENTER WORD :");
            char[] Array = scan.next().toCharArray();

            System.out.print("ASCII :");
            for (int i=0; i<Array.length; i++)
            {
                int temp = Array[i];
                System.out.print(temp+" ");
            }


        }

}
