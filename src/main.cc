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

	std::vector<size_t> lens_arr = { 1000, 2000, 3000, 4000, 5000,6000,7000,8000,9000, 10000, 25000, 50000 };
	int min = 1;
	int max = 50000;
	std::cout << "Statistics of the reverse array for cocktailSort" << std::endl;
	get_stats_sort(lens_arr, generate_reverse_sort_vect, cocktailSort);
	get_stats(min, max, lens_arr, cocktailSort);

	std::cout << "Ready" << std::endl;


	return 0;
}