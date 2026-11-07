#include <iostream>

double* create_array(int size) {
	double* arr = new double[size];

	for (int i = 0; i < size; i++) {
		arr[i] = 0.0;
	}
	return arr;
}

int main() {
	int size;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	
	if (size <= 0) {
		std::cout << "Size must be a positive integer." << std::endl;
		return 1;
	}

	double* arr = create_array(size);

	std::cout << "Massive: ";

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	delete[] arr;
	return 0;
}

