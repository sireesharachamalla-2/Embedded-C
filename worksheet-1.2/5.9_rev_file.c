#include<stdio.h>
int main()
{
        FILE *src,*dst;
        char srcFile[100],dstFile[100];
        long size;
        char ch;
        printf("enter source and destintion filrs\n");
        scanf("%s%s",srcFile,dstFile);
        src=fopen(srcFile,"r");
        if(src==NULL)
        {
                printf("file not opened\n");
                return 1;
        }
        dst=fopen(dstFile,"w");
        if(dst==NULL)
        {
                printf("cannot open destination file\n");
                fclose(src);
                return 1;
        }
        fseek(src,0,SEEK_END);
        size=ftell(src);
        for(long i=size-1;i>=0;i--)
        {
                fseek(src,i,SEEK_SET);
                ch=fgetc(src);
                fputc(ch,dst);
        }
        printf("%s\n",dstFile);
        fclose(src);
        fclose(dst);
}