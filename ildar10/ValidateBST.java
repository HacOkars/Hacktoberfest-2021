public class ValidateBST {
    class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode() {}
        TreeNode(int val) { this.val = val; }
        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    public boolean isValidBST(TreeNode root) {
        if (root == null) return true;
        return visit(root.left, Long.MIN_VALUE, root.val) && visit(root.right, root.val, Long.MAX_VALUE);
    }

    private boolean visit(TreeNode node, long min, long max) {

        if (node == null) return true;
        if (node.val <= min || node.val >= max) return false;
        return visit(node.left, min, node.val) && visit(node.right, node.val, max);

    }
}
