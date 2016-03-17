#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
	double p ; //现值
	double f ; //终值
	double i ; //利率
	
	int n;  //周数
	int m;
	int j;
	int v;

	window()             //进入界面
	{
		printf("   ╔══════════════╗\n");
		printf("   ║                            ║\n");
		printf("   ║  欢迎使用~                 ║\n");
		printf("   ║                            ║\n");
		printf("   ║                            ║\n");
		printf("   ║                            ║\n");
		printf("   ║         ——单复利查询系统 ║\n");
		printf("   ║                            ║\n");
		printf("   ║                            ║\n");  
		printf("   ╚══════════════╝\n\n\n\n\n");
		system("pause");
	}

	int menu()         //计算选择界面
	{
		char c;
		do{
			system("cls");
			printf("\t ╭──────╮\n");
			printf("\t│1.单利查询  \t│\n");
			printf("\t│2.复利查询  \t│\n");
			printf("\t│0.退出程序  \t│\n");
			printf("\t╰───────╯\t\n");
			printf("请你选择查询方式(0~2)： ");
			c=getchar();
			}while(c<'0'||c>'2');
			return (c-'0');
			}


	void danlia()            //求终值（单利）
	{
		printf("请输入现值：");
		scanf("%lf",&p);
		printf("请输入利率：");
		scanf("%lf",&i);
		printf("请输入周数：");
		scanf("%d",&n);
		f=p*i*n+p;
		printf("终值为：%lf\n",f);
	}

	void danlib()         //求现值（单利）
	{
		printf("请输入终值：");
		scanf("%lf",&f);
		printf("请输入利率：");
		scanf("%lf",&i);
		printf("请输入周数：");
		scanf("%d",&n);
		p=f/(1+i*n);
		printf("现值为：%lf\n",p);
	}

	void fulia()              //求终值（复利）
	{
		printf("请输入现值：");
		scanf("%lf",&p);
		printf("请输入利率：");
		scanf("%lf",&i);
		printf("请输入周数：");
		scanf("%d",&n);
		f=p*pow(1+i,n);
		printf("终值为：%lf\n",f);
	}

	void fulib()           //求现值（复利）
	{
		printf("请输入终值：");
		scanf("%lf",&f);
		printf("请输入利率：");
		scanf("%lf",&i);
		printf("请输入周数：");
		scanf("%d",&n);
		p=f/pow(1+i,n);
		printf("现值为：%lf\n",p);
	}

	void fulic()            //求周数（复利）
	{
		printf("请输入现值：");
		scanf("%lf",&p);
		printf("请输入终值：");
		scanf("%lf",&f);
		printf("请输入利率：");
		scanf("%lf",&i);
		n=log(f/p)/log(1+i);
		printf("周数为：%d\n",n);
	}

	void fulid()            //求利率（复利）
	{
		printf("请输入现值：");
		scanf("%lf",&p);
		printf("请输入终值：");
		scanf("%lf",&f);
		printf("请输入周数：");
		scanf("%d",&n);
		i=pow(f/p,1.0/n)-1;
		printf("利率应大于等于：%lf\n",i);
	}

	void fulie()               //求年金终值（复利）
	{
		system("cls");
		printf("\t ╭───────╮\n");
		printf("\t│1.月投资        │\n");
		printf("\t│2.年投资        │\n");
		printf("\t╰────────╯\n");
		printf("请选择投资方式：");
		scanf("%d",&m);
		if(m!=1 && m!=2)
		{  
			printf("输入错误!\n");  
			
		}
		else if(m==1)                    //月投
				{	
					int y;
					system("cls");
					printf("请输入每月投入金额：");
					scanf("%lf",&p);
					printf("请输入利率：");	
					scanf("%lf",&i);
					printf("请输入月数：");
					scanf("%d",&y);
					f=0;
					for(j=1;j<=y;j++)
					{
						v=p+p*i;
						p=v;
						f=p+f;
					}
					printf("年金终值为：%lf\n",f);
				}
				
		else if(m==2)                   //年投
				{
					system("cls");
					printf("请输入每年投入金额：");
					scanf("%lf",&p);
					printf("请输入利率：");	
					scanf("%lf",&i);
					printf("请输入周数（年）：");
					scanf("%d",&n);
					f=0;
					for(j=1;j<=n;j++)
					{
						v=p+p*i;
						p=v;
						f=p+f;
					}
					printf("年金终值为：%lf\n",f);
					
				}
					
		}

	int main()
	{
		window();
		switch(menu())
		{
			case 1:
				system("cls");
				printf("\n单利");
				printf("\t ╭───────╮\n");
				printf("\t│1.现值查终值\t  │\n");
				printf("\t│2.终值查现值\t  │\n");
				printf("\t╰────────╯\n");
				printf("请选择计算方式： ");
				scanf("%d",&m);
				if(m!=1 && m!=2)  
				{  
					printf("输入错误!\n");  
					break; 
				}    
				else if(m==1)
				{
					system("cls");
					danlia();
					break;
				}
				
				else if(m==2)
				{
					system("cls");
					danlib();
					break;
				}
	 
			case 2:
				system("cls");
				printf("复利");
				printf("\t ╭────────╮\n");
				printf("\t│1.现值查终值\t    │\n");
				printf("\t│2.终值查现值\t    │\n");
				printf("\t│3.查询周数  \t    │\n");
				printf("\t│4.查询利率  \t    │\n");
				printf("\t│5.查询年金终值    │\n");
				printf("\t╰─────────╯\n");
				printf("请选择计算方式：\n");
				scanf("%d",&m);
	
				if(m!=1 && m!=2 && m!=3 && m!=4 && m!=5)  
				{  
					printf("输入错误!\n");  
					break;
				}
	
				else if(m==1)
				{
					system("cls");
					fulia();
					break;
				}

				else if(m==2)
				{
					system("cls");
					fulib();
					break;
				}

				else if(m==3)
				{
					system("cls");
					fulic();
					break;
				}

				else if(m==4)
				{
					system("cls");
					fulid();
					break;
				}

				else if(m==5)
				{
					system("cls");
					fulie();
					break;
				}

			case 0:
				printf("\n\t\tsee you!\n");
				printf("\n\t\t");
				system("pause");
				exit(0);
	
		}
	}
