package PraktikumASD.week4;

public class testpoint {
    public static void changePoint(int x, int y){
        System.out.println(++x); 
        System.out.println(--y);
    }

    public static void main(String[] args){
        point p1 = new point();
        p1.x = 10; 
        p1.y = 10; 
        changePoint(p1.x, p1.y);
    }
}
