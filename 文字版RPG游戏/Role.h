/*��������Ϣ��
ѧ�ţ�2017030401048
������������
*/

#pragma once;
#include "Skill.h"
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Role
{
private:
	int HP;//��ɫѪ��
	int RS;//��ɫ����
	int ATK;//��ɫ������
	int DEF;//��ɫ������
	int Score;//��ɫ�÷�	
	string Sex;//��ɫ�Ա�   
	string Name;//�������  
	string Profession;//��ɫְҵ   
	Skill *S;//����

public:
	string getSex();//�鿴�Ա�
	string getName();//�鿴����
	string getProfession();//�鿴ְҵ
	int getHP();//�鿴Ѫ��
	int getRS();//�鿴����
	int getATK();//�鿴������
	int getDEF();//�鿴������
	int getScore();//�鿴����
	string getSkillname(int x);
	int getSkillATK(int x);//�鿴�����˺�
	int getSkillRS(int x);//�鿴������������

	Role(int hp = 100, int rs = 100, int atk = 20, int def = 10, string sex = "0", string name = "0", string profession = "0");
	~Role();
	void setData(int hp, int rs, int atk, int def, string sex, string name, string profession);//������Ϣ
	void hpsub(int x); //Ѫ������
	void rssub(int x); //��������
	void addScore(int x);//��������
	void printfm();//�����ʦ����
	void printfw();//������ͼ���
	void getSkill(int x);
	void Skillchangename(int x,string y);
	void Skillchangeatk(int x,int y);
	void Skillchangers(int x,int y);
};