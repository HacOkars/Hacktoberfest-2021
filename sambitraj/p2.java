import java.util.Scanner;
class Node
{
	int data;
	Node next;
}
public class p2 {
	static Scanner z=new Scanner(System.in);
	public static void create(Node start) 
	{
		Node p=start;
		p.data=z.nextInt();
		p.next=null;
		start=p;
		System.out.print("Do you want more nodes(Y or N):");
		char ch=z.next().charAt(0);
		while(ch=='Y'||ch=='y')
		{
			Node q=new Node();
			q.data=z.nextInt();
			q.next=null;
			p.next=q;
			p=q;
			System.out.print("Do you want more nodes(Y or N):");
			ch=z.next().charAt(0);
		}
		
	}
	public static int count(Node start) 
	{
		int count=0;
		Node temp = start;
	    while(temp!=null)
		  {
			count++;
			temp=temp.next;
		  }
		  return count;
	}
	public static Node reverse(Node start)
	   {
		   if(count(start)>=2)
			{
				Node p=null,q=start,r=start.next;
				q.next=null;
				while(r!=null)
				{
					p=q;
					q=r;
					r=r.next;
					q.next=p;
				}
				start=q;
			}
		   return start;
	   }
	public static void fun(Node start)
	{
		 Node temp = start;
		if(temp == null)
		{
			return;
		}
		
		 while(temp.next!=null)
		  {
		    System.out.print(temp.data + " ");
			temp=temp.next.next;
		  }
		 System.out.print(temp.data + " ");
	}
	public static void display(Node start)
	{
		 Node temp = start;
		if(temp == null)
		{
			return;
		}
		System.out.print("linkedlist - ");
		 while(temp.next!=null)
		  {
		    System.out.print(temp.data + " ");
			temp=temp.next;
		  }
		 System.out.print(temp.data + " ");
		 System.out.println();
	}
    

	public static void main(String[] args) {
		Node start=new Node();
		System.out.println("Enter the values:");
        create(start);
        display(start);
        fun(start);
        start=reverse(start);
        fun(start);
        
	}

}
