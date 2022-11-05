
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

void fun_11()
{
	int strnum[10];

	FILE* f = fopen("file_HW1.bin", "w");
	if (!f)
	{
		printf("error");
		exit(1);
	}

	for (int i = 0; i < 10; i++)
	{
		int num;
		scanf("%d", &num);
		strnum[i] = num;
		
	}
	int write = fwrite(strnum, sizeof(int), 10, f);
	fclose(f);

}

void fun_12()
{
	struct list
	{
		int val;
		char name[1000];
		short answer;
	};

	int  size = 3;
	struct list list[3];
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &list[i].val);
		scanf("%s",&list[i].name);
		scanf("%d", &list[i].answer);
		short answer = (list[i].val > 10 && strlen(list[i].name) > 5) ? (1) : (0);
		printf("%d", answer);

	}

}

void fun_13()
{
	int Numbers[15] = { 12,15,3,45,22,7,46,100,23,47,67,46,77,32,10 };
	FILE* f = fopen("file_4.bin", "w");
	if (!f)
	{
		exit(1);
	}
	int write = fwrite(Numbers, sizeof(int), 15, f);
	fclose(f);


}

void fun_14()
{
	int num =0;
	FILE* f = fopen("exe5_4.bin", "r");
	int r = 1;
	if (!f)
	{
		exit(1);
	}
	while (r != 0)
	{
	 r = fread(&num, sizeof(int), 1, f);
	 printf("%d", num);
	}
	fclose(f);

}

struct item
{
	int val;
	char name[1000];
	short answer;
};

void fun_15()
{
	printf("Enter how many items you need\n");
	int dynamic;
	scanf("%d",&dynamic);
	struct item* move = (struct item*)malloc(sizeof(struct item) * dynamic);
	struct item* origin;
	origin = move;
	if (!move)
	{
		exit(1);
	}

	for (int i = 0; i < dynamic; i++)
	{
		printf("enter a number\n");
		scanf("%d", &move->val);
		printf("enter name\n");
		scanf("%s", &move->name);
		printf("enter answer\n");
		scanf("%d", &move->answer);

		move++;

	}
	free(origin);
}

int main()
{
	fun_11();
	fun_12();
	fun_13();
	fun_14();
	fun_15();
	return 0;
}






