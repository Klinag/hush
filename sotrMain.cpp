#include <iostream>
#include <vector>
#include "Header.h"
 
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
 
    vector <int> mas(n);
    vector <int> newMas;
 
    
    for (int i = 0; i < n; ++i)
 
        cin >> mas[i];
 
    newMas = count_sort(mas);
 
    for (auto elem : newMas)
        cout << elem << " ";
 
    return 0;
}
