
#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
}
int main()
{
	int q,w,e,r,t;
	scanf("%d %d %d %d %d",&q,&w,&e,&r,&t);
	int a[]={q,w,e,r,t};
	int n=sizeof(a)/sizeof(int),i;
	sort(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

