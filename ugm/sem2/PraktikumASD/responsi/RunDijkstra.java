package PraktikumASD.responsi;

import java.util.*;

public class RunDijkstra {
	static double[][] map;
	static int src;
	static int dst;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("masukkan jumlah node");
		int nTown = sc.nextInt(); //jumlah node
		map = new double[nTown][nTown];
		
		//inisialisasi nilai elemen adjacency matrix untuk graf pada soal
		//cukup menginputkan matrix segitiga atas saja (tanpa diagonal) dari keyboard
		System.out.println("masukkan adjacency matrix");
		for(int i=0; i<nTown; i++) {
			for(int j=i+1; j<nTown; j++) map[i][j] = map[j][i] = sc.nextDouble();
		}
						
		System.out.println("masukkan starting node");
		src = sc.nextInt();
		System.out.println("masukkan destination node");
		dst = sc.nextInt();
		
		Dijkstra dj = new Dijkstra(map);
		dj.solve(src,dst); //hitung jarak terpendek
		System.out.println(dj.getDistance(dst)); //print nilai jarak terpendek
		System.out.println(Arrays.toString(dj.getParentArray())); //print array parent
		dj.printRouteTo(dst); //print rute ke destination node
	}
}

