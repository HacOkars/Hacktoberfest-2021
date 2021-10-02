package Arrays;

public class MinMax {
    public static class Pair {
        int min;
        int max;
    }

    public static Pair getMinMax(int[] arr, int n) {
        Pair minmax = new Pair();
        int i;

        if (n == 1) {
            minmax.min = arr[0];
            minmax.max = arr[0];
            return minmax;
        }

        if (arr[0] > arr[1]) {
            minmax.max = arr[0];
            minmax.min = arr[1];
        } else {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }
        
        for (i = 2; i < n; i++) {
            if (arr[i] > minmax.max) {
                minmax.max = arr[i];
            } else if (arr[i] < minmax.min) {
                minmax.min = arr[i];
            }
        }
        return minmax;
    }

    /*
     * public static void Min(int[] arr ){ int n = arr.length; int min = arr[0]; for
     * (int i = 0; i < n; i++) { if (arr[i] < min) { min = arr[i]; } }
     * System.out.println("Minimum Element is : " + min); } public static void
     * Max(int[] arr ){ int n = arr.length; int max = arr[0]; for (int i = 0; i < n;
     * i++) { if (arr[i] > max) { max = arr[i]; } }
     * System.out.println("Minimum Element is : " + max); }
     */
    public static void main(String[] args) {
        int[] arr = { 5, 8, 4, 1, 3, 2, -1 };
        Pair minmax = getMinMax(arr, 7);

        System.out.println("Maximum is " + minmax.min);
        System.out.println("Minimum is " + minmax.max);

    }
}
