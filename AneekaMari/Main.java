public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	
		Link l1 = new Link("Nipu", 53.5);
		Link l2 = new Link("Aravind", 78.0);
		Link l3 = new Link("Prashan", 69.5);

		l2.next = l3;
		
		
	//	l1.next = l2.next;
	//	l2.next = l1;

		l2.next = l1;
		l1.next = l2.next;
		
		l1.next.displayDetails();

/*
		LinkList LL1 = new LinkList();

		LL1.insertFirst("Prashan", 69.5);
		LL1.insertFirst("Aravind", 78.0);
		LL1.insertFirst("Nipu", 53.5);
		LL1.insertFirst("Ravi", 99.0);
		LL1.insertFirst("Manju", 99.0);
		
	*/	
		
		

		//LL1.displayList();

	//	LL1.deleteLink("Manju");

	//	LL1.displayList();
		
		
	}

}
