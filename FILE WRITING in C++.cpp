#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
	ofstream FILE;
	FILE.open("insert your file location here");
	if(!FILE)
	{
		cout<<"UNABLE TO OPEN FILE";
		
	}
	int i =0;
	while(i <= 100)
	{
		FILE<<"THIS IS A TEST TO CHECK IF THE FILE CREATION REALY WORKS!!"<<endl;
		i++;
	}
	FILE.close();
	return 0;
	getch();
		
}
