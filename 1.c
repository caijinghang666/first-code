#include <stdio.h>
#include <math.h>
 
double p ; //现值
double f ; //终值
double i ; //利率
int n;  //周数



void input()
{
	printf("请输入现值:");
	scanf("%lf",&p);
	printf("请输入利率:");
	scanf("%lf",&i);
	printf("请输入周数:");
	scanf("%d",&n);

}

void end()
{
f=p*pow(1+i,n);
printf("终值为%lf",f);
}

int main(){
	input();
	end();
}