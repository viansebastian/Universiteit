package PraktikumASD.week6;

import java.util.Scanner;

public class TestLinkList {
    public static void main(String[] args) {
        LinkListInit theList1 = new LinkListInit(); 
        LinkListInit theList2 = new LinkListInit();

        //defining the size of the list 
        Scanner in = new Scanner(System.in); 
        int nodeNum1; 
        int nodeNum2; 
        int tempNum; 

        System.out.println("First list size: ");
        nodeNum1 = in.nextInt();

        //initializing and displaying the lists 
        for (int i=0; i<nodeNum1; i++){
            System.out.println("Insert number: ");
            tempNum = in.nextInt();
            theList1.insertLast(tempNum);
        }
        theList1.displayList();

        System.out.println("Second list size?: ");
        nodeNum2 = in.nextInt();

        //initializing and displaying the lists 
        for (int i=0; i<nodeNum2; i++){
            System.out.println("Insert number: ");
            tempNum = in.nextInt();
            theList2.insertLast(tempNum);
        }
        theList2.displayList();

        //deleting elements of the list 
        System.out.println("\nDeleting the first node of the first list: ");
        theList1.deleteFirst();
        theList1.displayList();

        System.out.println("\nDeleting the first node of the second list: ");
        theList2.deleteFirst();
        theList2.displayList();
    }
}
