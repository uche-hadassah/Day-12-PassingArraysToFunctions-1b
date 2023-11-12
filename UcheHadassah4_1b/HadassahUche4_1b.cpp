/*b) Re-write the function above, so that it doesn’t assume that a -1 is at the end of the 
array parameter source. You will need to pass the size of the array as an additional 
parameter. Again, test your function with a user defined array (sentinel controlled).*/#include<iostream>
using namespace std;
const int MAX = 100;
void CopyArray(int[], int[],int&);//Function prototype
int main()
{
	int arr1[MAX];
	int arr2[MAX];
	int i = 0;
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
	//sets the last value in the dest. array to the sentinel since we want to output that too
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
