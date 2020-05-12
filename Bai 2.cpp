#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen duong n ");
	scanf("%d",&n);
	printf("Cac so chia het cho 3 nho hon %d la\n",n);
	for(int i=-n;i<n;i++){
	    if(i%3==0){
		printf("%2d\t",i);
		}	
	}
}
