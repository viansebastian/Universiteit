package PraktikumASD.week6;

import java.util.Scanner;
import java.util.Arrays;
import java.util.NoSuchElementException;

class QeueuInit {
    private int maxSize; 
    private int[] qeueuArray;
    private int front; 
    private int rear; 
    private int nItems; 

    public QeueuInit(int s){
        maxSize = s; 
        qeueuArray = new int[maxSize];
        front = 0; 
        rear = -1; 
        nItems = 0; 
    }

    public void enqeueu(int j){
        if (rear == maxSize - 1){rear = -1;}
        qeueuArray[++rear] = j; 
        nItems++; 
    }

    public int dequeue(){
        int temp = qeueuArray[front++];
        if (front == maxSize){front = 0;}
        nItems--;
        return temp;
    }

    public boolean isEmpty(){
        return (nItems == 0);
    }

    public boolean isFull(){
        return (nItems == maxSize);
    }

    public void printQeueu(){
        System.out.println(Arrays.toString(qeueuArray));
    }

    public int dequeFront() {
        if (isEmpty()) {
            throw new NoSuchElementException("Queue is empty");
        }
        int temp = qeueuArray[front];
        front = (front + 1) % maxSize; // Move front circularly
        nItems--;
        return temp;
    }

    public int dequeRear() {
        if (isEmpty()) {
            throw new NoSuchElementException("Queue is empty");
        }
        int temp = qeueuArray[rear];
        rear = (rear - 1 + maxSize) % maxSize; // Move rear circularly
        nItems--;
        return temp;
    }


public class Qeueu {
    public static void main(String[] args) {
        int qeueuSize; 
        int numTemp; 
        int numChoice = 0; 

        Scanner in = new Scanner(System.in); 
        System.out.println("Enter qeueu size: ");
        qeueuSize = in.nextInt(); 

        QeueuInit theQeueue = new QeueuInit(qeueuSize);
        while (numChoice != 3){
            System.out.println("\n 1: Enqeueu \t 2: Deqeueu \t 3: End");
            numChoice = in.nextInt(); 
            if (numChoice == 1){
                if (theQeueue.isFull()){
                    System.out.println("Qeueu is full");
                }
                else { 
                    System.out.println("Enter number: ");
                    numTemp = in.nextInt();
                    theQeueue.enqeueu(numTemp);
                }
            }
            else if (numChoice == 2){
                if (theQeueue.isEmpty()){
                    System.out.println("Qeueu is empty");
                }
                else { 
                    numTemp = theQeueue.dequeue();
                    System.out.println("Dequeue number: " + numTemp);
                }
            }
            else if(numChoice == 3) {
                System.out.println("Wrong command");
            }
        }
    }
}
}