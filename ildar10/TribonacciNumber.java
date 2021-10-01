public class TribonacciNumber {
    public int tribonacci(int n) {
        if (n <= 0) return 0;
        if (n == 1 || n == 2) return 1;

        int current = 0;
        int x1 = 0;
        int x2 = 1;
        int x3 = 1;
        int i = 3;
        while (n >= i) {
            current = x1 + x2 + x3;
            i++;
            x1 = x2;
            x2 = x3;
            x3 = current;
        }
        return current;
    }
}
