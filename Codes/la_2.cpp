//Soring integer numbers

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n;
	cout<<"enter the length"<<endl;
	cin>>n;
	int array[n];
	cout<<"enter the elements:\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>array[i];
		/* code */
	}

	printf("Array:\n");
	for (int i = 0; i < n; ++i)
	{
		cout<<array[i]<<"\t";
		/* code */
	}
	printf("\n");

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			if (array[j]>array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				/* code */
			}
			/* code */
		}
		/* code */
	}
	printf("Sorted array:\n");
	for (int i = 0; i < n; ++i)
	{
		cout<<array[i]<<"\t";
		/* code */
	}
	printf("\n");
}