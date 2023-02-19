class tree {
   
   static class Node{
    int data;
    Node left;
    Node right;
    Node(int data)
    {
        this.data = data;
        this.left= null;
        this.right = null;
    }
   }
   
    public static void main(String args[]) {
        Node root = new Node(4);
        root.left = new Node(3);
        root.right = new Node(5);
        System.out.println("left child " + (root.left.data));
        System.out.println("right child  " + (root.right.data));
        System.out.println("root data   " + root.data);
    }
}