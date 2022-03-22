#include <iostream>		//for array output
#include <ctime>		//for time()d
#include <cstdlib>		//for srand() and rand()

//swap 2 elements in memory
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void SelectionSort(int* v, int len) {
	for (int i = 0; i < len; i++) {
		int min_ind = i;
		
		//find smallest element in array to the right of the first element
		for (int j = i + 1; j < len; j++) {
			if (v[j] < v[min_ind]) {
				min_ind = j;
			}
		}

		//swap min element with first element
		if (min_ind != i) {
			swap(v[min_ind], v[i]);
		}

		//--> do the same for the subarray to the right
	}
}

int main() {
	//creating random array
	int arr[10];

	srand((unsigned int)time(0));

	//insert random elements
	for (int i = 0; i < 10; i++) {
		arr[i] = (rand() % 100) + 1;
	}

	//print initial array
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	//Sort the array
	SelectionSort(arr, 10);

	//print sorted arr
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
