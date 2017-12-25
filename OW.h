#ifndef H_OW_HH
#define H_OW_HH

#include<stdio.h> 
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>

#define INITIAL_SIZE 100 
#define INCR_SIZE 50
#define N 5

struct User_info//�û��ṹ�� 
{
	char name[20];//�û��� 
	char password[20];//���� 
	char phone[20];//�绰���� 
	char address[50];//�ͻ���ַ 
}; 
typedef struct User_info UserInfo;

/*struct Ad_info//����Ա�ṹ��
{
	char name[20];//�û���
	char password[20];//���� 
 } 
typedef struct Ad_info AdInfo;*/

struct Water_info//Ͱװˮ�ṹ�� 
{
	char brand[50];//��Ʒ���� 
	float price;//�۸� 
};
typedef struct Water_info WtInfo;

struct Order_info//�����ṹ�� 
{ 
	char date[30];//�������� 
	char brand[50];//��Ʒ���� 
	int amount;//�������� 
	char name[20];//�µ��û�
	char phone[20];//�û��绰 
	char address[50];//�ͻ���ַ 
};
typedef struct Order_info OrInfo;

extern int numUsers;//�û���Ϣ������ 
extern int numWaters;//��Ʒ��Ϣ������ 
extern int numOrders;//������Ϣ������ 

extern UserInfo* records;//��¼�û���Ϣ������
extern WtInfo* w_records;//��¼��Ʒ��Ϣ������ 
extern OrInfo* o_records;//��¼������Ϣ������ 

extern UserInfo temp;//��¼���ӵ�һ���û���Ϣ 
extern WtInfo w_temp;//��¼���ӵ�һ����Ʒ��Ϣ 
extern OrInfo o_temp;//��¼���ӵ�һ��������Ϣ 

extern char savedTag;//��Ϣ�Ƿ��Ѿ�����ı�־��1Ϊδ���棬0Ϊ�Ա��� 
extern int arraySize;////�����С
extern char*fname;//�ļ����ֵ�ָ�� 

extern int u_i;//�û���Ϣ�����
extern int w_i;//��Ʒ��Ϣ����� 
extern int o_i[N];//������Ϣ�����,�����飬����¼���N=5��������

extern int land;//��¼��¼��ʽ1Ϊ�û���¼��4Ϊ����Ա��¼ 


void rg_menu();//��¼�˵�
int s_rg_menu();//��¼�˵���ѡ��
void user_login();//�û���¼
void ad_login();//����Ա��½
void ad_register();//����Աע�� 
void user_register();//�û�ע�� 

void u_menu();//�û��˵�
int s_u_menu();//�û��˵���ѡ��
void o_water();//������Ʒ���� 
void my_order();//�ҵĶ�������
void show_my_o();//��ʾ�ҵ����ж��� 
int s_my_order();//�û����������ѡ�� 
void my_info();//�˻���Ϣ���� 
int s_m_info();//�˻���Ϣѡ�� 
void help();//���� 

void ad_menu();//����Ա�˵� 
int s_ad_menu();//����Ա�˵���ѡ�� 
void ad_brand();//������Ʒ����
int s_ad_brand();//������Ʒѡ�� 
void ad_order();//���������� 
int s_ad_order();//��������ѡ�� 
void ad_user();//�����û����� 
int s_ad_user();//�����û���ѡ�� 

void add_water();//�����Ʒ���� 
void add_order();//��Ӷ�������
int a_saveRecords(int);//������Ϣ׷�Ӵ��溯�� 1Ϊ�û���2Ϊ��Ʒ��3Ϊ����������ɹ�����1��
//void addRecord();//�ڵ�ǰ�������µ���Ϣ 
 
int saveRecords(int);//�ļ��������溯�� 1Ϊ�û���2Ϊ��Ʒ��3Ϊ���� 
int loadRecords(int);//�ļ���ȡ���� 1Ϊ�û���2Ϊ��Ʒ��3Ϊ���� 
char* select_file(int);//ѡ���ļ����в��� 1Ϊ�û���2Ϊ��Ʒ��3Ϊ���� 

void display(int);//��ʾ��Ϣ���� 1Ϊ�û���2Ϊ��Ʒ��3Ϊ����
 
void showTable(int);//�����ͷ��Ϣ 1Ϊ�û���2Ϊ��Ʒ��3Ϊ����  

void removeRecord(int);//ɾ��ָ����Ϣ���� 1Ϊ�û���2Ϊ��Ʒ��3Ϊ���� 
void removeOrder(int);//ɾ��ָ����������

int findRecord(char*,int,int,int);//����ָ����Ϣ�������ڶ���int 1Ϊ�û���2Ϊ��Ʒ��3Ϊ����   
void queryInfo();//��ѯָ����Ϣ���� 

void copyURecord(UserInfo*,UserInfo*);//�����û���Ϣ���� 
void copyWRecord(WtInfo*,WtInfo*);//������Ʒ��Ϣ���� 
void copyORecord(OrInfo*,OrInfo*);//���ƶ�����Ϣ���� 
 
void modify_user();//�޸��û���Ϣ���� 
int s_m_user();//�޸��û���Ϣ�˵���ѡ�� 
void modify_water();//�޸���Ʒ��Ϣ���� 
int s_m_water();//�޸���Ʒ��Ϣ�˵���ѡ�� 
void modify_order(int);//�޸Ķ�����Ϣ����  
int s_m_order();//�޸Ķ�����Ϣ�˵���ѡ�� 

void clear_txt(int);//����ı� 
void quit();//�˳�����

#endif  //H_OW_HH

