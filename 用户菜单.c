#include"OW.h"

void u_menu()//用户菜单
{
	int mark=1;
	for( ; mark==1; )
	{
	
		switch(s_u_menu())
		{
			case 1:o_water();add_order();break;//订购水 
			case 2:my_order();break;//查看我的订单 
			case 3:my_info();break;//查看我的信息 
			case 4:help();break;//帮助 
			case 9:mark=0;break;//登录标志位清零 
			case 0:quit();break;//退出系统 
			default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
	}
 } 
 
 
int s_u_menu()//用户菜单的选择
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("用户菜单\n");
		printf("1.订购商品\n");
		printf("2.我的订单\n");
		printf("3.账户信息\n");
		printf("4.帮助\n");
		printf("9.退出登录\n");
		printf("0.退出程序\n");
		printf("\n输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
//	}
}
