import java.util.ArrayList;

public class totalVowels {
    static ArrayList<Character> vol;
    totalVowels(){
        vol = new ArrayList<Character>();
        vol.add('a');vol.add('e');vol.add('i');vol.add('o');vol.add('u');
        vol.add('A');vol.add('E');vol.add('I');vol.add('O');vol.add('U');
    }
    private static boolean checkvowel(char c) {
        for(int i = 0 ; i < vol.size();i++){
            if(c==vol.get(i)){
                return true;
            }
        } 
        return false;       
    }
    public static void main(String[] args) {
        totalVowels obj = new totalVowels();
        String s = "Javatpoint is a great site for learning Java.";
        int v = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(checkvowel(s.charAt(i))){
                v++;
            }
        }
        System.out.println();
        System.out.println(s);
        System.out.println("total no of vowels are : "+v);
        
    }
}
