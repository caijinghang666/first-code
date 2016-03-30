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
            printf("\t 请你选择查询方式(0~2)： ");
            c=getchar();
            }while(c<'0'||c>'2');
            return (c-'0');
    }

    void danlia()            //求终值（单利）
    {
        printf("\n\t请输入现值：");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t请输入利率：");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t请输入周数：");
				scanf("%d",&n);
				if(n>0)
				{
					f=p*i*n+p;
					printf("\n\t终值为：%0.2lf\n\n",f);
				}
				else printf("\t请输入大于0的值！\n");
				return ;
			}
			else printf("\t请输入大于0且小于1的值！\n");
			return ;
		}
		else printf("\t请输入大于0的值！\n");
		return ;
		
		

    }

    void danlib()         //求现值（单利）
    {
        printf("\n\t请输入终值：");
        scanf("%lf",&f);
		if(f>0)
		{
			printf("\t请输入利率：");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t请输入周数：");
				scanf("%d",&n);
				if(n>0)
				{
					p=f/(1+i*n);
					printf("\n\t现值为：%0.2lf\n\n",p);
				}
				else printf("\t请输入大于0的值！\n");
				return ;
			}
			else printf("\t请输入大于0且小于1的值！\n");
			return ;
		}
		else printf("\t请输入大于0的值！\n");
		return ;

	}

    void fulia()              //求终值（复利）
    {
        printf("\n\t请输入现值：");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t请输入利率：");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t请输入周数：");
				scanf("%d",&n);
				if(n>0)
				{
					f=p*pow(1+i,n);
					printf("\n\t终值为：%0.2lf\n\n",f);	
				}
				else printf("\t请输入大于0的值！\n");
				return ;
			}
			else printf("\t请输入大于0且小于1的值！\n");
			return ;
		}
		else printf("\t请输入大于0的值！\n");
		return ;
    }

    void fulib()           //求现值（复利）
    {
		printf("\n\t请输入终值：");
        scanf("%lf",&f);
		if(f>0)
		{
			printf("\t请输入利率：");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t请输入周数：");
				scanf("%d",&n);
				if(n>0)
				{
					p=f/pow(1+i,n);
					printf("\n\t现值为：%0.2lf\n\n",p);
				}
				else printf("\t请输入大于0的值！\n");
				return ;
			}
			else printf("\t请输入大于0且小于1的值！\n");
			return ;
		}
		else printf("\t请输入大于0的值！\n");
		return ;
     
    }

    void fulic()            //求周数（复利）
    {
        printf("\n\t请输入现值：");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t请输入终值：");
			scanf("%lf",&f);
			if(f>0 && p<f)
			{
				printf("\t请输入利率：");
				scanf("%lf",&i);
				if(i>0 && i<1)
				{
					n=log(f/p)/log(1+i);
					printf("\n\t周数为：%d\n\n",n);
				}
				else printf("\t请输入大于0且小于1的值！\n");
				return ;
			}
			else printf("\t请输入大于0且大于现值的值！\n");
			return ;
		}
		else printf("\t请输入大于0的值！\n");
		return ;
   
    }

    void fulid()            //求利率（复利）
    {
		printf("\n\t请输入现值：");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t请输入终值：");
			scanf("%lf",&f);
			if(f>0 && f>p)
			{
				printf("\t请输入周数：");
				scanf("%d",&n);
				if(n>0)
				{ 
					i=pow(f/p,1.0/n)-1;
					printf("\n\t利率应大于等于：%0.2lf\n\n",i);
					
				}
				else printf("\t请输入大于0的值！\n");
				return ;
			}
			else printf("\t请输入大于0且大于现值的值！\n");
			return ;
		}
		else printf("\t请输入大于0的值！\n");
		return ;


       
    }

    void fulie()               //求年金终值（复利）
    {
        system("cls");
        printf("\n\t ╭───────╮\n");
        printf("\t│1.月投资        │\n");
        printf("\t│2.年投资        │\n");
        printf("\t╰────────╯\n");
        printf("\t请选择投资方式：");
        scanf("%d",&m);
        if(m!=1 && m!=2)
        {  
            printf("\n\t输入错误!\n");  
            
        }

        else if(m==1)                    //月投
                {    
                    system("cls");
					printf("\n\t请输入每月投入金额：");
					scanf("%lf",&p);
					if(p>0)
					{
						printf("\t请输入年利率："); 
						scanf("%lf",&i);
						if(i>0 && i<1)
						{
							printf("\t请输入周数（年）：");
							scanf("%d",&n);
							if(n>0)
							{
								f=0;
								f=p*(1+i/12)*(-1+pow(1+i/12,n*12))/(i/12);
								printf("\n\t年金终值为：%0.2lf\n\n",f);
							}
							else printf("\t请输入大于0的值！\n");
							return ;
						}
						else printf("\t请输入大于0且小于1的值！\n");
						return ;
					}
					else printf("\t请输入大于0的值！\n");
					return ;
    
                }
                
        else if(m==2)                   //年投
                {
					system("cls");
					printf("\n\t请输入每年投入金额：");
					scanf("%lf",&p);
					if(p>0)
					{
						printf("\t请输入年利率：");
						scanf("%lf",&i);
						if(i>0 && i<1)
						{
							printf("\t请输入周数（年）：");
							scanf("%d",&n);
							if(n>0)
							{
								f=0;
								f=p*(1+i)*(-1+pow(1+i,n))/i;
								printf("\n\t年金终值为：%0.2lf\n\n",f);
							}
							else printf("\t请输入大于0的值！\n");
							return ;
						}
						else printf("\t请输入大于0且小于1的值！\n");
						return ;
					}
					else printf("\t请输入大于0的值！\n");
					return ;
                 }
	}

	void fulif()            //求每期应还款额
    {	
		double v;
		printf("\n\t请输入贷款数额：");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t请输入年利率：");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t请输入期限（年）：");
				scanf("%d",&n);
				if(n>0)
				{
					v=p*i/12*pow((1+i/12),n*12)/(pow((1+i/12),n*12)-1); 
					printf("\n\t每期应还款额：%0.2lf\n\n",v);	
				}
				else printf("\t请输入大于0的值！\n");
				return ;
			}
			else printf("\t请输入大于0且小于1的值！\n");
			return ;
		}
		else printf("\t请输入大于0的值！\n");
		return ;
	}

    int main()
    {
        window();
        switch(menu())
        {
            case 1:
                system("cls");
                printf("\n\t\t单利\n");
                printf("\t ╭───────╮\n");
                printf("\t│1.现值查终值\t  │\n");
                printf("\t│2.终值查现值\t  │\n");
                printf("\t╰────────╯\n");
                printf("\t请选择计算方式： ");
                scanf("%d",&m);
                if(m!=1 && m!=2)  
                {  
                    printf("\n\t输入错误!\n\n");  
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
                printf("\n\t\t复利");
                printf("\t\n\t ╭────────╮\n");
                printf("\t│1.现值查终值\t    │\n");
                printf("\t│2.终值查现值\t    │\n");
                printf("\t│3.查询周数  \t    │\n");
                printf("\t│4.查询利率  \t    │\n");
                printf("\t│5.查询年金终值    │\n");
				printf("\t│6.贷款每期应还款额│\n");
                printf("\t╰─────────╯\n");
                printf("\t请选择计算方式：");
                scanf("%d",&m);
				if( m<1 || m>6 )  
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

				else if(m==6)
                {
                    system("cls");
                    fulif();
                    break;
                }

            case 0:
                printf("\n\t\tsee you!\n");
                printf("\n\t\t");
                system("pause");
                exit(0);
        }
    }