package PraktikumASD.week4;


public class hw2 {

    //-----STUDENT FUNCTIONS-----//

    public static void printStudentInfo(Student s){
        System.out.println("name, age = " + s.name + ", " + s.age);
    }

    public static boolean isSameAge(Student s1,Student s2){
        return s1.age == s2.age;
    }
    public static Student getYoungestStudent(Student[] s){
        int minAge = s[0].age; 
        int minAgeIndex = 0;
        for(int i = 0; i < s.length; i++){
            if (s[i].age < minAge){
                minAge = s[i].age;
                minAgeIndex = i;
            }
        }
        return s[minAgeIndex];
    }

    public static void printStuObject(Student s){
        System.out.print(s.name + " (" + s.age + ").");
    }

    //-----RECTANGLE FUNCTIONS------// 

    public static double getRectangleArea(Rectangle z){
        return z.height * z.height; 
    }

    public static void getSquare(double d){
        double res = d*d;
        Rectangle r = new Rectangle(d, d);
        System.out.println("square reference: " + r);
        System.out.println("width: " + d);
        System.out.println("height: " + d);
        System.out.println("area: " + res);
    }

    public static void printRectObject(Rectangle z){
        System.out.print("width, heigth, area: ");
        System.out.print(z.width + ", " + z.height + ", ");
        System.out.print(z.getArea());
    }
 
    public static void main(String[] args){
        Student a = new Student("christen", 10);
        Student b = new Student("daz", 13);
        Student c = new Student("tim", 9);
        printStudentInfo(a);
        printStudentInfo(b);
        printStudentInfo(c);

        Student[] arr = {a, b, c};
        System.out.print("The youngest student is "); printStuObject(getYoungestStudent(arr));
        System.out.println();       

        Rectangle rectx = new Rectangle(20, 30);
        System.out.println("rectangle 1 area: " + getRectangleArea(rectx));
        getSquare(5); 


        
    

    }
}
