public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n)
    {
   int y,c1=0;
  while(n!=0)
  {
   y=n & ~(n-1);
   n=n^y;
   ++c1;
   }
   return c1;
    }
}
