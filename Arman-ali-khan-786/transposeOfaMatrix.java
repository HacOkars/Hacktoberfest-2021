import java.util.Scanner;

public class transposeOfaMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no.of rows :");
        int r = sc.nextInt();
        System.out.println("Enter no.of columns :");
        int c = sc.nextInt();
        System.out.println("Enter Array elements :");
        int a[][] = new int [r][c];
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                a[i][j] = sc.nextInt();
            }
            System.out.println();
        }
        System.out.println("Array : ");
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
               System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }

        int t[][] = new int [c][r];
        for(int i = 0 ; i < c ; i++){
            for(int j = 0 ; j < r ; j++){
                t[i][j] = a[j][i];
            }
        }
        System.out.println("Transpose :");
        for(int i = 0 ; i < c ; i++){
            for(int j = 0 ; j < r ; j++){
               System.out.print(t[i][j]+" ");
            }
            System.out.println();
        }


    }
}
