

public class NoDupArrayApp {

    
    public static void main(String[] args) {
        // TODO code application logic here
        
        NoDupArray x = new NoDupArray(6);
        x.insert(9);
        x.insert(7);
        x.insert(3);
        x.insert(8);
        x.display();
        x.insert(4);
        x.display();
        x.delete(7);
        x.display();
        x.insert(8);
        System.out.println(x.find(9)); 
        
        
    }

}

class NoDupArray {

    private long[] a;// ref to array
    private int nElements;  //number of data items

    public NoDupArray(int max) { //constructor
        this.a = new long[max];
        this.nElements = 0;
    }

    public boolean find(long SearchKey) {  //find specified value

        for (int i = 0; i < this.nElements; i++) {
            if (this.a[i] == SearchKey) {
                return true;
            }

        }
        return false;
    }

    public void insert(long value) { //put element into array

        if (this.a.length == this.nElements) {
            System.out.println("Array is full");
            return;
        }

        if (find(value)) {
            System.out.println("Value alredy exist");
        } else {
            a[this.nElements] = value;
            this.nElements++;
        }

    }

    public boolean delete(long value) { //delete the elementif it found

        for(int i=0;i<this.nElements;i++){
        if(this.a[i]==value){
            for(int j=i;j<this.nElements-1;j++){
               this.a[j]=this.a[j+1]; 
            }
            this.nElements--;
            System.out.println("value deleted");
            return true;
        }
        }
        System.out.println("Value not found for deletetion");
        return false;
        
    }

    public void display(){ // display array contents
        System.out.println("---------------values in the array-------------------");
        for(int i=0;i<this.nElements;i++){
            System.out.print(this.a[i]+" ");
        }
         System.out.println();
    }
   
    
}
