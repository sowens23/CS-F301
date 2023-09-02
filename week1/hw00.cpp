/* 	
	Name: Spencer Owens
	Class: Fall23 CS F301
 	Date: 2023-Aug-30
  Program Name: hw00.cpp
	Program Function: 
		6 Part Assignment running through basic c++ functionality
			0) Return 5
			1) Return 5 if 'input' is 42
			2) Take users name, then print "%username is awesome"
			3)
			4)
			5)
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::vector;

void part0 () 
{
	cout << "5\n";
}

void part1 () 
{
	int input;
	cout << "Please input: ";
	cin >> input;
	if (input == 42) cout << "5\n";
	else cout << "0\n";
}

void part2 ()
{
	string username;
	cout << "Please input username: ";
	cin >> username;
	cout << username << " is awesome!\n";
}

void part3 () {

}

void part4 ()
{
	// Take input from file per homework
	string location = "C:\\Users\\Spencer Owens\\Documents\\GitHub\\CS-F301\\week1\\week1input\\input04.txt";
	std::ifstream inputFile(location);
		if (!inputFile) {
			std::cout << "Failed to open file" << endl;
		}

	// Tokenize input values
	vector<string> strValues;
	vector<int> intValues;
	string line;
	while (std::getline(inputFile, line)) {
		std::istringstream iss(line);
		string token;
		
		while (iss >> token) {
			// Attempt to convert the token to an integer
			try {
				int num = std::stoi(token);
				intValues.push_back(num);
			} catch (const std::invalid_argument&) {
				// If the conversion fails, treat it as string
				strValues.push_back(token);
			}
		}
	}
	inputFile.close();

	// PROGRAM START
	vector<string> names=strValues;
	vector<int> answers=intValues;
	int count = answers.size();

	/* 	
		Check for duplicates (count is reading 5 lines, not 4. IDK WHY)
		Here we iterate through answers 1 through count
		We pull answer 1 and check nothing
		then answer 2 and check 1
		then answer 3 and check 2, 1
		then answer 4 and check 3, 2, 1 etc.
	*/
	
	for(int i=0; i<=count-1; i++) {
		for (int j=i-1; j>=0; j--) {
			if (answers[i] == answers[j]) cout << names[i] << " is copyGPT\n";
		}
	}
}

void part5() {


}

int main () 
{
	part4();

	return 0;
}