/*Christine Nathasya Hutajulu*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int n,x,y,temp=0,k1,k2,mul=1;
	float mean,median;
	printf("Jumlah data = ");
	scanf("%d",&n);
	fflush(stdin);
	int input[n],sum=0;
	
	for(x=0;x<n;x++) {
		printf("Data ke-%d  : ",x+1);
		scanf("%d",&input[x]);
		sum=sum+input[x];
		mul=mul*input[x];
	}
	printf("\n\n");
	
	//Mengurutkan bilangan
	for(x=0;x<(n-1);x++) {
		for(y=x;y<n;y++) {
			if(input[y]<input[x]) {
				temp=input[x];
				input[x]=input[y];
				input[y]=temp;
			}
		}
	}
	printf("Data setelah diurutkan : ");
	for(x=0;x<n;x++) {
		printf("%d  ",input[x]);
	}
	printf("\n");
	
	//Mean
	mean=(float)sum/n;
	printf("\nNilai rata-rata\t= %.2f\n",mean);
	
	//Median	
	if(n%2==1) {
		k2=(n/2);
		median=input[k2];
		printf("\nNilai median\t= %.2f",median);
	}
	
	else if(n%2==0) {
		k1=(n/2)-1;
		k2=(n/2);
		median=((float)input[k1]+(float)input[k2])/2;
		printf("\nNilai median\t= %.2f",median);
	}
	printf("\n");
	
	//Perkalian bilangan	
	printf("\nHasil perkalian\t= %d",mul);


	return 0;
}
