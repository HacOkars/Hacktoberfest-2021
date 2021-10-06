public class TernaryOperatorExamples {

    public static void main(String []args) {
        System.out.println("==================================================================================");
        System.out.println("Bird is singing at 75 deg in winter: " + isBirdSinging(75, false));
        System.out.println("Bird is singing at 95 deg in Summer: " + isBirdSinging(95, true));
        System.out.println("Bird is singing at 95 deg in winter: " + isBirdSinging(95, false));
        System.out.println("==================================================================================");
        System.out.println("Is in order? " + isOrdered(95, 100, 105, false));
        System.out.println("Is in order? " + isOrdered(195, 100, 105, false));
        System.out.println("Is in order? " + isOrdered(95, 110, 105, false));
        System.out.println("Is in order? " + isOrdered(195, 100, 105, true));
        System.out.println("==================================================================================");
        System.out.println("Is multiple of 11 OR multiple of 11 plus 1? "+ isMultipleOf11OrPlus1(11));
        System.out.println("Is multiple of 11 OR multiple of 11 plus 1? "+ isMultipleOf11OrPlus1(12));
        System.out.println("Is multiple of 11 OR multiple of 11 plus 1? "+ isMultipleOf11OrPlus1(13));
        System.out.println("Is multiple of 11 OR multiple of 11 plus 1? "+ isMultipleOf11OrPlus1(23));
        System.out.println("==================================================================================");
        System.out.println(fizzWizzy(30));
        System.out.println(fizzWizzy(3));
        System.out.println(fizzWizzy(10));
        System.out.println(fizzWizzy(13));
        System.out.println(fizzWizzy(130));
        System.out.println("==================================================================================");
    }

    private static String fizzWizzy(int i) {
        if ((i%3==0) && (i%5==0))
            return "FizzWizzy!";
        else if (i%3==0)
            return "Fizz!";
        else if (i%5==0)
            return  "Wizzy!";
        else
            return i+"!";
    }

    private static boolean isMultipleOf11OrPlus1(int i) {
        int rem = i%11;
        return (rem == 0) || (rem == 1) ;
    }

    private static boolean isOrdered(int a, int b, int c, boolean itsOk) {
        return itsOk ? (c>b) : (b>a && c>b);
    }

    private static boolean isBirdSinging(int temp, boolean isSummer) {
        int minTemp = 60;
        int maxTemp = 90;
        if(isSummer){
            minTemp+=5;
            maxTemp+=5;
        }
        return (temp >= minTemp && temp <= maxTemp)? true : false;
    }
}