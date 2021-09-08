#include <iostream>
#include <string>
#include <cstring>

void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

	
void swapnames(string *p1, string *p2)
{
	string temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
	
	
int letterrank(char letter)
{
	int rank = 0;
	char upperletter[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lowerletter[100] = "abcdefghijklmnopqrstuvwxyz";
	
	for(int i = 0; i < strlen(upperletter); ++i)
	{
		if(letter == upperletter[i])
		{
			rank = i + 1;
		}
	}
	
	for(int i = 1; i < strlen(lowerletter); ++i)
	{
		if(letter == lowerletter[i])
		{
			rank = i + 1;
		}
	}
	
	return rank;		
}
