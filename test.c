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




////模拟实现strcpy
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
//	//字符串拷贝的
//	char arr1[20] = "***************";
//	char arr2[] = "Hello Bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat-字符串追加
//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找到目标空间的 \0
//	while (*dest)
//	{
//		dest++;//不能和上面的合并
//	}
//	//2.追加
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
//	printf("%s\n", arr);//不能自己给自己追加，因为会覆盖掉 \0
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
//	//字符串比较-不是比较长度
//	//比较的是字符串中对应位置的字符的ASCII值
//	//对应ASCII 前一个大于后一个  返回 >0
//	//对应ASCII 前一个等于后一个  返回 =0
//	//对应ASCII 前一个小于后一个  返回 <0
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
//在一个字符串中找另一个字符串

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
//		printf("找不到子串\n");
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
//	char arr[] = "asdf@bitedu.tech";//@ . 分隔符
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr);
//	char* p = "@.";//分隔符的集合
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

//strerror-错误报告函数
//把错误码转换为对应的错误信息，返回错误信息对应字符串的起始地址

