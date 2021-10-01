#include<iostream>
using namespace std;

int max(int arr[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}

int compute(int job[],int profit[],int sequence[],int max,int n){

		for(int i=0;i<max;i++){
			sequence[i]=0;
		}
		for(int i=0;i<n;i++){
		if(sequence[job[i]-1]==0){
		
			sequence[job[i]-1]=profit[i];
//			cout<<sequence[job[i]]<<endl;
		}	
		else{
			int cho=job[i]-1;
			while(cho>=0){
				if(sequence[cho]==0){
//					cout<<profit[i]<<ends;
					sequence[cho]=profit[i];
					break;
			
		}
		cho--;
			}
		}
			for(int i=0;i<4;i++){
//		cout<<profit[i]<<ends<<job[i]<<endl;
		cout<<sequence[i]<<ends;
//		max_pro+=sequence[i];
	}
	cout<<endl; 	
	}
}

void sort(int job[] ,int profit[],int n){
	int min=0;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(profit[min]<profit[j]){
				min=j;
			}
		}
		int temp=profit[min];
		profit[min]=profit[i];
		profit[i]=temp;
		temp=job[min];
		job[min]=job[i];
		job[i]=temp;
	}	
}

int main(){
	int n=7;
	cout<<"enter the no of jobs";
//	cin>>n;
	
	int profit[n]={5,20,25,30,15,12,35};
	int job[n]={2,2,4,4,3,1,3}; 
	int mac=max(job,n);
	int sequence[mac];
	cout<<mac<<endl<<endl;
	sort(job,profit,n);
	compute(job,profit,sequence,mac,n);
	for(int i=0;i<n;i++){
		cout<<profit[i]<<ends<<job[i]<<endl;
//		cout<<sequence[i]<<ends;
	}
	int max_pro=0;
	for(int i=0;i<4;i++){
//		cout<<profit[i]<<ends<<job[i]<<endl;
		cout<<sequence[i]<<ends;
		max_pro+=sequence[i];
	}
	cout<<"Max profit is "<<max_pro;
}
