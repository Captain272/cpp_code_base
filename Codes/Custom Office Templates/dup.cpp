#include<iostream>
using namespace std;
 
int main()
{
	int arr[10], i, j, k, s;
	
	cout<<("no of elements");
	cin>>s;
	for (i = 0; i < s; i++)
	{
    	cin>>arr[i];
   	}     
 
	for (i = 0; i < s; i++)
	{
		for(j = i + 1; j < s; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < s; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				s--;
				j--;
			}
		}
 	for (i = 0; i < s; i++)
  	{
 		cout<<arr[i];
  	}	     
 	return 0;
}
}
