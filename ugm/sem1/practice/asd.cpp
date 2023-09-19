#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//function to shuffle the contents of an array
void shuffle_array(int arr[], int n){
	unsigned seed = time(NULL);
	shuffle(arr, arr+n, default_random_engine(seed));
}

//function to copy the first n elements of array1 to array2 (10 points)
void copy_array(int arr1[], int arr2[], int n){
	/*WRITE THE CODE HERE*/
	for(int i=0; i<n; i++){
		arr2[i] = arr1[i];
	}
}

//function to display the bingo table
void display_table(int arr[], int arr_len){
	printf("| B | I | N | G | O |\n");
	for(int j= 0; j < arr_len / 5; j++){
		printf(" ");
		for(int k = 0; k < 5; k++){
			if(arr[5*j+k] == -1){
				printf (" -- ");
			}else{
				printf(" %2d ", arr[5*j+k]);
			}
		}
		printf("\n");
	}
}

//function for updating the bingo table (10 points)
void update_table(int num, int arr[], int arr_len){
	//check whether num is an element of the array
	//if yes, change the value of that element to -1
	/*WRITE THE CODE HERE*/
	for (int i = 0; i < num; i++){
		if (num == arr[i]){
			arr[i] = -1;
		}
	}
}

int main(){
	int a1[99];
	int a2[25] = {0}; //initial value of all a2's elements = 0
	
	//initialize a1 with integers 1-99
	for(int i=0; i<99; i++){
		a1[i] = i+1;
	}
	
	//shuffle the content of a1
	shuffle_array(a1, 99);
	
	//copy the first 25 elements of a1 to a2
	copy_array(a1, a2, 25);
	
	//display the 5x5 bingo table
	display_table(a2, 25);
	
	//shuffle the content of a1 again
	shuffle_array(a1, 99);
	
	//start the bingo game
	cout << "Let's play BINGO!\n";

	for(int i=0; i<99 ;i++){
		cout << "(Press Enter)\n";
		char ch = getc(stdin);
		cout << "Number that appears: " << a1[i] << endl; //munculkan angka di a1 dari index 0~99
		update_table(a1[i], a2, 25); //update the bingo table
		display_table(a2, 25); //print the bingo table
		

		//write code for the bingo logic here, bingo happens if:
		//5 horizontal numbers appeared (15 points)
			//if one row of the bingo table is fully "--", then the bingo breaks, and player wins
       

		//or 5 vertical numbers appeared (15 points)
			//if one column of the bingo table is fully "--", then the bingo breaks, and player wins
		
		//or 5 diagonal numbers appeared (15 points)
			/*one element of each row, where row 1 is either in the 0 or 4 index, and row 2
			will be either in index 1 or 3, and so on and so forth, is filled with "--", then the breaks
			and player wins. */

                 if (a2[0] == -1 && a2[1] == -1 && a2[2] == -1 && a2[3] == -1 && a2[4] == -1){
                cout << "you win" << endl;
                break; 
            }

			

		//print "you win" and the loop stops when bingo happens (10 points)
			//if bingo breaks, print you win!

		
		//you create this logic in a function outside of main() and call the function here (15 points)	
	}
	cout << "Game over" << endl;
	
	//add aditional features to this program (10 points)
	//explain the additional features in the form of comments in the program
	
	return 0;
}