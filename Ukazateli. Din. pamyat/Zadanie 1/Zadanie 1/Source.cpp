#include <iostream>

int main() {
	int size;
	std::cout << "Введите размер массива: ";
	std::cin >> size;

	if (size <= 0) {
		std::cout << "Размер массива должен быть положительным числом." << std::endl;
		return 1;
	}

	int* arr = new int[size];

	for (int i = 0; i < size; ++i) {
		std::cout << "Введите элемент массива [" << i << "]: ";
		std::cin >> arr[i];
	}

	std::cout << "Введенные элементы массива: ";
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	delete[] arr;
	return 0;
}