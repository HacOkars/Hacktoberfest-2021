package tree;

public class ConstructTreeFromTraversal {

	public static void main(String[] args) {
		int preorder[] = {10,20,40,50,30,70,80,90};
		int inorder[] = {40,20,50,10,30,80,70,90};
		Node root = buildTree(preorder,inorder,0,7);
		TreeTraversal.preorder(root);
	}
	static int preIndex = 0;
	private static Node buildTree(int[] preorder, int[] inorder, int is, int ie) {
		if(is>ie) return null;
		Node root = new Node(preorder[preIndex++]);
		int inIndex = 0;
		for(int i = is; i <= ie; i++) {
			if(inorder[i] == root.key) {
				inIndex = i;
				break;
			}
		}
		root.left = buildTree(preorder,inorder,is,inIndex-1);
		root.right = buildTree(preorder,inorder,inIndex+1,ie);
		
		return root;
		
	}

}
