package PraktikumASD.week4;

public class testRectangle {
    public static void main(String[] args){
        Rectangle rect1 = new Rectangle(20, 25);
        System.out.println("rect 1 area: " + rect1.getArea());

        Rectangle rect2 = new Rectangle(25, 30);
        System.out.println("rect 2 area: " + rect2.getArea());  

        System.out.println(rect1.isLargerThan(rect2));
        System.out.println(rect2.isLargerThan(rect1)); 
    }
}
