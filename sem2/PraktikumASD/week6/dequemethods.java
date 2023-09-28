package PraktikumASD.week6;

import java.util.LinkedList;

public class dequemethods {
    private LinkedList<Integer> queue;

    public dequemethods() {
        queue = new LinkedList<>();
    }

    public void enqueueFront(int data) {
        queue.addFirst(data);
    }

    public void enqueueRear(int data) {
        queue.addLast(data);
    }

    public int dequeueFront() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return -1;
        }
        return queue.removeFirst();
    }

    public int dequeueRear() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return -1;
        }
        return queue.removeLast();
    }

    public boolean isEmpty() {
        return queue.isEmpty();
    }

    public static void main(String[] args) {
        dequemethods deque = new dequemethods();

        deque.enqueueFront(1);
        deque.enqueueRear(2);
        deque.enqueueFront(3);
        deque.enqueueRear(4);

        System.out.println(deque.dequeueFront()); // Output: 3
        System.out.println(deque.dequeueRear()); // Output: 4
        System.out.println(deque.dequeueFront()); // Output: 1
        System.out.println(deque.dequeueRear()); // Output: 2

        deque.dequeueFront(); // Queue is empty
        deque.dequeueRear(); // Queue is empty
    }
}
