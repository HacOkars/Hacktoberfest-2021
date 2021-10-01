
public class EulerQ17 {
    public static void main(String[] args)
    {
    
    int numberOfLetters = 0;
    
    for (int number = 1; number < 1001; number++)
    numberOfLetters += CountLetters(number);
    
    System.out.println("Number of letters: " + numberOfLetters);
   
    }
    
    static int CountLetters (int number)
    {
    String[] units = new String[] { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    String[] units10 = new String[] { "", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    String[] tens = new String[] {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    
    if (number == 1000)
    return "onethousand".length();
    String numberString = "";
    int[] digits = new int[3];
    
    digits[0] = number / 100;
    digits[1] = (number / 10) % 10;
    digits[2] = number % 10;
    
    if (digits[0] > 0)
    {
    numberString += units[digits[0]] + "hundred";
    if (digits[1] != 0 || digits[2] != 0)
    numberString += "and";
    }
    
    if (digits[1] == 1)
    {
    if (digits[2] == 0)
    numberString += tens[digits[1]];
    else
    numberString += units10[digits[2]];
    }
    else
    numberString += tens[digits[1]] + units[digits[2]];
    
    return numberString.length();
    
    }    
}
