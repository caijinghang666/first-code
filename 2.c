#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//double a  
double p ; //��ֵ
double f ; //��ֵ
double i ; //����
int n;  //����
int m;

window(){
printf("   ===----------------------===\n\n");
printf("\n\n\t��������ѯϵͳ\n\n\n\n");
printf("   ===----------------------===\n\n\n\n\n");
system("pause");
}

int menu(){
char c;
do{
system("cls");
printf("=============================\n");
printf("\t|1.������ѯ   \t|\n");
printf("\t|2.������ѯ   \t|\n");
printf("\t|0.�˳�����   \t|\n");
printf("\t|����ѡ��(0~2): |\n");
c=getchar();
}while(c<'0'||c>'2');
return (c-'0');

}


void danlia(){
	printf("��������ֵ��");
	scanf("%lf",&p);
	printf("���������ʣ�");
	scanf("%lf",&i);
	printf("������������");
	scanf("%d",&n);
	f=p*i*n+p;
	printf("��ֵΪ%lf",f);
}

void danlib(){
	printf("��������ֵ��");
	scanf("%lf",&f);
	printf("���������ʣ�");
	scanf("%lf",&i);
	printf("������������");
	scanf("%d",&n);
	p=f/(1+i*n);
	printf("��ֵΪ%lf",p);
}

void fulia()
{
	printf("��������ֵ��");
	scanf("%lf",&p);
	printf("���������ʣ�");
	scanf("%lf",&i);
	printf("������������");
	scanf("%d",&n);
	f=p*pow(1+i,n);
	printf("��ֵΪ%lf",f);
}

void fulib()
{
	printf("��������ֵ��");
	scanf("%lf",&f);
	printf("���������ʣ�");
	scanf("%lf",&i);
	printf("������������");
	scanf("%d",&n);
	p=f/pow(1+i,n);
	printf("��ֵΪ%lf",p);
}



int main(){
    
	window();
    switch(menu()){
	case 1:
	system("cls");
	printf("����");
	printf("\t|-------------------|\n");
	printf("\t|1.��ֵ����ֵ\t    |\n");
	printf("\t|2.��ֵ����ֵ\t    |\n");
	printf("\t|-------------------|\n");
	printf("��ѡ����㷽ʽ��\n");

	scanf("%d",&m);
	if(m!=1 && m!=2)  
    {  
            printf("�������!\n");  
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
	printf("����");
	printf("��ѡ����㷽ʽ��\n");
	printf("\t|-------------------|\n");
	printf("\t|1.��ֵ����ֵ\t    |\n");
	printf("\t|2.��ֵ����ֵ\t    |\n");
	printf("\t|-------------------|\n");
	printf("��ѡ����㷽ʽ��\n");
	scanf("%d",&m);
	
	if(m!=1 && m!=2)  
    {  
		printf("�������!\n");  
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