//LAB -01 C++ by Chiranjeevi 

#include<iostream>
#include<cmath>

using namespace std;

int len_a(int );
int palindrome(int );
int amstrng(int);
int perfect(int );


int main()
{
	/* code */
	int n;
	cout<<"Enter the no of Customers:"<<endl;
	cin>>n;
	// cout<<n;
	int ids[n];

	for (int i = 0; i < n; ++i)
	{
		cout << "Enter the id of Customer "<< i+1<<endl;
		cin >> ids[i];
	}


	cout<<"All Ids:"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<ids[i]<<'\t';
		/* code */
	}

	// int neww[];
	int ind = 0;


	for (int i = 0; i < n; ++i)
	{
		if ( perfect(ids[i]) ==0 || amstrng(ids[i]) ==0 || palindrome(ids[i]) == 0){
			// neww[ind] = ids[i];
			ind++;
		}
	}

	int neww[ind];
	int inds = 0;

	for (int i = 0; i < n; ++i)
	{
		if ( perfect(ids[i]) ==0 || amstrng(ids[i]) ==0 || palindrome(ids[i]) ==0)
		{

			int f = 0;	

			for (int ij = 0; ij < ind; ++ij)
			{
				/* code */
				if (neww[ij] == ids[i])
				{
					f = 1;
					/* code */
				}
			}
			if (f == 0)
			{
				neww[inds] = ids[i];
				inds++;
				/* code */
			}
			
		}
	}

	cout<<endl<<"Special Id's are:"<<endl;
	for (int i = 0; i < inds; ++i)
	{
		cout<<neww[i]<<endl;
		/* code */
	}

	cout<<"Sorted Order of Id's:"<<endl;
	for (int i = 0; i < inds; ++i)
	{
		for (int j = 0; j < inds-1; ++j)
		{
			if (neww[j]>neww[j+1])
			{
				int temp = neww[j];
				neww[j] = neww[j+1];
				neww[j+1] = temp;
				/* code */
			}
			/* code */
		}
		/* code */
	}

	for (int i = 0; i < inds; ++i)
	{
		cout<<neww[i]<<endl;
		/* code */
	}

	return 0;
}



int palindrome(int a){
	int n = 0,k=a,num=0;
	n = len_a(a)-1;
	// cout<<"N is "<<n;
	k = a;
	while(k>0){
		int rem = k%10;
		num += rem * pow(10,n);
		n--;
		k /=10;
	}
	if (num == a)
	{
		return 0;
	}
	else{
		return 1;
	}
}


int len_a(int a){
	int n = 0;
	while(a>0){
		a/=10;
		n++;
	}
	return n;
}

int amstrng(int a){
	int num =0,k=a;
	int n = len_a(a);
	while(k>0){
		int rem = k%10;
		num += pow(rem,n);
		k/=10;
	}
	if (num ==a){
		return 0;
	}
	else{
		return 1;
	}

}

int perfect(int a){
	int f=0;
	int s = 0;
	for (int i = 1; i < a; ++i)
	{
		if (a%i==0){
			s+=i;
		}
		/* code */
	}
	if (s==a)
	{
		return 0;
		/* code */
	}
	else{
		return 1;
	}
}