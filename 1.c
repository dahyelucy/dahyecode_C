#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,distance,a,b,share,answer;
	
	scanf("%d", &num);

	while (num)
	{
		scanf("%d %d", &a, &b);
		if (b < a)
		{
			break;
		}
		distance = b - a;
		share = distance / 2;
		//0¿¡¼­ ½ÃÀÛ
		if (distance == 1)
		{
			answer = 1;
		}
		//distance°¡ Â¦¼ö..Â¦Â¦,È¦È¦·Î µé¾î¿À´Â °æ¿ì
		else if (distance % 2 == 0)
		{
			if (a = 0)
			{
				answer = share + 2;
			}
			answer = share + 1;
		}
		else
		{
			answer = share + 2;
		}
		printf("%d\n", answer);
		num--;
		if (num == 0)
			break;
	}


}