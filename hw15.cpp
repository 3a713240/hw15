#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int h, m;
	printf("請輸入幾點幾分:");
	scanf("%d %d", &h, &m);
	
	if (h> 7&&h<17)
	{
		printf("上學時間");
	}
	else if (h == 7&&m>=30)
	{
		printf("上學時間");
	}

    else if(h>24){
        printf("輸入時間錯誤");
	}
	else if(m>=60){
        printf("輸入時間錯誤");
	}else 
		printf("放學時間");
	system("pause");
	return 0;
}
