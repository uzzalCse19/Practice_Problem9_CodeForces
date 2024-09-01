#include <stdio.h>
int main()
{
int n,max=-100001,min=100001;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
if(min>arr[i]) min=arr[i];
if(max<arr[i]) max=arr[i];
}
printf("%d %d\n",min,max);

}