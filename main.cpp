#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Tool.h"
#include "King.h"
using namespace std;

vector<string> split(string str, string delimiter)
{
	vector<string> res;
	size_t pos = 0;
	std::string token;
	while ((pos = str.find(delimiter)) != std::string::npos) {
		token = str.substr(0, pos);
		res.push_back(token);
		str.erase(0, pos + delimiter.length());
	}
	res.push_back(str);
	return res;
}

vector<vector<string>> read_position(string file_name){
	vector<vector<string>> position;
	ifstream myfile(file_name);
	string mystring;
	vector<string> pieces_string_info;
	if (myfile.is_open()) {
		while (myfile.good()) {
			myfile >> mystring;
			pieces_string_info.push_back(mystring);
		}
	}
	int vecsize = pieces_string_info.size();
	for (int i = 0; i < vecsize; i++)
	{
		position.push_back(split(pieces_string_info[i], ","));
	}
	return position;
}

int main(int argc, char** argv) {
	vector<vector<string>> position = read_position("tools.txt");
	return 0;
}