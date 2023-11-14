package sem3.OS;

public class processObject {
    int queue; 
    int burstTime; 
    int priority; 

    public processObject(int queue, int burstTime, int priority){
        this.queue = queue;
        this.burstTime = burstTime;
        this.priority = priority;
    }
}
