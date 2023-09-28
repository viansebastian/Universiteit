package PraktikumASD.week2;

public class TestRectangle {
    public static void main(String[] args){

        Rectangle[] rectangles = new Rectangle[10]; 

        for(int i = 0; i < 10; i++){
            //every iteration makes a new instance with the name "rect"
            //in this array slot the object receives a width, height, and area value 
            //this "rect" instance is then assigned to the current array slot 
            Rectangle rect = new Rectangle();
            rect.width = Math.random(); 
            rect.height = Math.random();
            rect.area = rect.width * rect.height; 
            rectangles[i] = rect;
        }

        for(int i = 0; i < 10; i++) {
            System.out.println("rect" + i);
            System.out.println("width: " + rectangles[i].width); 
            System.out.println("height: " + rectangles[i].height);
            System.out.println("area: " + rectangles[i].area); 
            System.out.println(); 
        }

        double maxArea = rectangles[0].area; 
        double minArea = maxArea; 
        for(int i = 0; i < 9; i++) {
            if (rectangles[i + 1].area > maxArea){
                maxArea = rectangles[i + 1].area;
             }
            else if (rectangles[i + 1].area < minArea){
                minArea = rectangles[i + 1].area;
             }
        }  
        System.out.println("max area: " + maxArea);
        System.out.println("min area: " + minArea);

        for (int i = 1; i < 2; i++){/*BRUTE FORCE METHOD */
        // Rectangle rect0 = new Rectangle(); 
        // rect0.width = Math.random();
        // rect0.height = Math.random();
        // rect0.area = rect0.width * rect0.height; 

        // Rectangle rect1 = new Rectangle();
        // rect1.width = Math.random();
        // rect1.height = Math.random();
        // rect1.area = rect1.width * rect1.height;

        // Rectangle rect2 = new Rectangle();
        // rect2.width = Math.random();
        // rect2.height = Math.random();
        // rect2.area = rect2.width * rect2.height;

        // Rectangle rect3 = new Rectangle();
        // rect3.width = Math.random();
        // rect3.height = Math.random();
        // rect3.area = rect3.width * rect3.height;

        // Rectangle rect4 = new Rectangle();
        // rect4.width = Math.random();
        // rect4.height = Math.random();
        // rect4.area = rect4.width * rect4.height;

        // Rectangle rect5 = new Rectangle();
        // rect5.width = Math.random();
        // rect5.height = Math.random();
        // rect5.area = rect5.width * rect5.height;

        // Rectangle rect6 = new Rectangle();
        // rect6.width = Math.random();
        // rect6.height = Math.random();
        // rect6.area = rect6.width * rect6.height;

        // Rectangle rect7 = new Rectangle();
        // rect7.width = Math.random();
        // rect7.height = Math.random();
        // rect7.area = rect7.width * rect7.height;

        // Rectangle rect8 = new Rectangle();
        // rect8.width = Math.random();
        // rect8.height = Math.random();
        // rect8.area = rect8.width * rect8.height;

        // Rectangle rect9 = new Rectangle();
        // rect9.width = Math.random();
        // rect9.height = Math.random();
        // rect9.area = rect9.width * rect9.height;

        // rectangles[0] = rect0;
        // rectangles[1] = rect1;
        // rectangles[2] = rect2;
        // rectangles[3] = rect3;
        // rectangles[4] = rect4;
        // rectangles[5] = rect5;
        // rectangles[6] = rect6;
        // rectangles[7] = rect7;
        // rectangles[8] = rect8;
        // rectangles[9] = rect9;}
        }
    }
}
