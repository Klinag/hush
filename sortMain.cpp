#include <iostream>
#include <vector>
#include "Hed.h"

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> mas(n);

	for (int i = 0; i < n; ++i)
		cin >> mas[i];

	mas = sortBubble(mas);

	for (auto elem : mas)
		cout << elem << " ";

	return 0;
}
