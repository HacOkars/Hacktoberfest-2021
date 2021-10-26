import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class RegularExpressionsExamples {

    public static void main(String []args) {
        String S= "Samantha?10_2A";
        System.out.println(Pattern.matches("([a-zA-Z])([0-9a-zA-Z_]){7,29}", S));
        System.out.println(Pattern.matches("((?=.*\\d)(?=.*[A-Z])(?=.*[a-z])(?=.*[!@#$%^&*()_]).{6,})", S));
    }

    private static String getSubString(String data) {
        Pattern pattern = Pattern.compile("'(.*?)'");
        Matcher matcher = pattern.matcher(data);
        if (matcher.find())
        {
            return matcher.group(1);
        }
        return "NO MATCH FOUND";
    }

}