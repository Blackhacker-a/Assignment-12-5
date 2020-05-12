#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen duong n ");
	scanf("%d",&n);
	printf("Cac so nguyen duong chia het cho 3 nho hon %d la\n",n);
	// hoi nhu de luc dau thi se co vo han so vi co rat nhieu so am nho hon n
	for(int i=0;i<n;i++){
	    if(i%3==0){
		printf("%2d\t",i);
		}	
	}
}
