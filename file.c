#include<studio.h>
int main()
{
FILE *fp;
char ch;
int i,pos;
fp=fopen("input.txt","r");
if(fp==NULL)
{
printf("file does not exists");
}
fseek(fp,0,SEEK_END);
pos=ftell(fp);
\\printf("current position is%d\n",pos);
i=0;
While(i<pos)
{
i++;
fseek(fp,-i,SEEK_END);
\\printf("%c",fgetc(fp));
ch=fgetc(fp);
printf("%c",ch);
}
return 0;
}
\\write the c program to copy the contents from one file to another file
#include<studio.h>
#include<stdlib h>
int main()
{
FILE *source file;
FILE *destFile;
Char sourcepath[100];
Char destpath[100];
Char ch;
printf("enter source file path:");
scanf("%s",sourcepath);
printf("enter destination file path:");
scanf("%s",destpath);
Source file=fopen(Sourcepath,"r");
destFile=fopen(destpath,"w");
if(SourceFile==NULL//destFile==NULL)
{
printf("\n unable to open file.\n");
printf("please check if file exists and you have read\write privelge.\n);
exit(EXIT_FAILURE);
}
\*
*COPY FILE CONTENTS CHARACTER BY CHARACTER
*\
ch=fgetc(SourceFile);
while(ch!=EOF)
{
fputc(ch,destFile);
ch=fgetc(sourceFile);
}
printf("\n Files copied successfully.\n");
fclose(SourceFile);
fclose(destFile);
return 0;
}
