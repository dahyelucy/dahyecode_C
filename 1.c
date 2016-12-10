#include <stdio.h>
#include <stdlib.h>
/*
1/1 ->2|1
1/2 2/1 ->3|2
3/1 2/2 1/3 ->4|3
1/4 2/3 3/2 4/1 ->5|4
5/1 4/2 3/3 2/4 1/5 ->6|5
     2번째	

10=0--->4/1
11=1
12=2=1+2+3+4
13=1+2+3+4+5=-2--->3/3

14=1+2+3+4+5=-1--->2/4

12/1
11/2
9/3
6/4
2/5--->2번째분수

14/1
13/2
11/3
8/4
4/5--->4번째분수
*/
int main()
{
	int i=1;
	int sum,input,answer;

	scanf("%d", &input);

	while (1)
	{
		input = input - i;
		i++;
		if (input <= i)
			break;
	}
	//i는 층의 위치,input은 층 내 분수 위치
	sum = i + 1;//분수합..6이라하면...i는5

	if (i % 2 == 0)//짝수층이면
	{
		printf("%d/%d", input,sum-input);
	}
	else//홀수층이면
	{
		printf("%d/%d", sum-input,input);
	}
	
}