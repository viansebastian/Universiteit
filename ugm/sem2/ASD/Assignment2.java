package ASD;

public class Assignment2 {
    public static void main(String[] args){
        BinaryTree bt = new BinaryTree(); 

        bt.addNode(new Node(0));
        bt.addNode(new Node(2));
        bt.addNode(new Node(8));
        bt.addNode(new Node(5));
        bt.addNode(new Node(3));

        System.out.println(BinaryTree.searchValue(bt.root, 5));
    }
    
}
