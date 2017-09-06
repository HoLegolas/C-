#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> iv, int cnt)
{
	if (cnt == iv.size())
		return;
	cout << iv[cnt] << " ";
	print(iv, ++cnt);
}

int main()
{
	vector<int> iv{1,2,3,4,5,6,7,8,9};
	print(iv,0);
	return 0;
}
