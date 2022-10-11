#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	ofstream writeToFile;
	ifstream readFromFile;
	string txtToWrite = "";
	string txtFromFile = "";


	// write to file
	writeToFile.open("test.txt", std::ios_base::out | std::ios_base::app);
	if(writeToFile.is_open()) {
		writeToFile << "Beginning od File\n";
		cout << "Enter data to write: ";
		getline(cin, txtToWrite);
		writeToFile << txtToWrite;
		writeToFile.close();
	}

	// read from file
	readFromFile.open("test.txt", ios_base::in);
	if(readFromFile.is_open()) {
		while(readFromFile.good()) {
			getline(readFromFile, txtFromFile);
			cout << txtFromFile << endl;
		}
		readFromFile.close();
	}
	return 0;
}
