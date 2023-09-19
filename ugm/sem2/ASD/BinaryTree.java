package ASD; 
import java.util.ArrayList;

public class BinaryTree {
    public Node root; //determine root node
    public void addNode(Node node) {
        //if root is null, inputed node is the root
        //else node will be added 
        if(root == null) {
            root = node; 
        }
        else {
            insertNode(root, node);
        }
    }

    public void insertNode(Node parent, Node node){
        //check if parent > node, if yes, check left child. 
        // if left child == null, node = left child 
        // if left child != null, the leftchild = parent, and node will be the left child again

        if (parent.getValue() > node.getValue()){
            if (parent.leftChild == null) {
                parent.leftChild = node;
            } 
            else {
                insertNode(parent.leftChild, node);
            }
        }
        else {
            if (parent.rightChild == null) {
                parent.rightChild = node; 
            }
            else {
                insertNode(parent.rightChild, node);
            }
        }
    }

    public static boolean searchValue(Node root, int value){
        if (root == null) {
            return false;
        }
        else {
            if (root.getValue() == value) {
                return true;
            }
            else if (root.getValue() > value) {
                return searchValue(root.leftChild, value); 
            }
            else if (root.getValue() < value) {
                return searchValue(root.rightChild, value);
            }
        }
        return false;        
    }






}
