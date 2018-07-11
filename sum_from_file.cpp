#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream ifile("num2b.txt");
	int x, y;

	if( ifile.fail() ){
		cout << "Couldn't open the file." << endl;
		return 1;
	}
	ifile >> x >> y;

	if( ifile.fail() ){
		cout << "Please follow the rules." << endl;
		return 1;
	}

	cout << "X=" << x << " and Y=" << y << endl;

	ifile.close();
	return 0;
}
