package PraktikumASD.week4;

public class modifiy {
    public static void methodA(int[] a){
        a[0]++; 
    }

    public static void main(String[] args){
        int[] b = new int[2];
        b[0] = 10; 
        b[1] = 10; 
        methodA(b);

        System.out.println(b[0]);
        System.out.println(b[1]);
    }
}
