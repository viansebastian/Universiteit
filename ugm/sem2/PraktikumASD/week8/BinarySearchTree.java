package PraktikumASD.week8;

import java.util.LinkedList;
import java.util.Queue;

public class BinarySearchTree {
    private BinarySearchNode root;

    //constructor
    BinarySearchTree(){
        root = null;
    }

    //method for inserting a data
    public void insert(Integer data){
        BinarySearchNode p = root; //start from the root
        BinarySearchNode parent = null; //parent of p, initially=null
        boolean isLeftChild = false; //true if p is the left child of parent

        // the p and parent are just arrows/ pointers to determine where to traverse 
        while (p != null){
            int result = data.compareTo(p.data);
            if (result == 0){ //data == p.data
                //data already in tree, return
                System.out.println(data + " already exist");
                return;
            } else if (result < 0){ //data < p.data

                //insert code here
                parent = p; 
                isLeftChild = true;
                p = p.left;

            } else { //data > p.data
                parent = p;
                isLeftChild = false;
                p = p.right;
            }
        }
        //create a new node under parent
        //determine whether it is left or right child based on isLeftChild
        BinarySearchNode newNode = new BinarySearchNode(data);
        if (parent == null){
            root = newNode;
        } else if (isLeftChild){
            parent.left = newNode;
        } else {
            parent.right = newNode;
        }
    }
    //method for searching a data
    public void search(Integer data){
        BinarySearchNode p = root; //start from the root
        while (p != null){
            int result = data.compareTo(p.data); //compare data and p.data
            if (result == 0){ //data == p.data
                //data found
                System.out.println(data + " is found");
                return;
            } else if (result < 0){ //data < p.data
                //proceed to the left child
                p = p.left;
            } else { //data > p.data
                //proceed to the right child
                //insert code here
                p = p.right;
            }
        }
        
    //data is not found
    System.out.println(data + "  is not found");
    }

    //method for deleting a data
    public void delete(Integer data){
        BinarySearchNode p = root; //start from the root
        BinarySearchNode parent = null; //parent of p, initially = null
        boolean isLeftChild = false; //true if p is the left child of parent
        while (p != null){
            int result = data.compareTo(p.data); //data == p.data
            if (result == 0){ //found the data
                if (p.left == null && p.right == null){ //p is an external node
                    if (parent== null) root = null;
                    else if (isLeftChild) parent.left = null;
                    else parent.right = null;
                } else if (p.left == null){ //p only has right subtree
                    //replace with the right child

                    //insert code here
                    if (parent == null) root = p.right;
                    else if (isLeftChild) parent.left = p.right;
                    else parent.right = p.right;
                    


                } else if (p.right == null){ //p only has left subtree
                    //replace with the left child

                    //insert code here
                    if (parent == null) root = p.left;
                    else if (isLeftChild) parent.left = p.left;
                    else parent.right = p.left;
                    

                } else { //p has both right and left subtrees
                    //find the smallest node from the right subtree
                    BinarySearchNode x = findMin(p);
                    //replace p with x
                    if (parent == null) root = x;
                    else if (isLeftChild) parent.left = x;
                    else parent.right = x;
                    x.right = p.right;
                    x.left = p.left;
                    p.right = null;
                    p.left = null;
                }
                //data has been succesfully deleted
                System.out.println(data + " has been deleted");
                break; 
            } else if (result < 0){ //data < p.data
                parent = p;
                isLeftChild = true;
                p = p.left;
            } else { //data > p.data
                parent = p;
                isLeftChild = false;
                p = p.right;
            }
        }
        //data is not found
        System.out.println(data + " is not found");
    }

    //method for finding the smallest node in the right
    private BinarySearchNode findMin(BinarySearchNode parent){
        BinarySearchNode p = parent.right;
        //traverse to the leftmost of this subtree to find the smallest node
        while (p.left != null){

            //insert code here
            p = p.left;


        }
        return p; //return the smallest node
    }

    public String toString(){ return inorder(root); }

    public void prettyPrint() {
        if (root == null) {
            System.out.println("Binary Search Tree is empty.");
            return;
        }
    
        Queue<BinarySearchNode> queue = new LinkedList<>();
        queue.offer(root);
    
        while (!queue.isEmpty()) {
            int levelSize = queue.size();
            for (int i = 0; i < levelSize; i++) {
                BinarySearchNode node = queue.poll();
                System.out.print(node.data + " ");
    
                if (node.left != null) {
                    queue.offer(node.left);
                }
    
                if (node.right != null) {
                    queue.offer(node.right);
                }
            }
            System.out.println();
        }
    }

    private String inorder(BinarySearchNode p){
        if (p == null) return "";
        return inorder(p.left) + " " + p.data + " " + inorder(p.right);
    }
}