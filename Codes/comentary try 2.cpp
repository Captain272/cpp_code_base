#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	std::string line;
	std::ifstream file_("comentary"); 
	if(file_.is_open())
	{
		while(getline(file_,line))
		{
			
			std::cout<<line<<'\n';
		}
		file_.close();
	}
	else
	{
	std::cout<<"file is not open";
	}
	std::cin.get();
}

