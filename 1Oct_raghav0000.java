Node SortedMerge(Node a, Node b)
{
Node result = null;
     
Node lastPtrRef = result;
     
while(1)
{
    if (a == null)
    {
    lastPtrRef = b;
    break;
    }
    else if (b==null)
    {
    lastPtrRef = a;
    break;
    }
    if(a.data <= b.data)
    {
    MoveNode(lastPtrRef, a);
    }
    else
    {
    MoveNode(lastPtrRef, b);
    }
     
    lastPtrRef = ((lastPtrRef).next);
}
return(result);
}
