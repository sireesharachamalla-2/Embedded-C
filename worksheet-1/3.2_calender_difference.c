#include<stdio.h>
#include<string.h>
void passDate(char *input,int *d,int *m,int *y)
{
        *d= *m= *y= 0;
        int i=0,val=0,cnt=0;
        char ch=0;
        for(int k=0;input[k];k++)
        {
                if(input[k]=='/' || input[k]=='-')
                {
                        ch=input[k];
                        break;
                }
        }
        if(ch==0)
        {
                printf("invalid format\n");
                return ;
        }
        while(input[i]!='\0')
        {
                if(input[i]==ch)
                {
                        if(cnt==0)
                                *d=val;
                        else if(cnt==1)
                                *m=val;
                        val=0;
                        cnt++;
                }
                else
                {
                        val=val*10+(input[i]-'0');
                }
                i++;
        }
         *y=val;
        if(ch=='/')
        {
                int temp=*d;
                *d=*m;
                *m=temp;
        }

}
int isLeap(int y)
{
        if((y%4==0 && y%100 !=0) ||(y%400==0))
                return 1;
        else
                return 0;
}
long countDays(int d,int m,int y)
{
        int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        long tot=y*365+d;
    
        for(int i=0;i<m-1;i++)
        {
                tot+=month[i];
        }
        tot+=(y/4)-(y/100)+(y/400);
        if(m>2 && isLeap(y))
        {
                tot+=1;
        }
        return tot;
}
long diff(int n)
{
        return (n<0)?-n:n;
}
int main()
{
        char date1[20],date2[20];
        int d1,d2,y1,y2,m1,m2;
        printf("enter first date (MM/DD/YYY or DD-MM-YYY): ");
        scanf("%s",date1);
        printf("enter second date (MM/DD/YYY or DD-MM-YYY): ");
        scanf("%s",date2);

        passDate(date1,&d1,&m1,&y1);
        passDate(date2,&d2,&m2,&y2);

        long days1=countDays(d1,m1,y1);
        long days2=countDays(d2,m2,y2);

        long difference=diff(days2-days1);
        printf("difference between two dates =%ld\n",difference);
        return 0;
}