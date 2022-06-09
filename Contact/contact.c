#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"

void InitContact(struct Contact* ps)
{
	ps->date = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	if (ps->date == NULL)
	{
		return;
	}
	ps->sz = 0;
	ps->capacity = DEFAULT_SZ;
	//"   .txt"
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps);

void LoadContact(struct Contact* ps) 
{
	struct PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//read
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->date[ps->sz] = tmp;
		ps->sz++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->sz == ps->capacity)
	{
		//����
		struct PeoInfo* ptr = realloc(ps->date, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->date = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//�������
	//���� ����
	//���� ����
	CheckCapacity(ps);
	printf("����������:>");
	scanf("%s", ps->date[ps->sz].name);
	printf("����������:>");
	scanf("%d", &(ps->date[ps->sz].age));
	printf("�������Ա�:>");
	scanf("%s", ps->date[ps->sz].sex);
	printf("������绰:>");
	scanf("%s", ps->date[ps->sz].tele);
	printf("�������ַ:>");
	scanf("%s", ps->date[ps->sz].addr);

	ps->sz++;
	printf("��ӳɹ�\n");

	/*if (ps->sz == MAX)
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
	}*/
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
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr);
		}
	}
}

static int FindByName(struct Contact*ps,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ�������-1
	int pos = FindByName(ps, name);
	//2.ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j <ps->sz-1 ; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t %-4d\t %-5s\t %-12s\t %-20s\n",
			ps->date[pos].name,
			ps->date[pos].age,
			ps->date[pos].sex,
			ps->date[pos].tele,
			ps->date[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˵���Ϣ������\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->date[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->date[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->date[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->date[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->date[pos].addr);

		printf("�޸����\n");
	}
}

void DestroyContact(struct Contact* ps)
{
	free(ps->date);
	ps->date = NULL;
}

void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;
	}
	//write
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		fwrite(&(ps->date[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}