#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//double a  
double p ; //现值
double f ; //终值
double i ; //利率
int n;  //周数
int m;

window(){
printf("   ===----------------------===\n\n");
printf("\n\n\t单复利查询系统\n\n\n\n");
printf("   ===----------------------===\n\n\n\n\n");
system("pause");
}

int menu(){
char c;
do{
system("cls");
printf("=============================\n");
printf("\t|1.单利查询   \t|\n");
printf("\t|2.复利查询   \t|\n");
printf("\t|0.退出程序   \t|\n");
printf("\t|请你选择(0~2): |\n");
c=getchar();
}while(c<'0'||c>'2');
return (c-'0');

}


void danlia(){
	printf("请输入现值：");
	scanf("%lf",&p);
	printf("请输入利率：");
	scanf("%lf",&i);
	printf("请输入周数：");
	scanf("%d",&n);
	f=p*i*n+p;
	printf("终值为%lf",f);
}

void danlib(){
	printf("请输入终值：");
	scanf("%lf",&f);
	printf("请输入利率：");
	scanf("%lf",&i);
	printf("请输入周数：");
	scanf("%d",&n);
	p=f/(1+i*n);
	printf("现值为%lf",p);
}

void fulia()
{
	printf("请输入现值：");
	scanf("%lf",&p);
	printf("请输入利率：");
	scanf("%lf",&i);
	printf("请输入周数：");
	scanf("%d",&n);
	f=p*pow(1+i,n);
	printf("终值为%lf",f);
}

void fulib()
{
	printf("请输入终值：");
	scanf("%lf",&f);
	printf("请输入利率：");
	scanf("%lf",&i);
	printf("请输入周数：");
	scanf("%d",&n);
	p=f/pow(1+i,n);
	printf("现值为%lf",p);
}



int main(){
    
	window();
    switch(menu()){
	case 1:
	system("cls");
	printf("单利");
	printf("\t|-------------------|\n");
	printf("\t|1.现值查终值\t    |\n");
	printf("\t|2.终值查现值\t    |\n");
	printf("\t|-------------------|\n");
	printf("请选择计算方式：\n");

	scanf("%d",&m);
	if(m!=1 && m!=2)  
    {  
            printf("输入错误!\n");  
            break; 
	}    
	if(m==1){
		system("cls");
		danlia();
		break;
	
	}	
	 if(m==2){
		system("cls");
		danlib();
		break;
	}
	
	case 2:
	system("cls");
	printf("复利");
	printf("请选择计算方式：\n");
	printf("\t|-------------------|\n");
	printf("\t|1.现值查终值\t    |\n");
	printf("\t|2.终值查现值\t    |\n");
	printf("\t|-------------------|\n");
	printf("请选择计算方式：\n");
	scanf("%d",&m);
	
	if(m!=1 && m!=2)  
    {  
		printf("输入错误!\n");  
		 break;
	}   
	else if(m==1){
		system("cls");
		
		fulia();
		break;
		 
	}
	else if(m==2){
		system("cls");
		
		fulib();
		break;
		
	}

	case 0:
	printf("\n\t\tsee you!\n");
	printf("\n\t\t");
	system("pause");
	exit(0);
	
	
	
	}


}