package ASD;
import java.util.Map;
import java.util.Collections;
import java.util.HashMap;
 

public class GraphMap {
    public static void main(String[] args) {
        Map<String, Integer> nodeWeight = new HashMap<>();
        nodeWeight.put("JKT", 400);
        nodeWeight.put("TNG", 450);
        nodeWeight.put("BDG", 335);
        nodeWeight.put("TSK", 233);
        nodeWeight.put("SMG", 72);
        nodeWeight.put("STG", 45);
        nodeWeight.put("SLO", 25);
        nodeWeight.put("MDN", 65);
        nodeWeight.put("SBY", 177);
        nodeWeight.put("MLG", 175);
        nodeWeight.put("PBG", 222);
        nodeWeight.put("BWI", 499);

        for (String key : nodeWeight.keySet()) { // for every key in keySet (set of keys)
            int distanceFromJogja = nodeWeight.get(key); 
            System.out.println(key + ":" + distanceFromJogja);
        }

        String smallestKey = Collections.min(nodeWeight.keySet());
        String largestKey = Collections.max(nodeWeight.keySet());
        System.out.println();

    
    }
}
