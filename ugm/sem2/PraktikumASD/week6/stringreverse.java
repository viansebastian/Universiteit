package PraktikumASD.week6;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class stringreverse{
    public static String reverseString(String input) {
        Stack<Character> stack = new Stack<>();
        Queue<Character> queue = new LinkedList<>();

        // inputting chars to stack and queue
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            stack.push(ch);
            queue.add(ch);
        }

        //reverse
        StringBuilder reversed = new StringBuilder();
        while (!stack.isEmpty()) {
            reversed.append(stack.pop());
        }
//         or
//         while (!queue.isEmpty()) {
//             reversed.append(queue.poll());
//         }

        return reversed.toString();
    }

    public static void main(String[] args) {
        String input = "REVELATION";
        String reversedString = reverseString(input);
        System.out.println("reversed string : " + reversedString);
    }
}

