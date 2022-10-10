#include <iostream>
#include <vector>

#include <string>

int main() {
    std::vector<int> vec(2);
    vec[0] = 1;
	vec[1] = 2;
	vec.push_back(13);
    vec.push_back(21);  
    vec.pop_back();

	std::cout << "Vector size: " << vec.size() << std::endl;
    std::cout << "Maximum Vector size: " << vec.max_size() << std::endl;
    return 0;
}