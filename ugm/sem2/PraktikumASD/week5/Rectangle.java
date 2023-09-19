package PraktikumASD.week5;

public class Rectangle {
    double width; 
    double length; 
    double x0; 
    double y0; 

    //constructor 1 
    Rectangle(double width, double length){
        this.width = width;
        this.length = length; 
    }

    //constructor 2 
    Rectangle(double size){
        this.width = size; 
        this.length = size; 
    }

    public void setBottomLeft(double x, double y){
        this.x0 = x; 
        this.y0 = y;
    }

    public double getArea(){
        return width*length; 
    }

    public boolean isLargerThan(Rectangle r){
        return this.width*this.length > r.getArea();
    }

    public boolean isIntersectingWith(Rectangle r){
        //case 1: bottom left of r is inside this rectangle
        if (this.x0 + this.length > r.x0 && this.y0 + this.width > r.y0){return true;}
        //case 2: bottom right of r is inside this rectangle
        else if (this.x0 + this.length > r.x0 + r.length && this.y0 + this.width > r.y0){return true;}
        //case 3: top left of r is inside this rectangle
        else if (this.x0 + this.length > r.x0 && this.y0 + this.y0 + this.width > r.y0 + r.width){return true;}
        //case 4: top right of r is inside this rectangle
        else if (this.x0 + this.length > r.x0 + r.length && this.y0 + this.width > r.y0 + r.width){return true;}
        else return false; 
    }
}
