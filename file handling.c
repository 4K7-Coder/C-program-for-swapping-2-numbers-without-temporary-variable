#include <stdio.h>
int main()
{
	FILE *file1;
	FILE *file2;
	int bytes,i=0;
	file1=fopen("file1.txt","r");
	file2=fopen("file2.txt","w");
	
	if(file1==NULL)
	{
		printf("File doesn't exist");
		return 0;
	}
	printf("file1 opened");
	fseek(file1, 0, SEEK_END);
	bytes=ftell(file1);
	while(i<bytes)
	{
		i++;
		fseek(file1, -i, SEEK_END);
		fprintf(file2, "%c", fgetc(file1));
	}
	printf("\nOperation successful");
	fclose(file1);
	fclose(file2);
	return 0;
}
