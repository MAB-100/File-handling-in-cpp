#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
	ifstream File;
	
	File.open("C:\\Users\\ABBAS KHAN\\Desktop\\TEXT FILE.txt");
	if(!File)
	{cout<<"UNABLE TO OPEN FILE";
	exit(1);
	}
	int x;
	
	while(File>>x )
	{
		cout<<x<<endl;
	}
	File.close();
	
	return 0;
}
