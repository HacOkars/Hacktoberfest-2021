public final class p003 implements EulerSolution {
	
	public static void main(String[] args) {
		System.out.println(new p003().run());
	}
	
	
	
	public String run() {
		long n = 600851475143L;
		while (true) {
			long p = smallestFactor(n);
			if (p < n)
				n /= p;
			else
				return Long.toString(n);
		}
	}
	
	
	// Returns the smallest factor of n, which is in the range [2, n]. The result is always prime.
	private static long smallestFactor(long n) {
		if (n <= 1)
			throw new IllegalArgumentException();
		for (long i = 2, end = Library.sqrt(n); i <= end; i++) {
			if (n % i == 0)
				return i;
		}
		return n;  // n itself is prime
	}
	
}
