#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ORG_FILE "test.txt"
#define DST_FILE "test_back.txt"

int main(int argc, char* argv[])
{
	FILE* fpr;
	FILE* fpw;
	char file;

	if ((fpr = fopen(ORG_FILE, "rb")) == NULL)
		return 0;
	fpw = fopen(DST_FILE, "wb");

	while (!feof(fpr))
	{
		fread(&file, sizeof(char), 1, fpr);
		fwrite(&file, sizeof(char), 1, fpw);
	}

	fclose(fpr);
	fclose(fpw);

	return 0;
}
