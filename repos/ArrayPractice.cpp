#include<iostream>
using namespace std;
int main()
{
	int numbersArray[3];
	numbersArray[0]=1;
	cout << numbersArray[0] << endl;
	
	int numbArray2[5]; numbArray2[0] = 1; numbArray2[1] = 2; numbArray2[2] = 3; numbArray2[3] = 4; numbArray2[4] = 5;
	cout << numbArray2[0] << numbArray2[1] << numbArray2[2] << numbArray2[3] << numbArray2[4] << endl;

	char strArray[6] = { 'k','e','n','t','o','n' };
	cout << strArray[0] << strArray[1] << strArray[2] << strArray[3] << strArray[4] << strArray[5] << endl;
	
	return 0;
}
