package PraktikumASD.week4;

import java.util.Arrays;

public class hw1 {
    public static double getSum(double[] a){
        double sum = 0; 
        for (int i = 0; i < a.length; i++){
            sum += a[i];
        }
        return sum; 
    }

    public static double getAverage(double[] a){
        return getSum(a)/a.length;
    }

    public static int getValueOfLastElement(int[] a){
        return a[a.length-1];
    }

    public static int getMinValue(int[] a){
        int min = a[0];
        for(int i=1; i<a.length-1; i++){
            if (a[i + 1] < min){
                min = a[i + 1];
            }
        }
        return min; 
    }

    public static int getMaxValue(int[] a){
        int max = a[0];
        for (int i=1; i<a.length-1; i++){
            if (a[i + 1] > max){
                max = a[i + 1];
            }
        }
        return max; 
    }

    public static int[] getMinMaxValues(int[] a){
        int[] b = {getMinValue(a), getMaxValue(a)};
        return b; 
    }

    public String getLongestString(String[] a){
        int strId = 0; 
        int str = 0; 

        for (int i = 0; i < a.length; i++){
            if (a[i].length() > str){
                str = a[i].length(); 
                strId = i;
            }
        } 
        return a[strId];        
    }

    public static int[] getInversedArray(int[] a){
        int[] b = new int[a.length];
        b[0] = a[a.length - 1]; 

        for (int i = 0; i < a.length; i++){
            b[i] = a[a.length - 1 - i];
        }
        return b; 
    }

    public static void main(String[] args){
        double[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        int[] ar = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        
        System.out.println(getSum(arr));
        System.out.println(getAverage(arr));
        System.out.println(getValueOfLastElement(ar));
        System.out.println(getMinValue(ar));
        System.out.println(getMaxValue(ar));
        System.out.println(Arrays.toString(getMinMaxValues(ar)));
        System.out.println(Arrays.toString(getInversedArray(ar)));
    }
 }
