package DSA;
import java.util.*;
public class HackerRank2{
        public static void main(String[] args) {
            /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            ArrayList[]set = new ArrayList[n];
            for(int i=0;i<n;i++){
                int d = sc.nextInt();
                set[i]= new ArrayList();
                for(int j=0;j<d;j++){
                    set[i].add(sc.nextInt());
                }
            }
            int q = sc.nextInt();

            for(int i=0;i<q;i++){
                int x = sc.nextInt();
                int y = sc.nextInt();
                try{
                    System.out.println(set[x-1].get(y-1));
                }
                catch(Exception e){
                    System.out.println("ERROR!");
                }
            }
        }
    }

