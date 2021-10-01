#include<iostream>
int main(){
	
	int stage=4,min;
	int cost[9],d[9],path[9];
	
	int c[9][9]={{}};
	cost[n]=0;
	for(int=n-1;i>=1;i++){
		min=32767;
		for(int k=i+1;k<=n;k++){
			if(c[i][k]!=0 && c[i][k]+c[k]<min){
				min=c[i][k]+c[k];
				d[i]=k;
			}
		}
		cost[i]=min;
	}
	p[i]=1;
	p[stage]=n;
	for(i=2;i<stage;i++){
		p[i]=p[d[i-1]];
 	}
	
}
