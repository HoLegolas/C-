#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

int main()
{
	vector<int> ivec{1,2,3,4,5,6,7,8,9};
	const unsigned sz = ivec.size();
	int iarr[sz];
	auto b = ivec.begin();
	auto e = ivec.end();
	for (size_t i = 0; b != e && i < sz ; b++, i++) {
		iarr[i] = *b;
	}

	for (size_t i = 0; i < sz; i++) 
		cout << iarr[i] << " ";
	cout << endl;
	
	int i2[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,0,1}};
	for ( auto &row : i2) {
		for (auto &col : row)
			cout << col << " ";
		cout << endl;
	}	
	return 0;
}

