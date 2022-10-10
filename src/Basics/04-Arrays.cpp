#include <iostream>
#include <string>

int main() {
    // Simple Array
	int arr[10] = { 1 }; // declare with static length
	int arr_2[] = { 1, 2, 3 }; // declare with dynamic length

    std::cout << arr[0] << std::endl;
	std::cout << arr_2[1] << std::endl;

    arr[1] = 89;
    arr[2] = 10;

    arr_2[2] = 1;


	// multidimensional array
	int arr_d[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	std::cout << arr_d[0][1] << std::endl;
    return 0;
}