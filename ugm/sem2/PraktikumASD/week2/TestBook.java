package PraktikumASD.week2;

public class TestBook {
    public static void main(String[] args){
        String[] booktitles = {"Introduction to Java Programming", "Advanced Java Programming", "Practical Java Programming"};
        String[] authors = {"Daniel Liang", "Uttam Roy", "Perry Xiao"}; 
        double[] price = {355000, 236250, 95000}; 

        for(int i = 0; i < booktitles.length; i++){
            price[i] =  0.1 * price[i] + price[i]; 
            System.out.println("Title: " + booktitles[i]);
            System.out.println("Author: " + authors[i]);
            System.out.println("Price: " + price[i]);
            System.out.println(" "); 
        }

    }
}
