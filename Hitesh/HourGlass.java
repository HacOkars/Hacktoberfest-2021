package DSA;

//import java.util.Scanner;
//
//public class HourGlass {
//    public static void main(String[] args){
//        int[][] a = {{1,1,1,0,0,0},
//                     {0,1,0,0,0,0},
//                     {1,1,1,0,0,0},
//                     {0,9,2,-4,-4,0},
//                     {0,0,0,-2,0,0},
//                     {0,0,-1,-2,-4,0},
//                     };
//        Scanner sc = new Scanner(System.in);
//        int sum =0;
//
//       for(int i=0;i<a.length;i++){
//            for (int j=0;j<a.length;j++){
//                try{a[i][j] = sc.nextInt();}
//                catch(ArrayIndexOutOfBoundsException e){
//                    System.out.println("continue");
//                }
//            }
//        }
//        System.out.println(" ");
//        for (int i=0;i<a.length;i++){
//
//            for (int j=0;j<a.length;j++){
//                System.out.print(a[i][j]+" ");
//            }
//            System.out.println("");
//        }
//        for(int i=0;i<a.length;i++){
//            if(i>3)break;
//            for (int j=0;j<a.length;j++){
//                if(j==3) break;
//                int maxSum=    a[i][j]+a[i][j+1]+a[i][j+2]+
//                               a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+
//                               a[i+2][j]+a[i+2][j+1]+a[i+2][j+2] ;
//
//                if(maxSum > sum){ sum = maxSum;}
//            }
//
//        }
//        System.out.println(sum);
//    }
//}
// solution number 2
import java.util.Scanner;

public class HourGlass{

    public static void main(String [] args) {
        Scanner scan = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for (int row = 0; row < 6; row++) {
            for (int col = 0; col < 6; col++) {
                arr[row][col] = scan.nextInt();
            }
        }
        scan.close();

        System.out.println(maxHourglass(arr));
    }

    public static int maxHourglass(int [][] arr) {
        int max = Integer.MIN_VALUE;
        for (int row = 0; row < 4; row++) {
            for (int col = 0; col < 4; col++) {
                int sum = findSum(arr, row, col);
                max = Math.max(max, sum);
            }
        }
        return max;
    }

    private static int findSum(int [][] arr, int r, int c) {
        int sum = arr[r+0][c+0] + arr[r+0][c+1] + arr[r+0][c+2]
                                + arr[r+1][c+1] +
                  arr[r+2][c+0] + arr[r+2][c+1] + arr[r+2][c+2];
        return sum;
    }
}