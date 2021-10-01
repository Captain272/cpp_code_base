#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,count;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    int l[n];
	    int k[n];
	    for(int a=0;a<n;a++)
	    {
	    	l[a]=0;
	    	k[a]=0;
		}
//	    cout<<n<<endl;
	    for(int j=0;j<n;j++)
	    {
	        cin>>l[j];
//	        cout<<l[j];
	    }
	    int max=0;
	    for(int g=0;g<n;g++)
	   {count=0;
	        for(int w=0;w<n;w++)
	        {
                if(l[g]<=l[w])
                {
                    count++;
                   // cout<<count<<endl;
                }
                k[g]=count*l[g];
                //cout<<k[g]<<endl;
	        }
	  
	  for(int l=0;l<n;l++)
	  {
	      if(max<k[l])
	        {
	          max=k[l];
	        }
	  }
	  
	}
	cout<<max;
	
}
	return 0;
}

