#include<stdio.h>//Bat nhap lai den khi dung so do ba canh tam giac
int main(){
	int a;
	int b;
	int c;
	printf("Hay nhap vao ba so a ");
	scanf("%d",&a);
	
	printf("Hay nhap vao ba so b ");
	scanf("%d",&b);
	
	
	printf("Hay nhap vao ba so c ");
	scanf("%d",&c);
	
	while(a+b<=c or b+c<=a or c+a<=b or a<0 or b<0 or c<0){
	printf("Ban da nhap sai hay nhap lai\n");
	printf("Hay nhap vao ba so a\n ");
	scanf("%d",&a);
	
	printf("Hay nhap vao ba so b\n ");
	scanf("%d",&b);
	
	
	printf("Hay nhap vao ba so c\n ");
	scanf("%d",&c);
	}
	if(a+b>c&&b+c>a&&c+a>b){
	    printf("Ban da nhap dung");
	}
	    
	}

	
	
	
	
	
	
	
