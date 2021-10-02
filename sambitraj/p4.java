class Node { 
    int key; 
    Node left, right; 
   
    public Node(int data){ 
        key = data; 
        left = right = null; 
    } 
} 
class BST_class { 
    Node root; 
   
    BST_class(){ 
        root = null; 
    } 
    void inOrder(Node node)  { 
        if (node == null) 
            return; 
        inOrder(node.left); 
   
        System.out.print(node.key + " "); 
   
        inOrder(node.right); 
    } 
    void inOrder_traversal()
    { 
        inOrder(root);  
        } 
}
public class p4 {

	public static void main(String[] args) {
		 BST_class tree = new BST_class(); 
	        tree.root = new Node(45); 
	        tree.root.left = new Node(10); 
	        tree.root.right = new Node(90); 
	        tree.root.left.left = new Node(7); 
	        tree.root.left.right = new Node(12); 
	        tree.inOrder_traversal(); 
	}

}
