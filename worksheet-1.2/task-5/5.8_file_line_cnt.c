#include<stdio.h>
int main()
{
        FILE *fp=NULL;
        int cnt=0;
        char c,str[100];
        fp=fopen("file","r");
        if(fp==NULL)
        {
                printf("file not opened\n");
                return 1;
        }
/*      while((c=fgetc(fp))!=EOF)
        {
                if(c=='\n')
                        cnt++;
        }*/
        while((fgets(str,100,fp))!=NULL)
        {
                cnt++;
        }
        fclose(fp);
        printf("%d lines\n",cnt);
}