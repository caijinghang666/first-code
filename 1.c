#include <stdio.h>
#include <math.h>
 
double p ; //��ֵ
double f ; //��ֵ
double i ; //����
int n;  //����



void input()
{
	printf("��������ֵ:");
	scanf("%lf",&p);
	printf("����������:");
	scanf("%lf",&i);
	printf("����������:");
	scanf("%d",&n);

}

void end()
{
f=p*pow(1+i,n);
printf("��ֵΪ%lf",f);
}

int main(){
	input();
	end();
}