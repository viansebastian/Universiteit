package sem3; 

import java.util.ArrayList;
import java.util.List;

public class checkPrime{
        public static void A(int start, int end, List<Integer> primes) {
        for (int n = start; n <= end; n++) {
            boolean isPrime = true;
            for (int prime : primes) {
                if (n % prime == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.add(n);
                System.out.println(n + " is a prime number.");
            }
        }
    }

    public static void main(String[] args) {
         List<Integer> primes = new ArrayList<>();
        primes.add(2);
        primes.add(3);

        A(4, 1000, primes);
    }
}