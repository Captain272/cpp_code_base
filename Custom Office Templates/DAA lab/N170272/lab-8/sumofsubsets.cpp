#include <iostream>
using namespace std;

void printSolution(int a[] , int s){
    printf("solution is : {");
    int i ; 
    for(i = 0 ; i < s; i++){
        printf("%d ," , a[i]);
    }
    printf("}\n");
}

void sumOfSubsets(int sum , int k , int remaningSumValue , int sol[] , int arr[] , int m ){
    sol[k] = 1 ;
    if( sum + arr[k] == m ){
        printSolution( sol , k+1);
    }
    else if( sum + arr[k] + arr[k+1] <= m){
        sumOfSubsets( sum+ arr[k] , k+1 , remaningSumValue-arr[k] , sol , arr , m  );
    }
    
    
    if((sum + remaningSumValue-arr[k] >= m) && (sum+arr[k+1]) <= m ){
        sol[k] = 0 ;
        sumOfSubsets(sum , k+1 ,remaningSumValue - arr[k] , sol , arr, m );
    }
    
}



int main() {
    int n , m ;
    printf("Enter n ");
    scanf("%d" , &n);
    
    printf("Enter the elements: ");
    int arr[n] , solution[n];
    int i , r = 0 ; 
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
        solution[i] = 0 ; 
        r += arr[i];
    }
    printf("Enter the sum value (m): ");
    scanf("%d" , &m);
    
    sumOfSubsets(0 , 0, r , solution , arr , m );
    

}
