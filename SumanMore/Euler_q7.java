//What is the 10 001st prime number?
package code;
public class q7 {
static boolean isprime(int i) 
{
for(int j=3;j<=Math.sqrt(i);j+=2)
{
if(i%j==0)
return false;
}
return true;

}
public static void main(String args[]) {
int n=2;
int t=3;
int p=3;
while(n<=10001) {
if(isprime(t))
n++;
p=t;
t+=2;
}
System.out.println(p);
}
}

//output:
//104743
