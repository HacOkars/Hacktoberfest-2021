/* Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0. 
*/

class Solution {
    public int reverse(int x) {
        long rev =0;
        while(x != 0)
        {
            rev = (rev*10) + (x%10);
            if(rev > Integer.MAX_VALUE) return 0;
            if(rev < Integer.MIN_VALUE) return 0;
            x = x/10;
        }
        return (int)rev;
        
    }
}
