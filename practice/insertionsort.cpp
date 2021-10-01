#include<iostream>
using namespace std;

int insertionsort(int arr[],int n)
{
	for (int j=1;j<n;j++)
	{
		int i=j;
		int temp;
		while(i>=0 && arr[i-1]>arr[i])
		{
			temp=arr[i-1];
			arr[i-1]=arr[i];
			arr[i]=temp;
			i--;
//			cout<<i;
		}
	}
	
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i]<<ends;
//	}
}


int merge(int arr[],int p,int q,int r)

{
	int n1=q-p+1,n2=r-q;
	int arn1[n1];
	int arn2[n2];
	for(int i=0;i<n1;i++)
	{
		arn1[i]=arr[p+i];
//		cout<<arn1[i]<<ends;
	}
//	cout<<endl;
	for (int j=0;j<n2;j++)
	{
		arn2[j]=arr[q+j+1];
//		cout<<arn2[j]<<ends;
	}
//cout<<endl;		
	arn1[n1]=999999;
	arn2[n2]=999999;
	
	int i=0,j=0,k=p;
	for(int l=0;l<n1+n2;l++)
	{
		if(arn1[i]<=arn2[j]){
			arr[k]=arn1[i];
			i++;
			k++;
		}
		else{
			arr[k]=arn2[j];
			j++;
			k++;
			
		}
}
	}
//	cout<<endl;
//	for(int k=0;k<r-p;k++){
//		cout<<arr[k]<<ends;
//	}
	
	
	


int mergesort(int arr[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=p+((r-p)/2);
//		cout<<p<<ends<<q<<ends<<r<<endl;
		mergesort(arr,p,q);
		mergesort(arr,q+1,r);
		merge(arr,p,q,r);
	}

}

int main(){
	int n;
	cout<<"Enter the leangth of the Arrary";
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		
	insertionsort(arr,n);
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<ends;
	}
//	cout<<"It is inserstion sort and with"<<endl<<"Time Complexity :"<<endl<<"Space Complexity :";
//	
//	mergesort(arr,0,n);
//	cout<<endl;
//	if(n%2==0)
//	{
//		for(int i=0;i<n;i++)
//		{	
//			cout<<arr[i]<<ends;
//		}
//	}
//	else{
//			for(int i=0;i<n+1;i++)
//		{	
//			cout<<arr[i]<<ends;
//		}
//		
//	}
//	
//	cout<<"It is Merge sort and with"<<endl<<"Time Complexity :"<<endl<<"Space Complexity :";
}
