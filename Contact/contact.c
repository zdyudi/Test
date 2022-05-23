#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->sz = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

void AddContact(struct Contact* ps)
{
	if (ps->sz == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->sz].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->sz].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->sz].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->sz].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->sz].addr);

		ps->sz++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->sz; i++)
		{
			printf("%-20s\t %-4d\t %-5s\t %-12s\t %-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}