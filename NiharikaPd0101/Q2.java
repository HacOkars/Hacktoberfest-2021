1.	class man
{

	
	static class xyz
	{
		int data;
		xyz next;
	};

	
	static void fun1(xyz asd)
	{
		if (asd == null)
		{
			return;
		}

		fun1(asd.next);
		System.out.print(asd.data + " ");
	}

	
	static void fun2(xyz pqr)
	{
		if (pqr == null)
		{
			return;
		}
		System.out.print(pqr.data + " ");

		if (pqr.next != null)
		{
			fun2(pqr.next.next);
		}
		System.out.print(pqr.data + " ");
	}

	
	static xyz cv(xyz headref, int newdata)
	{
		
		xyz newnode = new xyz();

		
		newnode.data = newdata;

		
		newnode.next = (headref);

	
		(headref) = newnode;
		return headref;
	}

	
	public static void main(String[] args)
	{
		
		xyz toy = null;

		toy = cv(toy, 5);
		toy = cv(toy, 4);
		toy = cv(toy, 3);
		toy = cv(toy, 2);
		toy = cv(toy, 1);

		System.out.print("Output of fun1() for " +
						"list 1->2->3->4->5 \n");
		fun1(toy);

		System.out.print("\nOutput of fun2() for " +
						"list 1->2->3->4->5 \n");
		fun2(toy);
