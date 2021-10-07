package DSA;

public class QueueUsingArray{
    static class queue {
        int[] arr = new int[5];
        int rear =arr.length , front = arr.length-1;
        // add element in array
        void add(int  num) {
            rear -= 1;
            arr[rear] = num;
        }
        //remove front element
        void remove(){

            front-=1;
        }
        //peek front element
        int peek(){

            return  arr[front];
        }

    }
}
