import java.util.*;
public class diagonalDifference {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[][] = new int [n][n];
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                arr[i][j] = sc.nextInt();
            }
        }
        int Pd=0;
        int Sd=0;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                if(i==j){
                    Pd+=arr[i][j];
                }
                if((i+j)==(n-1)){
                    Sd+=arr[i][j];
                }
            }
        }
        if((Pd-Sd)>=0){
            System.out.println(Pd-Sd);
        }
        else{
            System.out.println((-1)*(Pd-Sd));
        }
        
    }
}
