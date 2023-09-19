package PraktikumASD.week5;

public class TestStudent {
    public static void main(String[] args){
    IStudentcard a = new IStudentcard();
    a.id = 1234; 
    a.name = "joe";
    a.nationality = "indonesian";

    a.printInfo();
    a.printInfo1(); 
    }
}
