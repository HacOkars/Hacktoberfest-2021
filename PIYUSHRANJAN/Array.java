import java.util.Scanner;
public class Array {
    public static void main(String[] args) {
        // int[] list = {4,6,7,8};
        // System.out.println(list[0]);
        // System.out.println(list.length);
        // // for (int i = 0; i < list.length; i++) {
        // //     System.out.println(list[i]);
        // // }
        // for (int i : list) {
        //     System.out.print(i);
        // }
        Scanner var = new Scanner(System.in);
        // int list[] = new int[10];
        // for (int i = 0; i <10; i++) {
        //       list[i] = var.nextInt();
        // }
        // for (int i = 0; i <10; i++) {
        //       System.out.print(list[i]);
        // }
        // var.close();
        int row = var.nextInt();
        int col = var.nextInt();
        int a[][] = new int[row][col];
        // int b[][] = new int[row][col];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {

                a[i][j] = var.nextInt();
            }
            
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {

                System.out.print(a[i][j]);;
            }
            System.out.println();
            
        }
        var.close();
        
    }
}
