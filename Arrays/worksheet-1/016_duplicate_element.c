/*Find duplicate elements
 Write a C program to find all duplicate elements in an array.
Sample data:
Input: 1 2 3 2 4 1
Expected output:
Duplicate elements: 1 2*/

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,cnt=0,j;
    printf("Enter the elements:")
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==temp)
            cnt++;  
        }
        if((cnt>1))
        printf("%d ",arr[i]);     
    }
}