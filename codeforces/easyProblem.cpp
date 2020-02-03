#include<iostream>
using namespace std;

int main()
{
	int numberOfAskedPerson;
	int response, flag=0;
	cin>>numberOfAskedPerson;
	for(int i=0; i<numberOfAskedPerson; i++)
	{
		cin>>response;
		if(response == 1)
		{
			flag=1;
		}
    }

    if(flag == 0)
    	cout<<"EASY"<<endl;
    else 
    	cout<<"HARD"<<endl;
    return 0;
}