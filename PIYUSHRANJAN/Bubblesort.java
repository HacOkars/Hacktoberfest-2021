public class Bubblesort {

    public static void main(String[] args) {
        int a[] = {2,4,1,7,3,9,0};
        for (int i = 0; i < a.length-1; i++) {
            for (int j = 0; j <a.length-1 ; j++) {
                if (a[j]>a[j+1]) {
                    int temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                }
            }
            
        }
        for (int i : a) {
            System.out.print(i+" ");
        }
    }
    
}
