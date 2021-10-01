/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


#include<iostream>
#include<math.h>
using namespace std;

int board[20],count;

void print(int n){
// int i,j;
string bo[4];

for(int i=1;i<=n;++i){
	string hold;
	for (int j=1;j<=n;++j){
		if(board[i]==j){
			// cout<<"1";
			bo[i]+="Q";
		}
		else{
			bo[i]+=".";
			// cout<<'0';
		}
	}
	bo[i]=hold;
	cout<<board;
	
	for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<bo[i];
		}
		cout<<endl;
	}
	cout<<endl;
}
}

int place(int row,int col){
	for (int i=1;i<=row-1;++i){
		if(board[i]==col){
			return 0;
		}
		else{
			if(abs(board[i]-col)==abs(i-row)){
				return 0;
			}
		}
	}
	return 1;
}

void queen(int row,int n){
	for(int col=1;col<=n;++col){
		if(place(row,col)){
			board[row]=col;
			if(row==n){
				print(n);
			}
			else{
				queen(row+1,n);
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	queen(1,n);
	return 0;
}


/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


#include<iostream>
using namespace std;

int board[20],count=0;

void print(int n){
// int i,j;
// string bo[n];
if (count==0){
cout<<"[";
count++;
}
else{
	cout<<", [";
}

int lk=1;
for(int i=1;i<=n;++i){
	// string hold;
	if (i==1){
	cout<<"'";
	}
	else{
		cout<<" '";
	}
	// lk=0;
	for (int j=1;j<=n;++j){
		
		if(board[i]==j){
			// cout<<"1";
			cout<<"Q";
		}
		else{
			cout<<".";
			// cout<<'0';
		}
		
		// cout<<"'";
	}
	// lk=lk+1;
	cout<<"'";
	// bo[i]=hold;
	// cout<<board;
	if(lk<n){
	cout<<",";
	lk=lk+1;
	}
}
cout<<"]";
}

int place(int row,int col){
	for (int i=1;i<=row-1;++i){
		if(board[i]==col){
			return 0;
		}
		else{
			if(abs(board[i]-col)==abs(i-row)){
				return 0;
			}
		}
	}
	return 1;
}

void queen(int row,int n){
	for(int col=1;col<=n;++col){
		if(place(row,col)){
			board[row]=col;
			if(row==n){
				// cout<<"[";
				print(n);
				// cout<<",";
			}
			else{
				queen(row+1,n);
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	cout<<"[";
			
	queen(1,n);
		// print(n);
				cout<<"]";
	return 0;
}



