package DSA;

public class StackUsingArray{

    static public class Stack{
        //
        int[] arr = new int[5];
        int top = -1;
        //push element in Stack
        void push(int num) {
            top=top+1;
            arr[top] = num;
        }
        //peek the top element
        Integer peek(){

            return arr[top];
        }
        //remove top element
        Integer pop(){
            int temp = top;
            top = top -1;
            return arr[temp];
        }
        //returns size of array
        Integer size(){

            return top;
        }
        //returns true or false if array is empty
        Boolean isEmpty(){
            return top == -1;

        }
        //get number at index
        int get(int num){

            return arr[num];
        }


    }

}
