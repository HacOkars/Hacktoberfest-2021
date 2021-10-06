//Find the smallest letter greater than target.


public class smallest_target {
    
    public static void main(String[] args) {
        char[] arr = {'c', 'f', 'j', 'k', 'q', 's', 'x', 'z'};
        char target = 's';
        char ans = findChar(arr, target);
        System.out.println(ans);
    }
    static char findChar(char [] arr, char target)
    {
        int start = 0;
        int end = arr.length - 1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return arr[start % arr.length];
    }
}
