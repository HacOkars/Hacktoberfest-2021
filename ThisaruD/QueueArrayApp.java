
public class QueueArrayApp {

    public static void main(String[] args) {
        // TODO code application logic here
        QueueArray x = new QueueArray(5);
        x.display();
        x.Enqueue(2);
        x.Enqueue(8);
        x.Enqueue(3);
        x.display();
        try {
            x.Dequeue();
            x.display();
            x.Enqueue(23);
            x.Enqueue(45);
            x.Enqueue(59);
            x.Enqueue(44);
            x.display();
            x.Dequeue();
            x.Enqueue(89);
            x.display();
            System.out.println("Peek is " + x.peek());
        } catch (Exception e) {
            System.out.println(e.toString());
        }

    }

}

class QueueArray {

    private int maxSize;
    private int[] queArray;
    private int front;
    private int rear;
    private int nItems;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - // ...

    public QueueArray(int s) {
        this.queArray = new int[s];
        this.maxSize = s;
        this.front = 0;
        this.rear = -1;
        this.nItems = 0;
    }

    public boolean isEmpty() {
        return this.nItems == 0;
    }

    public boolean isFull() {
        return this.nItems == this.maxSize;
    }

    public int size() {
        return this.nItems;
    }

    public void Enqueue(int value) {
        if (isFull()) {
            System.out.println("Queue is full, can't enqueue");
            return;
        }

//if(this.rear==this.maxSize-1){
//this.rear=0;
//}else{
//this.rear++;
//}
        rear = (rear + 1) % maxSize;

        this.queArray[rear] = value;
        this.nItems++;
    }

    public int Dequeue() throws Exception {
        if (isEmpty()) {
            throw new Exception("The queue is empty cannot return");
        }

        int removedItem = this.queArray[this.front];

//   if(this.front==this.maxSize-1){
//   this.front=0;
//   }else{
//   front++;
//   }
//   
        front = (front + 1) % maxSize;

        this.nItems--;
        return removedItem;
    }

    public int peek() throws Exception {
        if (isEmpty()) {
            throw new Exception("The queue is empty cannot get peek value");
        }

        return this.queArray[this.front];
    }

    public void display() {

        if (isEmpty()) {
            System.out.println("Queue is empty nothing to print");
            return;
        }

        int i = this.front;
        while (i != rear) {
            System.out.print(this.queArray[i] + " ");
//            if (i == maxSize - 1) {
//                i = 0;
//            } else {
//                i++;
//            }
            i = (i + 1) % maxSize;
        }
        System.out.print(this.queArray[rear]);
        System.out.println();
    }

}
