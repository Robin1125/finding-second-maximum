#include<stdio.h>

int main()
{
	int n,i,max1,max2;
	int a[100];

	scanf("%d",&n);
	max1=-9999;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);

		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}
	}

	printf("%d",max2);


	return 0;
}
