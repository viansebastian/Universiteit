package PraktikumASD.week8;

public class TestBinarySearchTree {
    public static void main(String[] args){
        //create a BST
        BinarySearchTree bst = new BinarySearchTree();
        bst.insert(5);
        bst.insert(3);
        bst.insert(8);
        bst.insert(2);
        bst.insert(4);
        bst.insert(6);
        bst.insert(7);
        System.out.println(bst);

        //search data from the BST
        bst.search(2);
        bst.search(9);

        //delete data from the BST
        bst.delete(8);
        System.out.println(bst);
        bst.delete(6);
        System.out.println(bst);
        bst.delete(7);
        System.out.println(bst);
        bst.delete(2);
        System.out.println(bst); 

        bst.prettyPrint();
    }
}
