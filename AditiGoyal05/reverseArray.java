public class reverseArray {
	public static void main(String args[]) {
		int arr[] = new int[] {23,1,56,89,34,56,12,78};
		System.out.println("Original Array");
		for(int i=0; i<arr.length; i++) {
			System.out.print(arr[i]+" ");
		}
		System.out.println("\nArray after reversing: ");
		for(int i=arr.length-1; i>=0; i--) {
			System.out.print(arr[i]+" ");
		}
	}
}
