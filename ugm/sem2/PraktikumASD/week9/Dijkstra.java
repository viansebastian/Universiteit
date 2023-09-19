package PraktikumASD.week9;

public class Dijkstra {
    int nTown; 
    double [][] map; 
    double [] distance; 
    int source; 

    Dijkstra(double [][] map){
        this.map = map;
        nTown = map.length;
    }

    public void solve(int source, int destination){
        this.source = source;
        boolean [] selected = new boolean[nTown];
        distance = new double[nTown];

        for(int i = 0; i < nTown; i++){
            distance[i] = Double.MAX_VALUE; 
            selected[i] = false;
        }
        distance[source] = 0;

        while (true){
            int marked = minIndex(distance, selected); 

            if (marked < 0) return; 
            if (distance[marked] == Double.MAX_VALUE) return; 
            selected[marked] = true;
            if (marked == destination) return;

            for (int j = 0; j < nTown; j++){
                if (map[marked][j] > 0 && !selected[j]){
                    double newDistance = distance[marked] + map[marked][j];
                    if (newDistance < distance[j]) distance[j] = newDistance;
                }
            }
        }
    }

    private int minIndex(double[] distance, boolean[] selected){
        double dist = Double.MAX_VALUE;
        int index = -1; 

        for (int i = 0; i < nTown; i++){
            if (!selected[i] && distance[i] < dist){
                dist = distance[i];
                index = i;
            }
        }
        return index;
    }

    public double getDistance(int destination){
        return distance[destination];
    }
}
