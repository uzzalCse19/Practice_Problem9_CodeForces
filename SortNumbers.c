#include <stdio.h>
int main()
{
int n,max=-100001,min=100001,a,b,c;
//scanf("%d",&n);
int arr[3];
for(int i=0;i<3;i++){
    scanf("%d",&arr[i]);
    a=arr[0],b=arr[1],c=arr[2];
//if(min>arr[i]) min=arr[i];
//if(max<arr[i]) max=arr[i];
}
for(int i=0;i<2;i++)
{
    for(int j=i+1;j<3;j++)
    {
        if(arr[i]>arr[j])
        {
            int tem=arr[i];
            arr[i]=arr[j];
            arr[j]=tem;
        }
    }
}
for(int i=0;i<3;i++) printf("%d\n",arr[i]);
printf("\n");
printf("%d\n%d\n%d\n",a,b,c);

}