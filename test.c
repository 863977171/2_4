#define _CRT_SECURE_NO_WARNINGS 1

//strlen

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}




////ģ��ʵ��strcpy
//#include <assert.h>
//#include <stdio.h>
//
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//�ַ���������
//	char arr1[20] = "***************";
//	char arr2[] = "Hello Bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat-�ַ���׷��
//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.�ҵ�Ŀ��ռ�� \0
//	while (*dest)
//	{
//		dest++;//���ܺ�����ĺϲ�
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abc";
//	strcat(arr, arr);
//	printf("%s\n", arr);//�����Լ����Լ�׷�ӣ���Ϊ�Ḳ�ǵ� \0
//	return 0;
//}
//



//strcmp
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strcmp(const char* s1,const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	int ret = my_strcmp("abq", "abcdef");
//	printf("%d\n", ret);
//
//	//�ַ����Ƚ�-���ǱȽϳ���
//	//�Ƚϵ����ַ����ж�Ӧλ�õ��ַ���ASCIIֵ
//	//��ӦASCII ǰһ�����ں�һ��  ���� >0
//	//��ӦASCII ǰһ�����ں�һ��  ���� =0
//	//��ӦASCII ǰһ��С�ں�һ��  ���� <0
//
//	return 0;
//}


//strncat
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[20] = "Hello \0#####";
//	strncat(arr1, "abcdef", 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//strstr
//��һ���ַ���������һ���ַ���

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	
//	const char* cp = s1;
//
//	if (*s2 == '\0')
//		return (char*)s1;
//	
//	while (*cp)
//	{
//		const char* p1 = cp;
//		const char* p2 = s2;
//		while ((*p1)&&(*p2)&&(*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("�Ҳ����Ӵ�\n");
//	
//	return 0;
//}
//
//


//strtok
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "asdf@bitedu.tech";//@ . �ָ���
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr);
//	char* p = "@.";//�ָ����ļ���
//	/*printf("%s\n",strtok(arr2, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));*/
//	char* ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strerror-���󱨸溯��
//�Ѵ�����ת��Ϊ��Ӧ�Ĵ�����Ϣ�����ش�����Ϣ��Ӧ�ַ�������ʼ��ַ

