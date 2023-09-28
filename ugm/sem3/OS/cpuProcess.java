package ugm.sem3.OS;

import java.util.Scanner;

public class cpuProcess {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Number of Process");
        int processNum = scan.nextInt();

        processObject[] processes = new processObject[processNum];

        for (int i = 0; i < processNum; i++){
            int queue = i + 1;

            System.out.println("Enter Burst Time: ");
            int burstTime = scan.nextInt();

            System.out.println("Enter priority: ");
            int priority = scan.nextInt();

            processes[i] = new processObject(queue, burstTime, priority); 
        }
        scan.close(); 

        java.util.Arrays.sort(processes, (a, b) -> Float.compare(a.priority, b.priority));

        System.out.println("Sorted Processes:");
        int time = 0;
        int totalTime = 0; 
        for (processObject process : processes) { 
            // print time + priority
            System.out.println("time start: " + time + " : " + "Q" + process.queue + " (priority " + process.priority + ")");
            totalTime = totalTime + time; 
            time = time + process.burstTime;
        }

        System.out.println();
        System.out.println(totalTime);

        int avgWaitTime = (totalTime - processes[processNum-1].burstTime)/processNum;
        
        System.out.println("Average Wait Time: " + avgWaitTime + " ms");
    }
}
  
// WRONG LOOP
//time = time + process.burstTime;
//totalTime = totalTime + time; 
// Process 2 starts at time 0: time = 0, totalTime = 0. No waiting time.
// Process 5 starts at time 1 (time is updated to 1), and totalTime becomes 0 + 1 = 1, which represents the waiting time for Process 5.
// Process 1 starts at time 6 (time is updated to 6), and totalTime becomes 1 + 6 = 7, which represents the waiting time for Process 1.
// Process 3 starts at time 16 (time is updated to 16), and totalTime becomes 7 + 16 = 23, which represents the waiting time for Process 3.
// Process 4 starts at time 18 (time is updated to 18), and totalTime becomes 23 + 18 = 41, which represents the waiting time for Process 4.
// Finally, when you print totalTime, it shows the total waiting time, which is 41 (the sum of waiting times) + 19 (the sum of burst times) = 60.