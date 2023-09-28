package PraktikumASD.week5;

public class TestCube {
    public static void main(String[] args){
        Cube C1 = new Cube(3); 
        Cube C2 = new Cube(9);
        Cube C3 = new Cube(2); 

        C1.setBottomLeft(0, 0, 0);
        C2.setBottomLeft(3, 5, 7);
        C3.setBottomLeft(1, 2, 3);

        System.out.println(C1.getSquareArea());
        System.out.println(C2.getSquareArea());
        System.out.println(C3.getSquareArea());
        System.out.println();

        System.out.println(C1.getVolume());
        System.out.println(C2.getVolume());
        System.out.println(C3.getVolume());
        System.out.println();

        System.out.println(C1.isLargerThan(C2));
        System.out.println(C1.isLargerThan(C3));
        System.out.println(C2.isLargerThan(C3));
        System.out.println();

        System.out.println(C1.isIntersectingWith(C2));
        System.out.println(C1.isIntersectingWith(C3));
        System.out.println(C2.isIntersectingWith(C3));
    }
}
