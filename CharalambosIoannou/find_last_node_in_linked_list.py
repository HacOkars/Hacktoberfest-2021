def findSecondLastNode(head):
    temp = head
  
    # If the list is empty or
    # contains less than 2 nodes
    if (temp == None or temp.next == None):
        return -1
  
    # Traverse the linked list
    while (temp != None):
  
        # Check if the current node is the
        # second last node or not
        if (temp.next.next == None):
            return temp.data
            
        # If not then move to the next node
        temp = temp.next
