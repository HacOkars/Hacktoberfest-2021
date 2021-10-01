/* Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not. */

class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) return false;

        int a = x; 
        int b = 0; 
    
        while (a >= 10)
        {
            b *=10; 
            b += a%10; 
            a /=10; 
        }
    
        return b == x / 10 && a == x % 10;
        
    }
}
