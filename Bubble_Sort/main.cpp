#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void BubbleSort(int *v, int size){
	bool sorted = false;

	if (size <= 1) {
		return;
	}
	
	while (!sorted) {
		sorted = true;

		for (int i = 0; i < size - 1; i++) {
			if (v[i] > v[i + 1]) {
				swap(v[i], v[i + 1]);
				sorted = false;
			}
		}

	}
}

int main() {
	int a[10];

	srand((unsigned int)time(0)); // give a different seed to rand() every time

	for (int i = 0; i < 10; i++) {
		a[i] = (rand() % 100) + 1;
	}

	for (int i = 0; i < 10; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	BubbleSort(a, 10);

	for (int i = 0; i < 10; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

}