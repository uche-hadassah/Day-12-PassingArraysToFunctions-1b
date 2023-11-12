/*Name:Uche Hadassah
This program receives numbers from the user until a sentinel is entered,
stores it in an array,copies it into another array, and outputs the two arrays. It does not use the sentinel in the function*/#include<iostream>
using namespace std;
const int MAX = 100;
void CopyArray(int[], int[],int&);//Function prototype
int main()
{
	int arr1[MAX];
	int arr2[MAX];
	int i = 0;//This will represent the size of the array

	cout << "\nEnter the numbers(-1 to end):";
	do
	{
		cin >> arr1[i];
		if (arr1[i] == -1)//If this happens, the loop ends
		{
			break;
		}
		i++;
	} while (arr1[i] != -1 && i < MAX);//While the sentinel is not reached
	CopyArray(arr1, arr2,i);//Function call
	return 0;
}

void CopyArray(int source[], int destination[], int &size)
{
	int j = 0;
	while (j <= size && j < MAX)
	{
		destination[j] = source[j];//Equates the two arrays
		j++;
	}
	cout << "\nSource Array:";
	for (int i = 0; i <= size; i++)//Outputs the source array
	{
		cout << source[i] << " ";
	}
	cout << "\nDestination Array:";
	for (int k = 0; k <= size; k++)//Outputs the dest. array
	{
		cout << destination[k] << " ";
	}
}
