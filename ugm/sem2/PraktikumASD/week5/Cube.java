package PraktikumASD.week5;


public class Cube extends Rectangle { 
    double r; 
    double z0; 
    Cube(double size){
        super(size);
        r = size; 
    }

    public void setBottomLeft(double x, double y, double z){
        super.setBottomLeft(x, y);
        this.z0 = z; 
    }

    public double getSquareArea(){
        return super.getArea()*6;
    }

    public double getVolume(){
        return super.getArea()*r; 
    }

    public boolean isLargerThan(Cube z){
        return this.getVolume() > z.getVolume();
    }

    public boolean isIntersectingWith(Cube a){
        super.isIntersectingWith(a); 
        //cube a is behind of this cube
        if (this.z0 > a.z0){return true;}
        //cube a is in front of this cube 
        else if (this.z0 > a.z0 - r){return true;}
        else return false; 

        // //case 1: bottom left of a is inside this cube, cube a is behind this cube 
        // if (this.x0 + this.length > a.x0 && this.y0 + this.width > a.y0 && this.z0 > a.z0){return true;}
        // //case 2: bottom left of a is inside this cube, cube a is in front this cube 
        // else if (this.x0 + this.length > a.x0 && this.y0 + this.width > a.y0 && this.z0 > a.z0 - r){return true;}
        // //case 3: bottom right of a is inside this cube, cube a is behind this cube 
        // else if (this.x0 + this.length > a.x0 + a.r && this.y0 + this.width > a.y0 && this.z0 > a.z0){return true;}
        // //case 4: bottom right of a is inside this cube, cube a is front this cube 
        // else if (this.x0 + this.length > a.x0 + a.r && this.y0 + this.width > a.y0 && this.z0 > a.z0 - r){return true;}
        // //case 5: top left of a is inside this cube, cube a is behind this cube 
        // else if (this.x0 + this.length > a.x0 && this.y0 + this.y0 + this.width > a.y0 + a.r && this.z0 > a.z0){return true;}
        // //case 6: top left of a is inside this cube, cube a is front this cube 
        // else if (this.x0 + this.length > a.x0 && this.y0 + this.y0 + this.width > a.y0 + a.r && this.z0 > a.z0 - r){return true;}
        // //case 7: top right of a is inside this cube, cube a is behind this cube 
        // else if (this.x0 + this.length > a.x0 + a.r && this.y0 + this.width > a.y0 + a.r && this.z0 > a.z0){return true;}
        // //case 8: top right of a is inside this cube, cube a is front this cube 
        // else if (this.x0 + this.length > a.x0 + a.r && this.y0 + this.width > a.y0 + a.r && this.z0 > a.z0 - r){return true;}
    }
}



