

public final class p033 implements EulerSolution {
	
	public static void main(String[] args) {
		System.out.println(new p033().run());
public final class p028 implements EulerSolution {
	
	public static void main(String[] args) {
		System.out.println(new p028().run());
	}
	
	
	/* 

	 * Consider an arbitrary fraction n/d:
	 *   Let n = 10 * n1 + n0 be the numerator.
	 *   Let d = 10 * d1 + d0 be the denominator.
	 * As stated in the problem, we need 10 <= n < d < 100.
	 * We must disregard trivial simplifications where n0 = d0 = 0.
	 * 
	 * Now, a simplification with n0 = d0 is impossible because:
	 *   n1 / d1 = n / d = (10*n1 + n0) / (10*d1 + n0).
	 *   n1 * (10*d1 + n0) = d1 * (10*n1 + n0).
	 *   10*n1*d1 + n1*n0 = 10*d1*n1 + d1*n0.
	 *   n1*n0 = d1*n0.
	 *   n1 = d1.
	 *   This implies n = d, which contradicts the fact that n < d.
	 * Similarly, we cannot have a simplification with n1 = d1 for the same reason.
	 * 
	 * Therefore we only need to consider the cases where n0 = d1 or n1 = d0.
	 * In the first case, check that n1/d0 = n/d;
	 * in the second case, check that n0/d1 = n/d.
	 */
	public String run() {
		int numer = 1;
		int denom = 1;
		for (int d = 10; d < 100; d++) {
			for (int n = 10; n < d; n++) {
				int n0 = n % 10, n1 = n / 10;
				int d0 = d % 10, d1 = d / 10;
				if (n1 == d0 && n0 * d == n * d1 || n0 == d1 && n1 * d == n * d0) {
					numer *= n;
					denom *= d;
				}
			}
		}
		return Integer.toString(denom / Library.gcd(numer, denom));
	 /* From the diagram, let's observe the four corners of an n * n square (where n is odd).
	 * It's not hard to convince yourself that the top right corner always has the value n^2.
	 * Working counterclockwise (backwards), the top left corner has the value n^2 - (n - 1),
	 * the bottom left corner has the value n^2 - 2(n - 1), and the bottom right is n^2 - 3(n - 1).
	 * Putting it all together, this outermost ring contributes 4n^2 - 6(n - 1) to the final sum.
	 * 
	 * Incidentally, the closed form of this sum is (4m^3 + 3m^2 + 8m - 9) / 6, where m = size.
	 */
	private static final int SIZE = 1001;  // Must be odd
	
	public String run() {
		long sum = 1;  // Special case for size 1
		for (int n = 3; n <= SIZE; n += 2)
			sum += 4 * n * n - 6 * (n - 1);
		return Long.toString(sum);
	}
	
}
