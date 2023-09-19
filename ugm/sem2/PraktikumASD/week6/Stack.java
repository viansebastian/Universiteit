package PraktikumASD.week6;

import java.io.IOException;
import java.util.Scanner;
import java.util.Arrays;

class StackInit {
    private final int maxSize; 
    private int[] stackArray; 
    private int top; 

    public StackInit(int s){ 
        maxSize = s; 
        stackArray = new int[maxSize]; 
        top = -1; 
    }

    public void push(int j){
        stackArray[++top] = j;
    }

    public double pop(){
        return stackArray[top--];
    }

    public boolean isEmpty(){
        return (top == -1);
    }

    public void printStack(){
        System.out.println(Arrays.toString(stackArray));
    }


public class Stack {
    public static void main(String[] args) throws IOException{
        int stackSize;
        int stackNum; 
        Scanner in = new Scanner(System.in);
        
        System.out.println("How many integer? ");
        stackSize = in.nextInt();
        StackInit theStack = new StackInit(stackSize);

        for(int i = 0; i < stackSize; i++){
            System.out.println("Enter number: ");
            stackNum = in.nextInt(); 
            theStack.push(stackNum);
        }
        theStack.printStack();

        while (!theStack.isEmpty()){
            double value = theStack.pop();
            System.out.print(value);
            System.out.print("");
        }
        System.out.println("");
    }
}
}
