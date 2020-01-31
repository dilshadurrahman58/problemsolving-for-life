#include<iostream>

int main()
{   
	int noOfGames, Anton=0, Danik=0; 
	std::cin>>noOfGames;
	char gameDecision;
	for(int i=0; i<noOfGames; i++)
	{
		std::cin>>gameDecision;
		if(gameDecision == 'A')
			Anton++;
		else
			Danik++;
	}
	if (Anton>Danik)
	{
		std::cout<<"Anton"<<std::endl;
	}
	else if(Danik>Anton)
	{
		std::cout<<"Danik"<<std::endl;
	}
	else
	{
		std::cout<<"Friendship"<<std::endl;
	}

	return 0;

}