



public class OrdArrayApp {

   
    public static void main(String[] args) {
        // TODO code application logic here

        OrdArray x = new OrdArray(7);
        x.insert(89);
        x.insert(98);
        x.insert(7);
        x.insert(3);
        x.display();
        x.insert(1);
        x.insert(7);
        x.insert(6);
         x.display();
      

    }
}

class OrdArray {

    private long[] a; // ref to array a
    private int nElements; //number of data items

    public OrdArray(int max) {

        this.a = new long[max];
        this.nElements = 0;
    }

    public int size() { // return max size of the array

        return this.a.length;
    }

    public int find(long searchKey) {

        for (int i = 0; i < this.nElements; i++) {
            if (searchKey == this.a[i]) {
                return i;
            }
        }
        return -1;

    }

    public void insert(long value) {
// put element into arrray

        if (size() == this.nElements) {
            System.out.println("Array is full.");
            return;
        }

        for (int i = 0; i < this.nElements; i++) {
            if (a[i] > value) {
                for (int j = this.nElements-1; j >= i; j--) {
                    a[j+1] = a[j];

                }
                this.a[i] = value;
                this.nElements++;
                return;
            }
        }
        a[this.nElements] = value;
        this.nElements++;

    }

    public boolean delete(long value) {

        int index = find(value);

        if (index == -1) {
            System.out.println("Value not found");
            return false;
        } else {
            
           // while(value!=)
            
            
           for (int i = index; i < this.nElements - 1; i++) {
                a[i] = a[i + 1];
           }
            this.nElements--;
            return true;
        }
    }

    void display() { // display array contents

        System.out.println("------Value of the array-------");
        for (int i = 0; i < this.nElements; i++) {
            System.out.print(this.a[i] + " ");
        }
        System.out.println();
    }
}
