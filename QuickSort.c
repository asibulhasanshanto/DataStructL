#include<stdio.h>

int main()
{
	int arr[100]={5,2,57,63,45,34,6767,245,67,53};
	for(int i=0;i<10;i++)
	{
		printf("%d \n",arr[i] );
	}

	int Left,Right,N=10,Beg=0,End=9,Loc,Temp;

	Left = Beg;
	Right = End;
	Loc = Beg;
	step2:
	while(arr[Loc]<=arr[Right] && Loc != Right)
	{
		Right = Right - 1;
	}
	if(Loc == Right)
	{
		for(int i=0;i<N;i++)
		{
			printf("%d \n",arr[i] );
		}
		return;
	}

	if(arr[Loc] > arr[Right])
	{
		Temp = arr[Loc];
		arr[Loc] = arr[Right];
		arr[Right] = Temp;

		Loc = Right;
		goto step3;
	}
	step3:
	while(arr[Left] <= arr[Loc] && Left !=Loc)
	{
		Left = Left + 1;
	}
	if(Left == Loc)
	{
		for(int i=0;i<N;i++)
		{
			printf("%d \n",arr[i] );
		}
		return;
	}
	if (arr[Left] > arr[Loc])
	{
		Temp = arr[Loc];
		arr[Loc] = arr[Left];
		arr[Left] = Temp;

		Loc = Left;
		goto step2;
	}

	for(int i=0;i<N;i++)
	{
		printf("%d \n",arr[i] );
	}

	
}