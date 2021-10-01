	//3. Delete the highear and second highear paid employees' records whose performance is Poor.
	for(int b=0;b<2;b++)
	{
	
	int phi=0,hi=0;
	for(int i=0;i<n;i++)
	{
		if (ar[i].performance=='P')
		{
			if(phi<ar[i].salary)
			{
				phi=ar[i].salary;
				hi=i;
			}
		}
		
	}


	for(int k=hi;k<n;k++)
	{
		ar[k].salary=ar[k+1].salary;
		ar[k].name=ar[k+1].name;
		ar[k].address=ar[k+1].address;
		ar[k].experience=ar[k+1].experience;
		ar[k].performance=ar[k+1].performance;
	}

}
for(int i=0;i<n-2;i++)
	{
		cout<<"Hello";
		cout<<"salary"<<ends<<"name"<<ends<<"address"<<ends<<"experience"<<ends<<"perfornamance"<<endl;
		cout<<ar[i].salary<<ends;
		cout<<ar[i].name<<ends;
		cout<<ar[i].address<<ends;
		cout<<ar[i].experience<<ends;
		cout<<ar[i].performance<<ends;
		cout<<"Hello";
		cout<<endl;
	}
	
