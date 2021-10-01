/* A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros. 
For example, 101 and 1100 are deci-binary, while 112 and 3001 are not.
Given a string n that represents a positive decimal integer, return the minimum number of positive deci-binary numbers needed so that they sum up to n. */

class Solution {
    public int minPartitions(String n) {
        int max=0;
        for(int i=0;i<n.length();i++)
        {
            int a=Character.getNumericValue(n.charAt(i)); 
            if(a>max)
                max=a;
        }
        return max;
    }
}
