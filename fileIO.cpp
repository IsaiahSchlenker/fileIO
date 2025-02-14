#include <iostream>
#include <fstream>
#include <sstream>

int main(){
	std::string word;
	std::string stringNum1;
	std::string stringNum2;
	int num1;
	int num2;
	int sum;
	std::ifstream data;
	std::stringstream converter;
	std::string currentLine;
	
	data.open("data.csv");
	while(getline(data, currentLine)){
		converter.str(currentLine);
		getline(converter, stringNum1, ',');
		getline(converter, stringNum2, ',');
		getline(converter, word);

		converter.clear();
		converter.str("");

		converter << stringNum1 << " " << stringNum2;
		converter >> num1 >> num2;
		sum = num1+num2;
		for(int i=0; i<sum; i++){
			std::cout << word << " ";
		}
		converter.clear();
		std::cout << std::endl;
	}
	data.close();
	return 0;
}
