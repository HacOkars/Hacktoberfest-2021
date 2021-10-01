public final class p002 implements EulerSolution {
	
	public static void main(String[] args) {
		System.out.println(new p002().run());
	}
	
	
	
	public String run() {
		int sum = 0;
		int x = 1;  // Represents the current Fibonacci number being processed
		int y = 2;  // Represents the next Fibonacci number in the sequence
		while (x <= 4000000) {
			if (x % 2 == 0)
				sum += x;
			int z = x + y;
			x = y;
			y = z;
		}
		return Integer.toString(sum);
	}
	
}
