#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int h, m;
	printf("�п�J�X�I�X��:");
	scanf("%d %d", &h, &m);
	
	if (h> 7&&h<17)
	{
		printf("�W�Ǯɶ�");
	}
	else if (h == 7&&m>=30)
	{
		printf("�W�Ǯɶ�");
	}

    else if(h>24){
        printf("��J�ɶ����~");
	}
	else if(m>=60){
        printf("��J�ɶ����~");
	}else 
		printf("��Ǯɶ�");
	system("pause");
	return 0;
}
