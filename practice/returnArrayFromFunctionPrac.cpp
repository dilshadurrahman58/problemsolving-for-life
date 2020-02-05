#include<iostream>
using namespace std;

int* findEven(int* arr, int sizeOfArray)
{   
	int index=0;

	int indices[2];

	for(int i=0; i<sizeOfArray; i++)
	{
		if(arr[i]%2 != 0)
		{   
			//cout<<arr[2]<<endl;
			indices[index]= arr[i];
			cout<<"index: "<<index<<endl;
			cout<<"index value "<<i<<": "<<indices[index]<<endl;;
			index+=1;
		}
	}

	return indices;
}



int main()
{
     int array[5] = {0, 1, 2, 3, 4}; 
     int* newArray = findEven(array, 5);
     cout<<newArray[0]<<endl;
     cout<<newArray[1]<<endl;
     //cout<<newArray[2]<<endl;
}
