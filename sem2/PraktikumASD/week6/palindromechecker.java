package PraktikumASD.week6;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class palindromechecker {
    public static boolean isPalindrome(String input) {
        Stack<Character> stack = new Stack<>();
        Queue<Character> queue = new LinkedList<>();

        // Remove whitespace and convert to lowercase
        input = input.replaceAll("\\s+", "").toLowerCase();

        // Add characters to stack and queue
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            stack.push(ch);
            queue.add(ch);
        }

        // Compare characters from stack and queue
        while (!stack.isEmpty()) {
            if (!stack.pop().equals(queue.poll())) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        String input = "TACOCAT";
        boolean isPalin = isPalindrome(input);

        if (isPalin) {
            System.out.println(input + " is a palindrome.");
        } else {
            System.out.println(input + " is not a palindrome.");
        }
    }
}

