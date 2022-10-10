#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    // Sample List of Words
    std::vector<std::string> words;
	std::stringstream ss("Some Random Words this thing pretty cool");
	std::string word;

	while (getline(ss, word, ' ')) {
		words.push_back(word);
	}

    // While
    int z_1 = 1;
	while (z_1 <= 100) {
		std::cout << "Round " << z_1 << std::endl;
		z_1++;
	}

    // For
	for (int i = 0; i < words.size(); i++) {
		std::cout << words[i] << std::endl;
	}

    // Foreach
	int arr_1[] = { 1, 2, 4, 2, 90 };
	for (int x : arr_1) std::cout << x << std::endl;

    // Do While
	int secretNumber = rand() % 11;
	int guess = 0;
	int tries = 0;
	do {
		std::cout << "Guess the number: ";
		std::cin >> guess;
		if (guess > secretNumber) std::cout << "Lower!" << std::endl;
		if (guess < secretNumber) std::cout << "Higher!" << std::endl;
		tries++;
	} while (guess != secretNumber);
	std::cout << "You guessed the number! You needed " << tries << " tries :)" << std::endl;
    return 0;
}