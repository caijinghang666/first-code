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
	int v;

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
			printf("����ѡ���ѯ��ʽ(0~2)�� ");
			c=getchar();
			}while(c<'0'||c>'2');
			return (c-'0');
			}


	void danlia()            //����ֵ��������
	{
		printf("��������ֵ��");
		scanf("%lf",&p);
		printf("���������ʣ�");
		scanf("%lf",&i);
		printf("������������");
		scanf("%d",&n);
		f=p*i*n+p;
		printf("��ֵΪ��%lf\n",f);
	}

	void danlib()         //����ֵ��������
	{
		printf("��������ֵ��");
		scanf("%lf",&f);
		printf("���������ʣ�");
		scanf("%lf",&i);
		printf("������������");
		scanf("%d",&n);
		p=f/(1+i*n);
		printf("��ֵΪ��%lf\n",p);
	}

	void fulia()              //����ֵ��������
	{
		printf("��������ֵ��");
		scanf("%lf",&p);
		printf("���������ʣ�");
		scanf("%lf",&i);
		printf("������������");
		scanf("%d",&n);
		f=p*pow(1+i,n);
		printf("��ֵΪ��%lf\n",f);
	}

	void fulib()           //����ֵ��������
	{
		printf("��������ֵ��");
		scanf("%lf",&f);
		printf("���������ʣ�");
		scanf("%lf",&i);
		printf("������������");
		scanf("%d",&n);
		p=f/pow(1+i,n);
		printf("��ֵΪ��%lf\n",p);
	}

	void fulic()            //��������������
	{
		printf("��������ֵ��");
		scanf("%lf",&p);
		printf("��������ֵ��");
		scanf("%lf",&f);
		printf("���������ʣ�");
		scanf("%lf",&i);
		n=log(f/p)/log(1+i);
		printf("����Ϊ��%d\n",n);
	}

	void fulid()            //�����ʣ�������
	{
		printf("��������ֵ��");
		scanf("%lf",&p);
		printf("��������ֵ��");
		scanf("%lf",&f);
		printf("������������");
		scanf("%d",&n);
		i=pow(f/p,1.0/n)-1;
		printf("����Ӧ���ڵ��ڣ�%lf\n",i);
	}

	void fulie()               //�������ֵ��������
	{
		system("cls");
		printf("\t �q���������������r\n");
		printf("\t��1.��Ͷ��        ��\n");
		printf("\t��2.��Ͷ��        ��\n");
		printf("\t�t�����������������s\n");
		printf("��ѡ��Ͷ�ʷ�ʽ��");
		scanf("%d",&m);
		if(m!=1 && m!=2)
		{  
			printf("�������!\n");  
			
		}
		else if(m==1)                    //��Ͷ
				{	
					int y;
					system("cls");
					printf("������ÿ��Ͷ���");
					scanf("%lf",&p);
					printf("���������ʣ�");	
					scanf("%lf",&i);
					printf("������������");
					scanf("%d",&y);
					f=0;
					for(j=1;j<=y;j++)
					{
						v=p+p*i;
						p=v;
						f=p+f;
					}
					printf("�����ֵΪ��%lf\n",f);
				}
				
		else if(m==2)                   //��Ͷ
				{
					system("cls");
					printf("������ÿ��Ͷ���");
					scanf("%lf",&p);
					printf("���������ʣ�");	
					scanf("%lf",&i);
					printf("�������������꣩��");
					scanf("%d",&n);
					f=0;
					for(j=1;j<=n;j++)
					{
						v=p+p*i;
						p=v;
						f=p+f;
					}
					printf("�����ֵΪ��%lf\n",f);
					
				}
					
		}

	int main()
	{
		window();
		switch(menu())
		{
			case 1:
				system("cls");
				printf("\n����");
				printf("\t �q���������������r\n");
				printf("\t��1.��ֵ����ֵ\t  ��\n");
				printf("\t��2.��ֵ����ֵ\t  ��\n");
				printf("\t�t�����������������s\n");
				printf("��ѡ����㷽ʽ�� ");
				scanf("%d",&m);
				if(m!=1 && m!=2)  
				{  
					printf("�������!\n");  
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
				printf("����");
				printf("\t �q�����������������r\n");
				printf("\t��1.��ֵ����ֵ\t    ��\n");
				printf("\t��2.��ֵ����ֵ\t    ��\n");
				printf("\t��3.��ѯ����  \t    ��\n");
				printf("\t��4.��ѯ����  \t    ��\n");
				printf("\t��5.��ѯ�����ֵ    ��\n");
				printf("\t�t�������������������s\n");
				printf("��ѡ����㷽ʽ��\n");
				scanf("%d",&m);
	
				if(m!=1 && m!=2 && m!=3 && m!=4 && m!=5)  
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

			case 0:
				printf("\n\t\tsee you!\n");
				printf("\n\t\t");
				system("pause");
				exit(0);
	
		}
	}
