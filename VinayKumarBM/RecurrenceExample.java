public class RecurrenceExample {

    public static void main(String []args) {
        System.out.println("With Recurrence: "+toAllDollars("Vinay"));
        System.out.println("Without Recurrence: "+toAllDollars1("Vinay"));
        System.out.println("With Recurrence: "+toAllDollars("Vineeth"));
        System.out.println("Without Recurrence: "+toAllDollars1("Vineeth"));
        System.out.println("With Recurrence: "+toAllDollars("J"));
        System.out.println("Without Recurrence: "+toAllDollars1("J"));
    }

    public static String toAllDollars(String str){
        if(str.length() < 1){
            return str;
        }
        return str.toUpperCase().charAt(0)+"$"+ toAllDollars(str.toUpperCase().substring(1));
    }

    public static String toAllDollars1(String str){
        str = str.toUpperCase();
        StringBuilder sb = new StringBuilder();
        for(int i=0; i<str.length(); i++){
            sb.append(str.charAt(i)).append("$");
        }
        return sb.toString();
    }
}