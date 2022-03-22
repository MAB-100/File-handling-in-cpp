#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
	ifstream FILE;
	FILE.open("C:\\Users\\ABBAS KHAN\\Desktop\\ATTENDENCE OF STUDENTS.txt",ios::binary);
	if(!FILE)
	{
		cout<<"UNABLE TO OPEN FILE";
		exit (1);	
		
	}	
	char C[10] ,N[20] , A[10];
	
	while(!FILE.eof())
	{
		
		FILE>>C>>N>>A;
		cout<<C<<"\t"<<N<<"\t"<<A<<endl;
		
	}
	FILE.close();
	getch();
	return 0;
}





