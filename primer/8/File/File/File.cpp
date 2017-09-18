// File.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <sstream>
#include "Sales_data.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream input(argv[1], ifstream::in);
	ofstream output(argv[2], ifstream::app);
	//fstream file;
	istringstream s("LAKE");
	Sales_data total;
	if (read(input, total))
	{
		Sales_data trans;
		while (read(input, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(output, total) << endl;
				total = trans;
			}
		}
		print(output, total) << endl;
	}
	else {
		cerr << "No Data" << endl;
	}
	input.close();
	output.close();
	return 0;
}

