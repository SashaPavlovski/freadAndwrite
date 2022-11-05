#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)







void fun ()
{
	short num = 0;
	short num1 = 0;
	scanf("%hi", &num);
	FILE* f = fopen("fileShort.bin", "w");
	if (!f)
	{
		exit(1);
	}
	fwrite(&num, sizeof(short), 1, f);
	fclose(f);
	
	FILE* f1 = fopen("fileShort.bin", "r");
	if (!f1)
	{
		exit(1);
	}

	int read = fread(&num1, sizeof(short), 1, f1);
	fclose(f1);

	num1 = num1 * num1;
	printf("%d", num1);

}



void fun_3()
{
	int num=0;
	FILE* f = fopen("fileLoop.bin", "w");
	for (int i = 0; i < 10; i++)
	{

		scanf("%d",&num);
		fwrite(&num, sizeof(int), 1, f);
	}
	fclose(f);
}




void fun_4()
{
	int num = 0;
	FILE* f = fopen("file2.bin", "r");
	for (int i = 0; i < 10; i++)
	{
		int read = fread(&num,sizeof(int), 1, f);
		printf("%d ", num);
	}
		
	fclose(f);
}








int main_efr()
{
	//fun();
	//fun_3();
	//fun_4();
	return 0;
}












