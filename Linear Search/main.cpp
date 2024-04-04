#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>


//Линейный поиск элемента в массиве.







//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}
// Функция Линейного поиска первого вхождения значения key в массив arr начиная с позиции begin.
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}


// Функция линейного последнего вхождения значения key в массив arr
template <typename T>
int search_last_index(T arr[], const int length, T key) {
	for (int i = length -1; i >=0;i--)
		if (arr[i] == key)
			return i;
	return -1;
}
// Функция линейного последнего вхождения значения key в массив arr начиная с позиции begin.
template <typename T>
int search_last_index(T arr[], const int length, T key, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	const int size = 10;
	int arr[size]{5, 20, 10, 8, 5, 20, 7, 8, 20, 1};
		std::cout << "Массив:\n";
		print_arr(arr, size);

	std::cout << " введите число для поиска ->";
		std::cin >> n;
	
	int index = search_index(arr, size, n);

	if (index != -1)
		std::cout << "Позиция числа: " << index << std::endl;
	else
		std::cout << "Числа нет в массиве.\n";
	
		int last_index = search_last_index(arr, size, n, 6);
	
		if (last_index != -1)
			std::cout << "Позиция числа: " << last_index << std::endl;
		else
			std::cout << "Числа нет в массиве.\n";



	return 0;
}