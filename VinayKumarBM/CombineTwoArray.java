import java.util.*;

public class CombineTwoArray {

    public static void main(String[] args) {
        String[] arr1 = {"A","B","M","C","D","E"};
        String[] arr2 = {"K","X","Y","Z","D","E"};

        List<String> lst1 = new ArrayList<>(Arrays.asList(arr1));
        List<String> lst2 = (Arrays.asList(arr2));

        lst1.addAll(lst2);
        System.out.println(lst1);

        Set<String> set = new TreeSet<>();
        set.addAll(lst1);
        System.out.println(set);

        Object[] arr = set.toArray();
        System.out.println(Arrays.toString(arr));

        lst1.clear();
        lst1.addAll(set);
        int index = Collections.binarySearch(lst1, "C");
        System.out.println("Found at position: "+(index+1));
        Collections.reverse(lst1);
        System.out.println(lst1);
    }
}