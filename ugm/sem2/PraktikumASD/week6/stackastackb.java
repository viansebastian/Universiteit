package PraktikumASD.week6; 

public class stackastackb {
    private int[] arr;
    private int topA; // Indeks top stackA
    private int topB; // Indeks top stackB

    public stackastackb(int capacity) {
        arr = new int[capacity];
        topA = -1;
        topB = capacity;
    }

    public void pushA(int data) {
        if (topA + 1 == topB) {
            System.out.println("Stack A overflow");
            return;
        }
        arr[++topA] = data;
    }

    public void pushB(int data) {
        if (topB - 1 == topA) {
            System.out.println("Stack B overflow");
            return;
        }
        arr[--topB] = data;
    }

    public int popA() {
        if (topA == -1) {
            System.out.println("Stack A underflow");
            return -1;
        }
        return arr[topA--];
    }

    public int popB() {
        if (topB == arr.length) {
            System.out.println("Stack B underflow");
            return -1;
        }
        return arr[topB++];
    }

    public static void main(String[] args) {
        stackastackb stack = new stackastackb(5);

        stack.pushA(1);
        stack.pushA(2);
        stack.pushB(10);
        stack.pushB(20);

        System.out.println(stack.popA()); // Output: 2
        System.out.println(stack.popB()); // Output: 20
        System.out.println(stack.popA()); // Output: 1
        System.out.println(stack.popB()); // Output: 10

        stack.popA(); // Stack A underflow
        stack.popB(); // Stack B underflow
    }
}