package PraktikumASD.week9;

import java.util.*; 

public class RunDijkstra {
    static double[][] map; 
    static int src; 
    static int dst; 

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        System.out.println("how many nodes: ");
        int nTown = sc.nextInt(); 
        map = new double[nTown][nTown]; 

        for (int i = 0; i < nTown; i++) {
            for (int j = 0; j < nTown; j++) {
                System.out.println("Enter weight between node " + i + " and node " + j + ":");
                map[i][j] = sc.nextDouble();
            }
        }
        
        System.out.println("enter starting node");
        src = sc.nextInt(); 
        System.out.println("enter destination node");
        dst = sc.nextInt();
                
        Dijkstra  d = new Dijkstra(map);
        d.solve(src, dst);
        System.out.println(d.getDistance(dst));
    }
}
