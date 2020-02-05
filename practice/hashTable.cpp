#include<iostream>
#include<list>
using namespace std;
class Hash
{ 
	int bucket;
	list<int> *table;
public:
	Hash(int item);
	void insertItem(int key);
	void deleteItem(int key);
	int hashFunction(int x)
	{
		return (x%bucket);
	}
	void displayHash();
};

Hash::Hash(int item)
{
	this->bucket = item;
	table = new list<int>[bucket];
}

void Hash::insertItem(int key)
{
	int index = hashFunction(key);
	table[index].push_back(key);
}

void Hash::deleteItem(int key)
{
	int index = hashFunction(key);
	list<int> :: iterator i; 
	for(i = table[index].begin(); i != table[index].end(); i++ )
	{
		if(*i = key)
			break;
	}
	if(i != table[index].end())
	{
		table[index].erase(i);
	}
}

void Hash::displayHash()
{
	for(int i; i<bucket; i++)
	{
		cout<<i;
		for(auto x: table[i])
		{
			cout<<" ---> "<<x;
		}
		cout<<endl;
	}
}
int main()
{
    int arr[] = {15, 11, 27, 8, 12};
    int length = sizeof(arr)/sizeof(arr[0]);
    Hash h(7);

    for( int i=0; i<length; i++)
    {
    	h.insertItem(arr[i]);
    }

    h.deleteItem(15);


    h.displayHash();


    return 0;

}
