package Arrays;

public class UnionIntersection {

    public static int printUnion(int[] arr1, int[] arr2, int m, int n) {
        int i = 0, j = 0;

        while (i < m && j < n) {
            if (arr1[i] < arr2[j])
                System.out.print(arr1[i++] + " ");
            else if (arr2[j] < arr1[i])
                System.out.print(arr2[j++] + " ");
            else {
                System.out.print(arr2[j++] + " ");
                i++;
            }
        }

        while (i < m) {
            System.out.print(arr1[i++] + " ");
        }

        while (j < n) {
            System.out.print(arr2[j++] + " ");
        }

        System.out.println();

        return 0;

    }

    static void Intersection(int[] arr1, int[] arr2, int m, int n) {
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (arr1[i] < arr2[j])
                i++;
            else if (arr2[j] < arr1[i])
                j++;
            else {
                System.out.print(arr2[j++] + " ");
                i++;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr1 = { 1, 2, 3, 4, 5 };
        int[] arr2 = { 3, 4, 5, 6, 7 };

        int m = arr1.length;
        int n = arr2.length;

        System.out.print("Union is ");
        printUnion(arr1, arr2, m, n);

        System.out.print("Intersection is ");
        Intersection(arr1, arr2, m, n);

    }
}
