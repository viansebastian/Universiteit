package PraktikumASD.week5;

public class TestRectangle {
    public static void main(String[] args){
        Rectangle R1 = new Rectangle(10, 15); 
        Rectangle R2 = new Rectangle(5, 7); 
        Rectangle R3 = new Rectangle(9);

        R1.setBottomLeft(0, 0);
        R2.setBottomLeft(3, 5);
        R3.setBottomLeft(10, 3);

        System.out.println(R1.getArea());
        System.out.println(R2.getArea());
        System.out.println(R3.getArea());
        System.out.println();

        System.out.println(R1.isLargerThan(R2));
        System.out.println(R1.isLargerThan(R3));
        System.out.println(R2.isLargerThan(R3));
        System.out.println();

        System.out.println(R1.isIntersectingWith(R2));
        System.out.println(R1.isIntersectingWith(R3));
        System.out.println(R2.isIntersectingWith(R3));             
    }
}
