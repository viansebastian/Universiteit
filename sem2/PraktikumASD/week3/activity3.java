package PraktikumASD.week3;

public class activity3 {
    public static int factorial(int n){
        if (n > 0){
            return n * factorial(n-1); 
        }
        else return 1; 
    }

    public static int randomNumber(){
        int number = (int) (Math.random()*100); 
        return number; 
    }

    public static boolean evenNumber(int n) {
        return n%2 == 0; 
        // if(n%2 == 0) return true;
        // else return false;
    }

    public static double minValue(double a, double b){
        return a < b ? a : b; 

        // double result; 
        // if (a > b){
        //     result = b; 
        //     return result; 
        // }
        // else return a; 
    }

    public static String randomMessage(String name){
        int message = (int) (Math.random()*3); 
        if(message == 0){
            return "Good Morning " + name; 
        }
        else if (message == 1){
            return "Good Afternoon " + name;
        }
        else {
            return "Good Night " + name;
        }
    }

    public static String weatherForecast(){
        int day = (int) (Math.random()*3);
        String when; 
        if (day == 0){
            when = "today is "; 
        }
        else if (day == 1){
            when =  "tomorrow will be "; 
        }
        else {
            when = "after tomorrow will be ";
        }

        int weather = (int) (Math.random()*4); 
        if (weather == 0){
            return when + "sunny."; 
        }
        else if (weather == 1){
            return when + "cloudy."; 
        }
        else if (weather == 2){
            return when + "rainy."; 
        }
        else {
            return when + "snowy."; 
        }
    }

    public static boolean sameAbsoluteValue(int i, int j){
        return Math.abs(i) == Math.abs(j);
    }

    public static double getSum(double a, double b, double c){
        return (a + b + c); 
    }

    public static double getAverage(double a, double b, double c){
        return ((a + b + c)/3); 
    }

    public static void getMessage(String name, boolean isKid){
        if (isKid == true) {System.out.println("Halo dek " + name);}
        else {System.out.println("Halo pak " + name);}
    }

    public static void main (String[] args){
       System.out.println(factorial(5));
       System.out.println(randomNumber());
       System.out.println(evenNumber(7)); 
       System.out.println(minValue(4, 3));
       System.out.println(randomMessage("kimi"));
       System.out.println(weatherForecast());
       System.out.println(sameAbsoluteValue(6, -4));
       System.out.println(getSum(4, 6, 18));
       System.out.println(getAverage(3, 4, 5));
       getMessage("fariz", false);
    }
}