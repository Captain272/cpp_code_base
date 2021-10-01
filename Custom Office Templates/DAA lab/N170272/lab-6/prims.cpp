#include<iostream>
#include<algorithm>
using namespace std;
#define infinity 999999;x
int graph[5][5] = { { 0, 2, 0, 6, 0 },  
                        { 2, 0, 3, 8, 5 },  
                        { 0, 3, 0, 0, 7 },  
                        { 6, 8, 0, 0, 9 },  
                        { 0, 5, 7, 9, 0 } }; 


struct node{
	int key;
	int min;
	int visited;
}*start=NULL;

struct node mst[5];

void prims(){
	int min=0;
	int i=0;
	int j=0;
	int count=0;
	int mad[5];
	for(int i=0;i<5;i++){
		mst[i].visited=0;
//		cout<<mst[i].visited;
	}
	mst[0].visited=1;
	mad[count]=0;
	while(count<5){
		j=0;
		min=1;
		for(int abhi=0;abhi<=count;abhi++){
//		if(abhi!=min){
		j=0;
		while(j<5){
			cout<<graph[mad[i]][min]<<ends<<graph[mad[abhi]][j]<<ends<<graph[mad[abhi]][j]<<ends<<mst[j].visited<<ends<<min<<endl;
			if(graph[mad[i]][min]>=graph[mad[abhi]][j] && graph[mad[abhi]][j]!=0 && mst[j].visited==0){
//				cout<<"Hello";
				min=j;
				i=abhi;
//				cout<<graph[mad[i]][min]<<ends;
			}
			j++;
		}		
//		}
		cout<<"\n";
		
	}
//		cout<<endl<<min<<endl;
			mst[min].visited=1;
//			mst[i].min=min;
			mad[count+1]=min;

		count++;
//		cout<<i<<ends;
	}
	for(int i=0;i<5;i++){
		cout<<mad[i];
	}
}



int main(){
	int arr[8];
	for(int i=0;i<8;i++){
		arr[i]=8-i;
}
prims();
}
