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
			3) if Input a or b equal 42, print previous variable
			4) Take input, if there are duplicate values find them
			5) Read assembly instructions to manupulate a register and return the value.
			6) Correct any input that is a multiple of 10, by adding one. eg. 9 -> 9, 10 -> 11, 11 -> 11.
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
	// Take input from file per homework
	std::ifstream inputFile("week1input/input03.txt");
	if (!inputFile) {
		cout << "Failed to open file" << endl;
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

	// Program Start
	int count=strValues.size();
	for(int i=0; i<count; i++) {
		if (intValues[i] == 42) cout << strValues[i] << " is awesome\n";
	}

}

void part4 ()
{
	// Take input from file per homework
	std::ifstream inputFile("week1input/input04.txt");
	if (!inputFile) {
		cout << "Failed to open file" << endl;
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

long part5() {
	// START: READ INPUT
	std::ifstream inputFile("week1input/input05.txt");
	if (!inputFile) {
		cout << "Failed to open file" << endl;
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
	// END: READ INPUT

	// Program start
	int current=0; // current register value

	// your I/O and assembly simulator code here!
	vector<string> validOpcodes = {"load", "add", "return"};
	string opcode;
	int value_t=0;
	int count=strValues.size();
	for (int i=0; i<=count-1; i++) {
		// Read in operation request
		opcode = strValues[i];
		
		// Check to see if request is valid
		for (string Opcode_t: validOpcodes) {
			if (opcode == Opcode_t) value_t=1;
		}
		if (value_t != 1) {
			std::cerr << "invalid opcode " << opcode << std::endl;
			exit(1);
		}
		
		// Execute Assembly Instruction
		if (opcode == "load") current = intValues[i];
		if (opcode == "return") {
			cout << current << endl;
			return 0;
		}
		if (opcode == "add") {
			value_t = intValues[i];
			current += value_t;
		}
	}
		
	// Leaving what was already there. Has no effect on program function
	return 0;
	// Program end
}

void part6() {
	// START: READ INPUT
	std::ifstream inputFile("week1input/input06.txt");
	if (!inputFile) {
		cout << "Failed to open file" << endl;
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
	// END: READ INPUT

	int bar;
	int count=intValues.size();
	for (int i=0; i<=count-1; i++)
	{
		bar = intValues[i];
		int round10=bar/10*10; // bad ones are multiples of ten
		if (bar==round10)
		{
			bar=bar+1;
		}
		cout << intValues[i] << " -> " << bar << endl;
	}
}

int main () 
{
	int selection;
		cout << "\033[2J\033[1;1H";
			cout << "6 Part Assignment running through basic c++ functionality\n\n";
			cout << "0) Return 5\n";
			cout << "1) Return 5 if 'input' is 42\n";
			cout << "2) Take users name, then print 'username is awesome'\n";
			cout << "3) if Input a or b equal 42, print previous variable\n";
			cout << "4) Take input, if there are duplicate values find them\n";
			cout << "5) Read assembly instructions to manupulate a register and return the value.\n";
			cout << "6) Correct any input that is a multiple of 10, by adding one. eg. 9 -> 9, 10 -> 11, 11 -> 11.\n\n";
	cout << "Please select a program to run: ";
	cin >> selection;
		if (selection == 1) part1();
		if (selection == 2) part2();
		if (selection == 3) part3();
		if (selection == 4) part4();
		if (selection == 5) part5();
		if (selection == 6) part6();
	return 0;
}