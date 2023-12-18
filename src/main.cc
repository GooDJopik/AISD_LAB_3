#include <vector>


#include "../include/stats.h"
#include "../include/Analis.h"
#include "../include/sort.h"
#include "../include/Telephone.h"

template<typename T>
void print_arr(std::vector<T> arr) {
	for (T num : arr) {
		std::cout << num << ' ';
	}
}

int main() {

	std::vector<Telephone> telephone = { Telephone("IPhone 13", 2021), Telephone("Sumsung Galaxy S23 FE", 2023), Telephone("Honor 9X", 2020), Telephone("POCO F3",2021) };
	std::cout << telephone;
	cocktailSort(telephone);
	std::cout << telephone;


	std::vector<std::string> str = { "rap", "red", "blake", "number", "map", "jump", "expention", "battle" };
	print_arr(str);
	std::cout << std::endl;
	insertion_sort(str);
	print_arr(str);
	std::cout << std::endl;


	/*std::vector<int> arr{ 3, 4, 6, 1, 2, 5, 7, 9, 8 };
	print_arr(arr);
	std::cout << std::endl;
	std::cout << insertion_sort(arr);
	print_arr(arr);
	std::cout << std::endl;
	std::cout << std::endl; */


	/*std::vector<int> arr{ 3, 4, 6, 1, 2, 5, 7, 9, 8 };
	print_arr(arr);
	std::cout << std::endl;
	cocktailSort(arr);
	print_arr(arr);
	std::cout << std::endl; */


	std::vector<int> arr{ 3, 4, 6, 1, 2, 5, 7, 9, 8 };
	print_arr(arr);
	std::cout << std::endl;
	std::cout << combSort(arr);
	print_arr(arr);
	std::cout << std::endl;


	/*std::vector<size_t> lens_arr = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	int min = 1;
	int max = 100000;
	std::cout << "Statistics of the reverse array for insertion_sort" << std::endl;
	get_stats_sort(lens_arr, generate_reverse_sort_vect, insertion_sort);
	get_stats(min, max, lens_arr, insertion_sort);*/

	//std::cout << "Statistics of the sorted array for insertion sorting" << std::endl;
	//get_stats_sort(lens_arr, generate_sort_vect, insertion_sort);


	/*std::vector<size_t> lens_arr = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000};
	int min = 1;
	int max = 100000;
	std::cout << "Statistics of the reverse array for cocktailSort" << std::endl;
	get_stats_sort(lens_arr, generate_reverse_sort_vect, cocktailSort);
	get_stats(min, max, lens_arr, cocktailSort);*/

	//std::cout << "Statistics of the sorted array for cocktail sorting" << std::endl;
	//get_stats_sort(lens_arr, generate_sort_vect, cocktailSort);


	std::vector<size_t> lens_arr = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	int min = 1;
	int max = 100000;
	std::cout << "Statistics of the reverse array for combSort" << std::endl;
	get_stats_sort(lens_arr, generate_reverse_sort_vect, combSort);
	get_stats(min, max, lens_arr, combSort);

	std::cout << "Statistics of the sorted array for combSort" << std::endl;
	get_stats_sort(lens_arr, generate_sort_vect, combSort);
	

	std::cout << "Statistics for insertion sorting" << std::endl;




	std::cout << "Naice man, very nice" << std::endl;


	return 0;
}