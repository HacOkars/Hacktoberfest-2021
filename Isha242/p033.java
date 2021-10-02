public final class p033 implements EulerSolution {
	
	public static void main(String[] args) {
		System.out.println(new p033().run());
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
	}
	
}
