#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    int l=strlen(str);
    for(int i=0;i<l-1;i++){
        for(int j=i+1;j<l;j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
    
    
    return 0;
}