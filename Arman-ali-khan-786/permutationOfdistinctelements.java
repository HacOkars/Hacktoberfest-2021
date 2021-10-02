public class permutationOfdistinctelements{
    public static void main(String args[]) {  
        int[] numbers = {2,3,4,8};  
        Permutations(numbers);
    }
    public static void Permutations(int[] array){  
        get(array, 0);  
    }  
    private static void get(int[] array, int pos){  
        if(pos >= array.length - 1){   
            System.out.print("[");  
            for(int i = 0; i < array.length - 1; i++){  
                System.out.print(array[i] + ", ");  
            }  
            if(array.length > 0)   
                System.out.print(array[array.length - 1]);  
            System.out.println("]");  
            return;  
        }  
  
        for(int i = pos; i < array.length; i++){   
          
            int t = array[pos];  
            array[pos] = array[i];  
            array[i] = t;  
  
            get(array, pos+1);  
  
            t = array[pos];  
            array[pos] = array[i];  
            array[i] = t;  
        }  
    }
}
