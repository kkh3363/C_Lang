#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main01(int argc, char* argv[])
{
	FILE* fpr ;
	FILE* fpw;
	char file;

	if (argc != 3)
	{
		printf("usage %s : ", argv[0]);
		printf("copyfile [source filename] [output filename]\n");
		return 0;
	}
	
	if ( (fpr = fopen(argv[1], "rb")) == NULL  ) 
		return 0;
	 fpw = fopen(argv[2], "wb");

	while (!feof(fpr))
	{
		fread(&file, sizeof(char), 1, fpr);
		fwrite(&file, sizeof(char), 1, fpw);
	}
	
	fclose(fpr);
	fclose(fpw);

	return 0;
}
