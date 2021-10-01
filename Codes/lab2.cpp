#include<iostream>
#include<cmath>

using namespace std;



struct points 
{
	int x;
	int y;
};


float distance(struct points a,struct points b);

int main(){
	int n,threshold,flag,flag_1;
	cout<<"Enter the threshold value:"<<endl;
	cin>>threshold;
	cout<<"Enter the length of the set:"<<endl;
	cin>>n;

	struct points p[n];

	for (int i = 0; i < n; ++i)
	{
		cout<<"Enter the x , y coordinates of point "<<i+1<<endl;
		cin>>p[i].x>>p[i].y;
	}

	cout<<"Set is:"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<p[i].x<<" "<<p[i].y<<endl;
		/* code */
	}
	struct clusters
	{
		struct points cp[2];
		
	}c[n];

	int clusters_index = 0;
	int cp_index_count[n];
	int k = 0;
	
	for (int i = 0; i < n; i++)
	{
		flag = 0;
		for (int k = 0; k < clusters_index; ++k)
		{
			for (int l = 0; l < cp_index_count[k]; ++l)
			{
				if (c[k].cp[l].x == p[i].x && c[k].cp[l].y == p[i].y)
				{
					flag = 1;
					break;
					/* code */
				}
				/* code */
			}
			/* code */
		}

		if (flag ==1)
		{
			continue;
			/* code */
		}
		int cp_index = 0;
		// if(p[i].x == "This is the NUll byte" && p[i].y =="This is the NUll byte")
		// 	continue;
		for (int j = i+1; j < n; j++)
		{
			flag_1 = 0;
		for (int k = 0; k < clusters_index; ++k)
		{
			for (int l = 0; l < cp_index_count[k]; ++l)
			{
				if (c[k].cp[l].x == p[j].x && c[k].cp[l].y == p[j].y)
				{
					flag_1 = 1;
					break;
					/* code */
				}
				/* code */
			}
			/* code */
		}

		if (flag_1 ==1)
		{
			continue;
			/* code */
		}
			cout<<p[i].x<<" "<<p[i].y<<" "<<'\t'<<p[j].x<<" "<<p[j].y<<" "<<"\tTHE distance "<<distance(p[i],p[j])<<endl;
			if (distance(p[i],p[j])<=threshold)
			{
				c[clusters_index].cp[cp_index].x = p[j].x;
				c[clusters_index].cp[cp_index].y = p[j].y;
				// p[j].x = "This is the NUll byte";
				// p[j].y = "This is the NUll byte";
				cp_index++;
				/* code */
			}
			/* cod22222222222e */
		}
		if (cp_index >0)
		{
			c[clusters_index].cp[cp_index].x = p[i].x;
			c[clusters_index].cp[cp_index].y = p[i].y;
			cp_index++;
			// p[i].x = "This is the NUll byte";
			// p[i].y = "This is the NUll byte";
			clusters_index++;
			cp_index_count[k] = cp_index;
			k++;
			/* code */	
		}

		/* code */
	}

	for (int i = 0; i < clusters_index; ++i)
	{
		cout<<"Cluster "<<i+1<<endl;
		for (int j = 0; j < cp_index_count[i] ; ++j)
		{
			cout<<"X: "<<c[i].cp[j].x<<ends<<"y:"<<c[i].cp[j].y<<endl;
			/* code */
		}
		/* code */
	}

	cout<<"Outliers"<<endl;
	for (int i = 0; i < n; ++i)
	{
		int flag_2 = 0;
		for (int k = 0; k < clusters_index; ++k)
		{
			for (int l = 0; l < cp_index_count[k]; ++l)
			{
				if (c[k].cp[l].x == p[i].x && c[k].cp[l].y == p[i].y)
				{
					flag_2 = 1;
					break;
					/* code */
				}
				/* code */
			}
			/* code */
		}

		if (flag_2 ==1)
		{
			continue;
			/* code */
		}
		cout<<"X: "<<p[i].x<<" y: "<<p[i].y<<endl;

		/* code */
	}
	return 0;
}


float distance(struct points p1,struct points p2){
	int x_coordinates = pow((p1.x - p2.x),2);
	int y_coordinates = pow((p1.y - p2.y),2);
	float dis = pow((x_coordinates + y_coordinates),0.5);
	return dis;
}
