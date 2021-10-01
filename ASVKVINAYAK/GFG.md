
## #100Days of Geekforgeeks

#  Day1

Date: 15/09/21

1 [Solved sort 0 1 and 2 ](https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1)

*** Solved it by Dutch national Problem method***
```bash 
  class Solution
{
    public static void sort012(int arr[], int n)
    {
        // code here 
        int low,high,current,temp;
   low = current = 0;
  high = n-1;
  while(current<=high){
 switch (arr[current]) 
 { 
 case 0:{
 temp = arr[low];
 arr[low] = arr[current];
 arr[current] = temp;
 low++;
 current++;
 break;
 }
 case 1:{
 current++;
 break;
 }
 case 2:{
     temp = arr[high];
 arr[high] = arr[current];
 arr[current] = temp;
 high--;
 break;
 }
 }
  }
}
}
```

#  Day2

Date: 16/09/21

2 [Solved N numbers  ](https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#)

*** Solved it in C++***
```bash 
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
   int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> p;
       for(int i=0;i<n;i++){
           p.push_back({start[i],end[i]});
       }
       sort(p.begin(),p.end());
       int count=0;
       int l=-1;
       
       for(auto i : p){
           if(i.first > l){
               count++;
               l=i.second;
           }
           else if(i.second < l){
               l=i.second;
           }
       }
       return count;
    }
};
```

#  Day3

Date: 17/09/21

3 [Solved Kth element in sorted array](https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1)

```bash 
class Solution {
    public long kthElement( int a1[], int a2[], int n, int m, int k) {
        List<Integer> r=new ArrayList<Integer>();
        int i,j,t=0;
        for(i=0;i<n;++i)
        {
            r.add(a1[i]);
        }
        for(j=0;j<m;++j)
        {
            r.add(a2[j]);
        }
        Collections.sort(r);
        t=r.get(k-1);
        return t;
    }
        
}
```
#  Day4

Date: 18/09/21

4 [Solved sum of query II](https://practice.geeksforgeeks.org/problems/sum-of-query-ii5310/1)

```bash 
class Solution{
    List<Integer> querySum(int n, int arr[], int q, int queries[])
    {
        // code here
        List<Integer> res=new ArrayList<Integer>();
        int s=0,i,j,k=0;
        for(i=0;i<2*q;i=i+2)
       {
           for(j=queries[i]-1;j<queries[i+1];j++)
           {
               s=s+arr[j];
           }
           res.add(s);
           s=0;
       }
        return res;
    }
    }
```

#  Day4

Date: 19/09/21

5 [Solved median of 2 sorted aarray](https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1)

```bash 
class GFG 
{ 
    static double medianOfArrays(int n, int m, int a[], int b[]) 
    {
        // Your Code Here
        List<Integer> r=new ArrayList<Integer>();
        int i,j,t=0,y=0,x=0;
        double e=0;
        for(i=0;i<n;++i)
        {
            r.add(a[i]);
        }
        for(j=0;j<m;++j)
        {
            r.add(b[j]);
        }
        Collections.sort(r);
        t=r.size();
        //System.out.println(t);
        if(t%2==0)
        {
            
            x=r.get((t/2)-1);
            y=r.get((t/2+1)-1);
            e=(double)(x+y)/2;
        }
        else
        {
             e=(double) r.get(((t+1)/2)-1);
        }
        return e;
    }
}
```


