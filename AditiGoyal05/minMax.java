public class minMax {
	public static void main(String args[]) {
		int arr[] = new int[] {23,1,56,89,34,56,12,78};
		System.out.println("Original Array");
		for(int i=0; i<arr.length; i++) {
			System.out.print(arr[i]+" ");
		}
		int min= arr[0],max = arr[0];
		for(int i=0; i<arr.length; i++) {
			if(arr[i]<min) {
				min=arr[i];
			}
			else if(arr[i]>min) {
				max=arr[i];
			}
		}
		System.out.println("\nLargest Number: "+max);
		System.out.println("Smallest Number: "+min);
	}
}
