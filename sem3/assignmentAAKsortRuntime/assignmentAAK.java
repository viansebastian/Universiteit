package sem3.assignmentAAKsortRuntime;

import java.text.DecimalFormat;
import java.util.Random;

public class assignmentAAK{
    public static void bubble_sort(int arr[], int n){
        for (int j = 0; j < n-1; j++){
            for (int i = 0; i < n-1-j; i++){
                if(arr[i] > arr[i+1]){
                    int t = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = t; 
                }
            }
        }
    
    }
    
    public static void selection_sort(int arr[], int n){
        for(int pos = 0; pos < n-1; pos++){
            //find min index
            int minIndex = pos; 
            int minValue = arr[pos];
            
            for (int i = pos +1; i < n; i++){
                if (arr[i] < minValue){
                    minValue = arr[i];
                    minIndex = i; 
                }
            }
            //swap 
            int t = arr[pos];
            arr[pos] = arr[minIndex];
            arr[minIndex] = t; 
        }
    }

    public static void main(String[] args) {
        Random rand = new Random();

        int nValues[] = {10000, 100000, 700000}; 

        for (int i = 0; i < nValues.length; i++) {
            int nTimes = nValues[i]; 
            int arr[] = new int[nTimes]; 

            for (int j = 0; j < nTimes; j++) {
                arr[j] = rand.nextInt(11);
            }

            DecimalFormat format = new DecimalFormat("0.0000");

            long bubbleStart = System.nanoTime();            
            bubble_sort(arr, nTimes);
            long bubbleEnd = System.nanoTime();
            double bubbleElapsed = (bubbleEnd - bubbleStart) / 1e6;
            System.out.println("bubble sort time: " + format.format(bubbleElapsed) + " ms");


            long selectionStart = System.nanoTime();
            selection_sort(arr, nTimes);
            long selectionEnd = System.nanoTime();
            double selectionElapsed = (selectionEnd - selectionStart) / 1e6;
            System.out.println("selection sort time: " + format.format(selectionElapsed) + " ms");

            System.out.println();
        }
    }
}
