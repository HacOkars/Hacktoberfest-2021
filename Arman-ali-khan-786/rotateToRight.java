import java.util.Scanner;
public class rotateToRight {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // you can also input the array elements from the user ..
        int a[] = {1,2,3,4,5,6};
        System.out.println("Enter how times do you want to rotate :");
        int r = sc.nextInt();   // no of times rotation is to be done
        int j ;
        for(int i = 0 ; i < r ; i++){
            int last = a[a.length-1];
            for(j = a.length-1 ; j>0 ; j--){
               a[j]= a[j-1];
            }
            a[j] = last;
        }
        
        // printing the rotated array 
        for(int i : a){
            System.out.print(i+" ");
        }
    }
}
