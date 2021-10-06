public class StarKill {

    public static void main(String []args) {
        System.out.println(killStars("*asa***c"));
        System.out.println(killStars("a*b*cd"));
        System.out.println(killStars("a*b**cdasdasd"));
        System.out.println(killStars("a*b**cd*"));
        System.out.println(killStars("wqwqeqa*b**cd*"));
        System.out.println(killStars("***aas*b**cd*"));
    }

    private static String killStars(String str) {
        int length = str.length();
        StringBuilder sb = new StringBuilder();
        for(int i=0; i< length; i++){
            if (i+1 != length ) {
                if (str.charAt(i) != '*' && str.charAt(i + 1) != '*') {
                    if (i > 0 && str.charAt(i - 1) != '*') {
                        sb.append(str.charAt(i));
                    } else if (i == 0) {
                        sb.append(str.charAt(i));
                    }
                }
            } else {
                if (str.charAt(i - 1) != '*' && str.charAt(i) != '*') {
                    sb.append(str.charAt(i));
                }
            }
        }
        return sb.toString();
    }
}