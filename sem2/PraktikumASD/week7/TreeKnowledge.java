package PraktikumASD.week7; 

import java.util.*; 

public class TreeKnowledge{
    Scanner sc; 
    BinaryTreeNode root; 

    TreeKnowledge(Scanner sc){
        this.sc = sc;
        root = new BinaryTreeNode("Computer", null, null);
    }

    public boolean YorN(){
        while(true){
            String s = sc.next();
            if (s.startsWith("y")){return true;}
            else if (s.startsWith("n")){return false;}
        }
    }

    private static String getSpaces(int n){
        String s = ""; 
        for (int i = 0; i < n; i++){s += "";}
        return s;
    }

    public static String printer(BinaryTreeNode node){
        return printer(node);
    }

    public static String printer(int n, BinaryTreeNode node){
        if (node == null)
            return getSpaces(n) + "null";
        String s = ""; 
        s += printer(n + node.label.length(), node.right);
        s += getSpaces(n) + node.label + "\n";
        s += printer(n + node.label.length(), node.left);
        return s;
    }

    public void run(){
        boolean firstrun = true; 

        while(true){
            BinaryTreeNode x = root; 
            System.out.println("think abt an object! ");
            while(true){
                if (x.left == null && x.right == null){
                    System.out.println("Apakah benda tersebut " + x.label + "y/n");
                    if(YorN()) break; 

                    System.out.println("beritahu jawabannya");
                    String newItem = sc.next(); 

                    System.out.println("Masukkan pertanyaan yang jika dijawab Y adalah " + newItem + "dan jika dijawab N adalah " + x.label);
                    sc.nextLine(); 
                    String newQuestion = sc.nextLine();

                    BinaryTreeNode left = new BinaryTreeNode(newItem, null, null); 
                    BinaryTreeNode right = new BinaryTreeNode(x.label, null, null);

                    if (firstrun){
                        root = new BinaryTreeNode(newQuestion, left, right); 
                        firstrun = false;
                    }
                    else{
                        x.label = newQuestion; 
                        x.left = left;
                        x.right = right;
                    }
                    break;
                }
                System.out.println(x.label + " y/n");
                if (YorN()){x = x.left;}
                else x = x.right;
            }
            System.out.println("continue (y/n) ? ");
            if (!YorN()){break;}
        }
    }

    public static void main(String[] args) {
        TreeKnowledge tk = new TreeKnowledge(new Scanner(System.in));
        tk.run();
        // System.out.println(printer(tk.root));
    }
}