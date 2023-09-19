package PraktikumASD.week2;

public class TestMonster {
    public static void main(String[] args){
        //create instances of three monsters (m1, m2, m3) and initialize their fields
        Monster m1 = new Monster();
        m1.name = "Kratos"; 
        m1.hp = 1000; 
        m1.mp = 150; 
        m1.item = "Rage Potion";

        Monster m2 = new Monster();
        m2.name = "Ares"; 
        m2.hp = 300; 
        m2.mp = 750; 
        m2.item = "Great Sword";

        Monster m3 = new Monster();
        m3.name = "Zeus"; 
        m3.hp = 400; 
        m3.mp = 1000;
        m3.item = "Divine Thunder";

        //declare an array of monsters with type Monster and size = 3
        Monster[] monsters = new Monster[3];

        //initialize the array of monsters with m1, m2 and m3
        monsters[0] = m1; 
        monsters [1] = m2; 
        //monsters [2] = m3; 

        //print all monsters in the array
        for (int i = 0; i < monsters.length; i++){
            System.out.println("A monster has appeared! " + monsters[i].name + " HP:" + monsters[i].hp + " MP:" + monsters[i].mp + "Item dropped: " + monsters[i].item); 
        }
    
    }
}
