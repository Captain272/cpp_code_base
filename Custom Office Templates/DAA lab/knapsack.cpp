#include<iostream>
using namespace std;

void unit(int val[],int wt[],int n,int uni[]){
	int unit[n];
	cout<<"\nunit profits are: \n-----------------------\n";
	for(int i=0;i<n;i++){
		
		uni[i]=unit[i]=val[i]/wt[i];
		cout<<endl<<unit[i]<<ends<<wt[i]<<ends<<val[i]<<endl;
	}
}

void sort(int unit[],int wt[],int n){
	int min;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i;j<n;j++){
			if(unit[min]<unit[j]){
				min=j;
			}
		}
		int temp=unit[min];
		unit[min]=unit[i];
		unit[i]=temp;
		
		temp=wt[min];
		wt[min]=wt[i];
		wt[i]=temp;
	}
}

void knapsack(int val[],int wt[],int w,int n){
	int uni[n];
	unit(val,wt,n,uni);
	sort(uni,wt,n);
	int knap=w;
	int i=0;
	cout<<"the weigths that are included are: ";
	while(knap>0 && i<n){
		if(knap-wt[i]>=0){
			cout<<wt[i]<<ends;
			knap=knap-wt[i];
			i++;
			
		}
		else{
			break;
		}
	}
}





int main(){
	int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int w = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout<<"The weigths present in the shop with profits are :";
    for(int i=0;i<n;i++){
    	cout<<endl<<wt[i]<<ends<<val[i]<<endl;
	}
	cout<<endl;

    knapsack(val,wt,w,n);
}
