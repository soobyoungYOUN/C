#include <stdio.h>
int main()
{
	FILE* fp;
	fp = fopen("c:\\Users\\kopo\\Desktop\\output.csv", "w");
	
	fprintf(fp, "Name, Math, English, Progamming\n");
	fprintf(fp, "%s, %d, %d, %d\n", "Hong", 90, 100, 70);
	fprintf(fp, "%s, %d, %d, %d\n", "Kong", 80, 120, 50);
	
	fclose(fp);
	return 0;
}
