import java.util.Scanner;

public class Pattern {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter (1-2) : ");
        int ch = in.nextInt();
        in.close();
        switch(ch) {
            case 1 -> pattern17(4);
            case 2 -> pattern31(4);
        }
    }

    /***
        4 4 4 4 4 4 4  
        4 3 3 3 3 3 4   
        4 3 2 2 2 3 4   
        4 3 2 1 2 3 4   
        4 3 2 2 2 3 4   
        4 3 3 3 3 3 4   
        4 4 4 4 4 4 4   
     */
    static void pattern31(int n) {
        int originalN = n;
        n = (2 * n) -2;
        for (int row = 0; row <= n; row++) {
            for (int col = 0; col <= n; col++) {
                int atEveryIndex = originalN - Math.min(Math.min(row, col), Math.min(n - row, n - col));
                System.out.print(atEveryIndex + " ");
            }
            System.out.println();
        }
    }

    /***
         1
        212
       32123
      4321234
       32123
        212
         1
     */

    static void pattern17(int n) {
        for (int row = 1; row <= 2 * n; row++) {

            int c = row > n ? 2 * n - row: row;

            for (int space = 0; space < n-c; space++) {
                System.out.print("  ");
            }

            for (int col = c; col >= 1; col--) {
                System.out.print(col + " ");
            }
            for (int col = 2; col <= c; col++) {
                System.out.print(col + " ");
            }

            System.out.println();
        }
    }
}
