#pragma once
#include <iostream>
#include <vector>

#include "stats.h"


template<typename T>
Stats insertion_sort(std::vector<T>& arr) {
	Stats stats;
	if (arr.size() < 2)
		return stats;
	for (size_t i = 1; i < arr.size(); ++i) {
		size_t j = i;
		stats.comparison_count++;
		while (j != 0 && arr[j] < arr[j - 1]) {
			std::swap(arr[j - 1], arr[j]);
			stats.copy_count += 2;
			--j;
		}
	}
	return stats;
}

template<typename T>
Stats cocktailSort(std::vector<T>& arr) {
	Stats stats;
	if (arr.size() < 2) return stats;
	size_t left = 0, right = arr.size() - 1;
	size_t last_swap = 0;
	while (left < right) {
		for (size_t i = left; i < right; ++i) {
			stats.comparison_count++;
			if (arr[i + 1] < arr[i]) {
				std::swap(arr[i + 1], arr[i]);
				stats.copy_count += 2;
				last_swap = i;
			}
		}
		right = last_swap;
		for (size_t j = right; j > left; --j) {
			stats.comparison_count++;
			if (arr[j] < arr[j - 1]) {
				std::swap(arr[j], arr[j - 1]);
				stats.copy_count += 2;
				last_swap = j;
			}
		}
		left = last_swap;
	}
	return stats;
}

template<typename T>
void combSort(std::vector<T>& arr, Stats& stats) {
	if (arr.size() < 2) return;
	int gap = arr.size();
	float shrink = 1.3;
	bool swapped = true;

	while (gap > 1 || swapped) {
		if (gap > 1) {
			gap = static_cast<int>(gap / shrink);
		}

		swapped = false;
		for (int i = 0; i + gap < arr.size(); ++i) {
			stats.comparison_count++;
			if (arr[i] > arr[i + gap]) {
				std::swap(arr[i], arr[i + gap]);
				stats.copy_count += 2;
				swapped = true;
			}
		}
	}
}

template<typename T>
void comb_sort(std::vector<T>& arr, Stats& stats) {
	int size = arr.size();

	for (int i = size / 2 - 1; i >= 0; i--) {
		heapify(arr, size, i, stats);
	}

	for (int i = size - 1; i > 0; i--) {
		std::swap(arr[0], arr[i]);
		stats.copy_count += 2;

		heapify(arr, i, 0, stats);
	}
}

template<typename T>
Stats comb_sort_wrapper(std::vector<T>& arr) {
	Stats stat;
	combSort(arr, stat);
	return stat;
}
/*
template<typename T>
Stats combSort(std::vector<T>& arr) {
	Stats stats;
	if (arr.size() < 2) return stats;
	int gap = arr.size();
	float shrink = 1.3;
	bool swapped = true;

	while (gap > 1 || swapped) {
		if (gap > 1) {
			gap = static_cast<int>(gap / shrink);
		}

		swapped = false;
		for (int i = 0; i + gap < arr.size(); ++i) {
			stats.comparison_count++;
			if (arr[i] > arr[i + gap]) {
				std::swap(arr[i], arr[i + gap]);
				stats.copy_count += 2;
				swapped = true;
			}
		}
	}
	return stats;
}
*/