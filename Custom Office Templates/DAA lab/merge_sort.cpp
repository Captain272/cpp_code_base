#include<iostream>
using namespace std;


merge(int arr[],int p,int q,int r){
	int n1,n2;
	n1=q-p+1;
	n2=r-q;
	int l1[n1],l2[n2];
	for(int i=0;i<n1;i++){
		l1[i]=arr[p+i];
	}
	for(int j=0;j<n2;j++){
		l2[j]=arr[q+j+1];
	}
	
	int i,j,k;
	i=0;
	j=0;
	k=p;
	while(i<n1 && j<n2){
		if(l1[i]<=l2[j]){
			arr[k]=l1[i];
			i++;
//			k++;
		}
		else if(l1[i]>l2[j]){
			arr[k]=l2[j];
			j++;
//			k++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k]=l1[i];
		k++;
		i++;
	}
		while(j<n1){
		arr[k]=l2[j];
		k++;
		i++;
	}
}

merge_sort(int arr[],int p,int r){
	if(p<r){
		int q=p+(r-p)/2;
		cout<<p<<ends<<q<<ends<<r<<endl;
		merge_sort(arr,p,q);
		merge_sort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}

void insertion()
{
	int n;
	cout << "\nEnter the length of your array : ";
	cin >> n;
	int Array[n];
	cout << "\nEnter any " << n << " Numbers for Unsorted Array : ";
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}
	for (int i = 1; i < n; i++)
	{
		int temp = Array[i];
		int j = i - 1;
		while (j >= 0 && temp < Array[j])
		{
			Array[j + 1] = Array[j];
			j--;
		}
		Array[j + 1] = temp;
	}
	cout << "\nSorted Array : ";
	for (int i = 0; i < n; i++)
	{
		cout << Array[i] << "\t";
	}
}

void Selection(){
		int n;
	cout << "\nEnter the length of your array : ";
	cin >> n;
	int Array[n];
	cout << "\nEnter any " << n << " Numbers for Unsorted Array : ";

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	for (int i = 1; i < n; i++)
	{
		int temp = Array[i];
		int j = i - 1;
		while (j >= 0 && temp < Array[j])
		{
			Array[j + 1] = Array[j];
			j--;
		}
		Array[j + 1] = temp;
	}
	cout << "\nSorted Array : ";
	for (int i = 0; i < n; i++)
	{
		cout << Array[i] << "\t";
	}
}
	
int main(){
	int arr[8];
	for(int i=0;i<8;i++){
		arr[i]=8-i;
		cout<<arr[i]<<ends;
	}
	cout<<"\n\n Merge Sort\n\n";
	merge_sort(arr,0,7);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<ends;
	}
}

