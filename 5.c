#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
    double p ; //��ֵ
    double f ; //��ֵ
    double i ; //����
    int n;  //����
    int m;
    int j;

    window()             //�������
    {
        printf("   �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
        printf("   �U                            �U\n");
        printf("   �U  ��ӭʹ��~                 �U\n");
        printf("   �U                            �U\n");
        printf("   �U                            �U\n");
        printf("   �U                            �U\n");
        printf("   �U         ������������ѯϵͳ �U\n");
        printf("   �U                            �U\n");
        printf("   �U                            �U\n");  
        printf("   �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n\n\n\n\n");
        system("pause");
    }

    int menu()         //����ѡ�����
    {
        char c;
        do{
            system("cls");
            printf("\t �q�������������r\n");
            printf("\t��1.������ѯ  \t��\n");
            printf("\t��2.������ѯ  \t��\n");
            printf("\t��0.�˳�����  \t��\n");
            printf("\t�t���������������s\t\n");
            printf("\t ����ѡ���ѯ��ʽ(0~2)�� ");
            c=getchar();
            }while(c<'0'||c>'2');
            return (c-'0');
    }

    void danlia()            //����ֵ��������
    {
        printf("\n\t��������ֵ��");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t���������ʣ�");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t������������");
				scanf("%d",&n);
				if(n>0)
				{
					f=p*i*n+p;
					printf("\n\t��ֵΪ��%0.2lf\n\n",f);
				}
				else printf("\t���������0��ֵ��\n");
				return ;
			}
			else printf("\t���������0��С��1��ֵ��\n");
			return ;
		}
		else printf("\t���������0��ֵ��\n");
		return ;
		
		

    }

    void danlib()         //����ֵ��������
    {
        printf("\n\t��������ֵ��");
        scanf("%lf",&f);
		if(f>0)
		{
			printf("\t���������ʣ�");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t������������");
				scanf("%d",&n);
				if(n>0)
				{
					p=f/(1+i*n);
					printf("\n\t��ֵΪ��%0.2lf\n\n",p);
				}
				else printf("\t���������0��ֵ��\n");
				return ;
			}
			else printf("\t���������0��С��1��ֵ��\n");
			return ;
		}
		else printf("\t���������0��ֵ��\n");
		return ;

	}

    void fulia()              //����ֵ��������
    {
        printf("\n\t��������ֵ��");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t���������ʣ�");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t������������");
				scanf("%d",&n);
				if(n>0)
				{
					f=p*pow(1+i,n);
					printf("\n\t��ֵΪ��%0.2lf\n\n",f);	
				}
				else printf("\t���������0��ֵ��\n");
				return ;
			}
			else printf("\t���������0��С��1��ֵ��\n");
			return ;
		}
		else printf("\t���������0��ֵ��\n");
		return ;
    }

    void fulib()           //����ֵ��������
    {
		printf("\n\t��������ֵ��");
        scanf("%lf",&f);
		if(f>0)
		{
			printf("\t���������ʣ�");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t������������");
				scanf("%d",&n);
				if(n>0)
				{
					p=f/pow(1+i,n);
					printf("\n\t��ֵΪ��%0.2lf\n\n",p);
				}
				else printf("\t���������0��ֵ��\n");
				return ;
			}
			else printf("\t���������0��С��1��ֵ��\n");
			return ;
		}
		else printf("\t���������0��ֵ��\n");
		return ;
     
    }

    void fulic()            //��������������
    {
        printf("\n\t��������ֵ��");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t��������ֵ��");
			scanf("%lf",&f);
			if(f>0 && p<f)
			{
				printf("\t���������ʣ�");
				scanf("%lf",&i);
				if(i>0 && i<1)
				{
					n=log(f/p)/log(1+i);
					printf("\n\t����Ϊ��%d\n\n",n);
				}
				else printf("\t���������0��С��1��ֵ��\n");
				return ;
			}
			else printf("\t���������0�Ҵ�����ֵ��ֵ��\n");
			return ;
		}
		else printf("\t���������0��ֵ��\n");
		return ;
   
    }

    void fulid()            //�����ʣ�������
    {
		printf("\n\t��������ֵ��");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t��������ֵ��");
			scanf("%lf",&f);
			if(f>0 && f>p)
			{
				printf("\t������������");
				scanf("%d",&n);
				if(n>0)
				{ 
					i=pow(f/p,1.0/n)-1;
					printf("\n\t����Ӧ���ڵ��ڣ�%0.2lf\n\n",i);
					
				}
				else printf("\t���������0��ֵ��\n");
				return ;
			}
			else printf("\t���������0�Ҵ�����ֵ��ֵ��\n");
			return ;
		}
		else printf("\t���������0��ֵ��\n");
		return ;


       
    }

    void fulie()               //�������ֵ��������
    {
        system("cls");
        printf("\n\t �q���������������r\n");
        printf("\t��1.��Ͷ��        ��\n");
        printf("\t��2.��Ͷ��        ��\n");
        printf("\t�t�����������������s\n");
        printf("\t��ѡ��Ͷ�ʷ�ʽ��");
        scanf("%d",&m);
        if(m!=1 && m!=2)
        {  
            printf("\n\t�������!\n");  
            
        }

        else if(m==1)                    //��Ͷ
                {    
                    system("cls");
					printf("\n\t������ÿ��Ͷ���");
					scanf("%lf",&p);
					if(p>0)
					{
						printf("\t�����������ʣ�"); 
						scanf("%lf",&i);
						if(i>0 && i<1)
						{
							printf("\t�������������꣩��");
							scanf("%d",&n);
							if(n>0)
							{
								f=0;
								f=p*(1+i/12)*(-1+pow(1+i/12,n*12))/(i/12);
								printf("\n\t�����ֵΪ��%0.2lf\n\n",f);
							}
							else printf("\t���������0��ֵ��\n");
							return ;
						}
						else printf("\t���������0��С��1��ֵ��\n");
						return ;
					}
					else printf("\t���������0��ֵ��\n");
					return ;
    
                }
                
        else if(m==2)                   //��Ͷ
                {
					system("cls");
					printf("\n\t������ÿ��Ͷ���");
					scanf("%lf",&p);
					if(p>0)
					{
						printf("\t�����������ʣ�");
						scanf("%lf",&i);
						if(i>0 && i<1)
						{
							printf("\t�������������꣩��");
							scanf("%d",&n);
							if(n>0)
							{
								f=0;
								f=p*(1+i)*(-1+pow(1+i,n))/i;
								printf("\n\t�����ֵΪ��%0.2lf\n\n",f);
							}
							else printf("\t���������0��ֵ��\n");
							return ;
						}
						else printf("\t���������0��С��1��ֵ��\n");
						return ;
					}
					else printf("\t���������0��ֵ��\n");
					return ;
                 }
	}

	void fulif()            //��ÿ��Ӧ�����
    {	
		double v;
		printf("\n\t������������");
        scanf("%lf",&p);
		if(p>0)
		{
			printf("\t�����������ʣ�");
			scanf("%lf",&i);
			if(i>0 && i<1)
			{
				printf("\t���������ޣ��꣩��");
				scanf("%d",&n);
				if(n>0)
				{
					v=p*i/12*pow((1+i/12),n*12)/(pow((1+i/12),n*12)-1); 
					printf("\n\tÿ��Ӧ����%0.2lf\n\n",v);	
				}
				else printf("\t���������0��ֵ��\n");
				return ;
			}
			else printf("\t���������0��С��1��ֵ��\n");
			return ;
		}
		else printf("\t���������0��ֵ��\n");
		return ;
	}

    int main()
    {
        window();
        switch(menu())
        {
            case 1:
                system("cls");
                printf("\n\t\t����\n");
                printf("\t �q���������������r\n");
                printf("\t��1.��ֵ����ֵ\t  ��\n");
                printf("\t��2.��ֵ����ֵ\t  ��\n");
                printf("\t�t�����������������s\n");
                printf("\t��ѡ����㷽ʽ�� ");
                scanf("%d",&m);
                if(m!=1 && m!=2)  
                {  
                    printf("\n\t�������!\n\n");  
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
                printf("\n\t\t����");
                printf("\t\n\t �q�����������������r\n");
                printf("\t��1.��ֵ����ֵ\t    ��\n");
                printf("\t��2.��ֵ����ֵ\t    ��\n");
                printf("\t��3.��ѯ����  \t    ��\n");
                printf("\t��4.��ѯ����  \t    ��\n");
                printf("\t��5.��ѯ�����ֵ    ��\n");
				printf("\t��6.����ÿ��Ӧ����\n");
                printf("\t�t�������������������s\n");
                printf("\t��ѡ����㷽ʽ��");
                scanf("%d",&m);
				if( m<1 || m>6 )  
                {  
                    printf("�������!\n");  
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