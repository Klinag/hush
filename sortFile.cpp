#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortBubble(vector<int> &mas)
{
	for (int i = 0; i < mas.size(); ++i)
	{
		for (int j = i + 1; j < mas.size(); ++j)
		{
			if (mas[i] > mas[j])
				swap(mas[i], mas[j]);
		}
	}

	return mas;

}
