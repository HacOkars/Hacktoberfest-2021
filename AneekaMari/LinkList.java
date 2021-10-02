public class LinkList {
	
	
	private Link first;

	public LinkList(){

		first = null;

	}

	public boolean isEmpty(){

		if( first == null )
	
			return true;
	
	
		else
			return false;


	}


	public void displayList(){

	Link current = first;

	while( current != null)
	{
	current.displayDetails();
	current = current.next;


	}

	}


	public void insertFirst(String name, double average){

		Link nwLink = new Link(name, average);
	
		nwLink.next = first;
		first = nwLink;


	}


	public Link deleteFirst(){

		if(first != null )
		{
		Link temp = first;
		first = first.next;
		return temp;
	
		}
	
		else
		return null;
	}


	public Link deleteLink(String Name){

	
		Link current = first;
		Link previous = first;
	
		while( current.name != Name)
		{
	
			if(current.next == null)
		{
				return null;
		}
	
		previous = current;
		current = current.next;
	
	
		}
	
	
		if(current == first)
		{
	
			first= first.next;
	
		}
		else
			previous.next = current.next;
	
	
		return current;

	}
  

}

	
