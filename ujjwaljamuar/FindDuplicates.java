package Arrays;

public class FindDuplicates {

    static void Duplicates(int[] arr){
        int i, n = arr.length, j;

        for ( i = 0; i < n; i++) {
            j = Math.abs(arr[i]);
            if (arr[j] >= 0) {
                arr[j] = -arr[j];
            }
            else{
                System.out.print(j + " ");
            }
        }

    }
    public static void main(String[] args) {
        int[] arr = {1,3,1,3,6,5,5,7,8,8};
        Duplicates(arr);
    }
}
