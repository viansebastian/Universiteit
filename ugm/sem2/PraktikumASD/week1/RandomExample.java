package PraktikumASD.week1; 

public class RandomExample {
    public static void main(String[] args){
        
        //math.random function
        System.out.println(Math.random());
        
        //random number 0-9 
        System.out.println("Random number 0-9:" + (int) (Math.random()*10)); 

        //random number 0-3
        System.out.println("Random number 0-3: " + (int) (Math.random()*4));

        /*the (int) is to convert the Math.random output from float to int 
        the *10 is because 0-9 has 10 "steps", its to determint the range.*/

        //random number 1-6
        System.out.println("Random number 1-6: " + (int) ((Math.random()*6) + 1));

        //random even number 2-8
        System.out.println("Random number 2-8: " + (int) ((Math.random()*4) + 1) * 2); /* range 0-3, + 1 = 1-4, * 2 */

        //random number (-5)-5
        System.out.println("Random number (-5)-5: " + (int) ((Math.random()*10)-5)); 
    }
}
