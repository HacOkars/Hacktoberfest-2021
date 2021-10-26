import java.util.*;
class rotation{


public static void main(String[] args){
int n=12345;
int r=3;
int n1=n;
int r1=r;
int length=0;
while(n1!=0){
    n1=n1/10;
    length++;
}

  r=r%length;

  if(r<0){
      r=r+length;
  }
  int post=0;
  int pow=1;
   while(r>0){
       int rem=n%10;
       n=n/10;
       post=pow*rem+post;
       pow=pow*10;
       r--;
   }
   length=length-r1;

   while(length>0){
       post=post*10;
       length--;
   }

   post=post+n;
   System.out.print(post);
    }
}