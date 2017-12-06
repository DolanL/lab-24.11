#include<string>
#include<fstream>
#include<iostream>

int main() {
	using namespace std;
	string buff;
	ifstream file ("cppfile.txt");
	for (int i=0; i < 3; i++) {
		file >> buff;
		cout << buff;
	}
	file.close();
	return 0;
}
