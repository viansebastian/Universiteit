package PraktikumASD.week5;

public class Point {
    int x; 
    int y; 

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    //METHOD OVERLOAD = depending on the parameters, different functions with the same name can be called. 
    public void changePoint(){
        this.x++;
        this.y--;
    }

    public void changePoint(int x, int y){
        this.x = x;
        this.y = y;
    }

    public void changePoint(Point p){                                                                                                           
        this.x = p.x;
        this.y = p.y;
    }
}
