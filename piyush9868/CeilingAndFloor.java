

public class CeilingAndFloor {
	public static void main(String[] args) {

		int[] arr1 = { 1, 2, 4, 5, 9, 11 };
		int[] arr2 = {11,9,5,4,2,1};
		int target = 3;
		System.out.println(Floor(arr2, target));

	}

	public static int Ceiling(int[] arr, int target) {

		int start = 0, end = arr.length - 1;

		boolean isAsc = (arr[0] - arr[arr.length - 1]) < 0;

		while (start <= end) {

			int mid = start + (end - start) / 2;

			if (arr[mid] == target)
				return arr[mid];

			if (isAsc) {
				if (target > arr[mid])
					start = mid + 1;
				else if (target < arr[mid])
					end = mid - 1;
			} else {
				if (target < arr[mid])
					start = mid + 1;
				else if (target > arr[mid])
					end = mid - 1;

			}

		}
		if (isAsc)
			return arr[start];
		else
			return arr[end];

	}

	public static int Floor(int[] arr, int target) {

		int start = 0, end = arr.length - 1;
		boolean isAsc = (arr[0] - arr[arr.length - 1]) < 0;

		while (start <= end) {

			int mid = start + (end - start) / 2;
			
			if (arr[mid] == target)
				return arr[mid];

			if (isAsc) {

				if (target > arr[mid])
					start = mid + 1;
				else if (target < arr[mid])
					end = mid - 1;
			} else {
				if (target < arr[mid])
					start = mid + 1;
				else if (target > arr[mid])
					end = mid - 1;
			}

			

		}
		if (isAsc)
			return arr[end];
		else
			return arr[start];

	}

}
