import java.util.Arrays;
import java.util.Scanner;

public class checkStringsAnagram {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        System.out.println("Enter string 1 : ");
        String n1 = sc.nextLine();
        System.out.println("Enter string 2 : ");
        String n2 = sc.nextLine();
        boolean res = checkAnagram(n1,n2);
        if(res){
            System.out.println(n1+" and "+n2+" are Anagrams.");
        }
        else{
            System.out.println(n1+" and "+n2+" are not Anagrams.");
        }

    }
    private static boolean checkAnagram(String n1, String n2) {
        String s1 = n1.replaceAll(" ", "");
        String s2 = n2.replaceAll(" ", "");
        if(s1.length()!=s2.length()){
            return false;
        }
        else{
            char[] a = s1.toLowerCase().toCharArray();
            char[] b = s2.toLowerCase().toCharArray();
            Arrays.sort(a);
            Arrays.sort(b);
            return Arrays.equals(a, b);
        }
    }
}
