#include <iostream>
using namespace std;
int main() 
{
	int i, j; 
	int b[10][10]; 
	for(int i=0;i<10;i++) 
	{ 
		for(int j=0;j<10;j++)
		{ 
			b[i][j] = i*j; cout << b[i][j] << " "; 
		} 
		cout << endl; 
	} 
	return 0; 
}

