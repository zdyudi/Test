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
		//增容
		struct PeoInfo* ptr = realloc(ps->date, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->date = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//检测容量
	//满了 增加
	//不满 继续
	CheckCapacity(ps);
	printf("请输入名字:>");
	scanf("%s", ps->date[ps->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->date[ps->sz].age));
	printf("请输入性别:>");
	scanf("%s", ps->date[ps->sz].sex);
	printf("请输入电话:>");
	scanf("%s", ps->date[ps->sz].tele);
	printf("请输入地址:>");
	scanf("%s", ps->date[ps->sz].addr);

	ps->sz++;
	printf("添加成功\n");

	/*if (ps->sz == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->sz].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->sz].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->sz].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->sz].addr);

		ps->sz++;
		printf("添加成功\n");
	}*/
}

void ShowContact(const struct Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	return -1;//找不到
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回-1
	int pos = FindByName(ps, name);
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j <ps->sz-1 ; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->sz--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改的人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->date[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->date[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->date[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->date[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->date[pos].addr);

		printf("修改完成\n");
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