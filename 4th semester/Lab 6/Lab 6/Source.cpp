#include <iostream>
#include <locale.h>

#include "BitString.h"

int main(int argc, char* argv[]){
	setlocale(LC_ALL, "rus");
	BitString a, b, c;
	try {
		if (argc < 4) {

			cout << "������� ������ ������: ";
			cin >> a;
			cout << "������� ������ ������: ";
			cin >> b;
			c = a & b;
			cout << c << endl;
		}
		else{

			a.FileInput((const char*)argv[1]);
			b.FileInput((const char*)argv[2]);
			c = a & b;
			c.FileOutput((const char*)argv[3]);
		}
	}
	catch (runtime_error& error) {
		cout << "Exception: " << error.what() << endl;
	}
}