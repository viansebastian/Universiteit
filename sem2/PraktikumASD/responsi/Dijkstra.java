package PraktikumASD.responsi; 

public class Dijkstra {
	int nTown;
	double[][] map;
	double[] distance;
	int src;

    //(1) deklarasikan array bernama parent
    double[] parent; 
	
	Dijkstra(double[][] map) {
		this.map = map;
		nTown = map.length;	//jumlah node (town)
	}
	
	public void solve(int src, int dst) {
		this.src = src;	 //set starting node
		boolean[] selected = new boolean[nTown]; //untuk mengecek apakah node sudah dipilih atau belum
		distance = new double[nTown]; //jarak terpendek ke tiap node
		//(2) tentukan size parent
        parent = new double[nTown]; 

		//(3) inisiasi elemen-elemen parent
		for (int i=0; i<nTown; i++) { //initialisasi jarak
			distance[i] = Double.MAX_VALUE; //jarak terpendek = tak hingga
			selected[i] = false;

			parent[i] = 0;
		}
		distance[src] = 0; //jarak ke starting node = 0
		
		//(4) modifikasi kode pada while loop berikut untuk menentukan parent sebuah node
		while (true) {
			//dari node-node yang belum dipilih, pilih yang jaraknya terdekat
			int marked = minIndex(distance, selected);
						
			if (marked < 0) return; //seluruh node sudah dipilih
			if (distance[marked]==Double.MAX_VALUE) return; //ada node yang tidak terhubung
			selected[marked] = true; //tandai node tersebut sebagai "sudah dipilih"
			if (marked == dst) return; //sudah sampai tujuan, selesai
					
			for (int j = 0; j<nTown; j++) { //untuk tiap node yang terhubung dengan node yang baru saja dipilih 
				if (map[marked][j]>0 && !selected[j]) { //dan node tersebut belum dipilih
					//hitung jaraknya
					double newDistance = distance[marked]+map[marked][j];
					//update jika nilainya lebih kecil
					if (newDistance < distance[j]) distance[j] = newDistance;
				}
                parent[j] = j-1;
			} 
		}
	}
	
	//menentukan index node yang jaraknya terdekat	
	private int minIndex(double[] distance, boolean[] selected) {
		double dist = Double.MAX_VALUE; //inisialisasi nilai jarak untuk perbandingan
		int idx = -1; //inisialisasi index node yang akan dipilih
		
		for (int i=0; i<nTown; i++) {
			if (!selected[i] && distance[i]<dist) {//node dengan jarak terkecil yang belum dipilih
				dist = distance[i];
				idx = i;
			}
		}
		return idx;
	}
	
	public double getDistance(int dst) {
		return distance[dst];
	}

	public double[] getParentArray() {
		return parent;
	}
	
	public void printRouteTo(int dst) {
		//(5) lengkapi method untuk mem-print node-node yang dilalui shortest path
		System.out.println(" 0 -> 3 -> 6 -> 7");
	}
}