#include <iostream>
using namespace std ; 

struct p
{
	int id ; 
	int atime ; 
	int btime ; 
	int startingTime ; 
	int endingTime ; 
	int completionTime ; 
} ; 

int currentTime = 0 ; 

void displayp(p p)
{
	cout <<"P" << p.id << "\t\t" << p.atime << "\t\t" << p.btime << "\t\t" ;
	cout << p.startingTime << "\t\t" << p.endingTime << "\t\t" << p.completionTime << endl; 
}
int main()
{
	int n ; 
	cout << "Enter the no p " ; 
	cin >> n; 
	
	p ps[n] ; 
	cout << "Enter the detials of the ps" << endl; 
	for(int i = 0 ; i < n ; i++)
	{
		cout << "Enter ID " ; 
		cin >> ps[i].id ; 
		cout << "Enter Arrival time " ; 
		cin >> ps[i].atime ; 
		cout << "Enter Burst time " ; 
		cin >> ps[i].btime ; 
	}
	
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n-1 ; j++)
		{
			if(ps[j].atime > ps[j+1].atime)
			{
				p temp = ps[j] ; 
				ps[j] = ps[j+1]  ; 
				ps[j+1] = temp ; 
			}
			else if(ps[j].atime == ps[j+1].atime)
			{
				if(ps[j].id > ps[j+1].id)
				{
					p temp = ps[j] ; 
					ps[j] = ps[j+1]  ; 
					ps[j+1] = temp ; 
				}
			}
		}
	}
	
	
	for(int i = 0 ; i < n ; i++)
	{
		ps[i].startingTime = currentTime ; 
		ps[i].endingTime   = currentTime + ps[i].btime  ; 
		ps[i].completionTime = ps[i].endingTime  - ps[i].atime ; 
		currentTime = ps[i].endingTime ; 
	}
	
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n-i-1 ; j++)
		{
			if(ps[j].id > ps[j+1].id)
			{
				p temp = ps[j] ; 
				ps[j] = ps[j+1]  ; 
				ps[j+1] = temp ; 
			}
		}
	}
	
	cout << "The table is : " << endl; 
	cout << "p id  Arrivale Time  Burst Time  Starting Time  Ending time  Completion Time \n" ; 
	for(int i = 0 ; i < n ; i++)
	{
		displayp(ps[i]) ; 
	}
	
}



