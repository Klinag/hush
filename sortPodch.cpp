#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
vector <int> count_sort(vector<int> &mas)
{
	
	vector <int> resMas;     
	auto maxi = max_element(mas.begin(), mas.end());
	vector <int> newMas(*maxi + 1, 0);
		     
	for (int i = 0; i < mas.size(); ++i)
		newMas[mas[i]] += 1;
			 
	for (int i = 1; i < newMas.size(); ++i)
	{	
		for (int j = 0; j < newMas[i]; ++j)
			resMas.push_back(i);
						
	}	     
	
	return resMas;

}
