#include <iostream>
#include<fstream>

using namespace std;

int main() {

	cout << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "------------------------         PAVIC LAB 2023            ------------" << endl;
	cout << "------------------------            UFAC                   ------------" << endl;
	cout << "------------------------          TURMA 2023               ------------" << endl;
	cout << "***********************************************************************" << endl;
	cout << "***********************************************************************" << endl;

	cout << endl;

	// Load Images - Read like std::Cin
	ifstream imageIn;
	//ofstream images; like std::Cout
	ofstream newimage;

	imageIn.open("image/Input.ppm");
	newimage.open("image/out/NewImage.ppm");

	imageIn.close();
	newimage.close();


	cout << "Hello PAVIC Lab" << endl;


	return 0;
}
