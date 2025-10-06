#include<string.h>
#define MAX 50
typedef struct contact
{
        char name[20];
        unsigned long int phone_num;
        char email[30];
}INFO;
INFO add_contact()
{
        INFO var;
        printf("enter the contact details you want to add\n");
        printf("enter the name:\n");
        scanf("%s",var.name);
        printf("enter the phone_num:\n");
        scanf("%lu",&var.phone_num);
        printf("enter the email:\n");
        scanf("%s",var.email);
        return var;
}
void search_contact(INFO var[],int cnt)
{
        char str[20];
        int flag=0;

        printf("enter name to search:\n");
        scanf("%s",str);

        for(int i=0;i<cnt;i++)
        {
                if((strcmp(var[i].name,str))==0)
                {

                        printf("name:%s\n",var[i].name);
                        printf("phone:%lu\n",var[i].phone_num);
                        printf("email:%s\n",var[i].email);
                        flag=1;
                        break;
                }
        }
        if(!flag)
        {
                printf("not found\n");
        }
}
void display(INFO var[],int cnt)
{
        if(cnt==0)
        {
                printf("no contacts\n");
                return ;
        }
        for(int i=0;i<cnt;i++)
        {
        printf("name=%s\n",var[i].name);
        printf("phone number:%lu\n",var[i].phone_num);
        printf("email:%s\n",var[i].email);
        }
}
int main()
{
        INFO var[MAX];
        int cnt=0;
        int choice;
        while(1)
        {
            printf("1.add 2.search 3.display 4.exit\n");
                printf("enter choice:\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:if(cnt<MAX)
                                var[cnt++]=add_contact();
                               break;
                        case 2:search_contact(var,cnt);
                               break;
                        case 3:display(var,cnt);
                               break;
                        case 4:exit(0);
                        default:printf("invalid input\n");
                }
        }
}