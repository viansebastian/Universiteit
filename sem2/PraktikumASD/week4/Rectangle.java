package PraktikumASD.week4;

public class Rectangle {
    double width; 
    double height; 

    public double getArea(){
        return this.width * this.height; 
    }

    public boolean isLargerThan(Rectangle z){
        return this.width * this.height > z.getArea(); //basically (this.) refer to yang dibelakang '.'
    }
    
    Rectangle(double width, double height){
        this.width = width;
        this.height = height;
    }
}
