package PraktikumASD.week1; 

public class hw1 {
    public static void main(String[] args) {
        for (int i = 1; i < 10; i++) {
            for (int j = 1; j <= 10; j++) {
                System.out.print(i + " * " + j + " = " + i*j + "  " );
                if (i*j < 10){System.out.print(" ");}
            }
            System.out.println();
        }
        System.out.println("10 * 10 = " + 10*10);
    }
}
