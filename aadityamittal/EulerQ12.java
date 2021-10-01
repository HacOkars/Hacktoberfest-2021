public class EulerQ12 {
    static int num(int n)
    {
        int cnt = 0;
        for(int i = 1; i*i <= n; i++)
        {
            if(n%i == 0)
            {
                if(i != (n/i))
                {
                    cnt+=2;
                    continue;
                }
                cnt++;
            }
        }
        return cnt;
    }
    public static void main(String[] args) {
        int n = 1;
        int sum = 1;
        // System.out.println(num(28));
        while(num(sum)< 500)
        {
            n++;
            sum = n*(n+1)/2;

        }
        System.out.println(sum);
    }
}
