package DSA;

import java.util.ArrayList;
import java.util.List;

public class SlidingWindowMAx {
    static int myFun(int a,int b,int c){
        int ans =0;
        if(a>b && a>c) ans =a;
        if(b>a && b>c) ans =b;
        if(c>a && c>b) ans =c;
        return ans;
    }
    public static void main(String[] args){
        int[] a = {3,4,5,1,7,9,4};
        int k=3;
        int[] aa = new int[a.length-2];

        for(int i=0;i<a.length;i++){
            if(a.length<k) System.out.println("Not acceptable");
            ArrayList<Integer> al = new ArrayList<>();
            if(i==a.length-k+1) break;
            for(int j=i;j<(i+k);j++){
                al.add(a[j]);
//                System.out.print(a[j]);
            }
            for(int j=i;j<k;j++){
                aa[i]=al.get(j);
                System.out.print(aa[j]);
            }
        }
//        for (int z:aa
//             ) {
//            System.out.print(z);
//        }

    }
}
