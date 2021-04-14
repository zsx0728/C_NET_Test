#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize)
{
	int	count=0;			//计数
	int	length=0, line_number=0;	//最短字符串的次序
	char	* common_string;		//指向公共前缀
	char	temp={0};

	for (count = 0; count < strsSize; count++ )
	{
		if (count == 0)
			length = strlen(*strs);
		else if (count != 0 && strlen(*(strs+count)) < length)
		{
			length = strlen(*(strs+count));
		}
	}
	printf("the length is %d\n", length);

	//分配最短字符串长度的空间存储共享前缀
	common_string = (char *)malloc(length);
	
	for (count = 0; count < length; count++)
	{
		printf("character is %c\n", *(*strs+count));
		for (line_number = 0; line_number < strsSize; line_number++)
		{
			if (line_number == 0)
			{
				temp = *(*(strs+line_number)+count);
			}
			printf("line_number is %d, count is %d, temp is %c, *(*(strs+line_number)+count) is %c\n",line_number, count, temp, *(*(strs+line_number)+count));
			strcpy(common_string+count, &temp);
			if (temp == *(*(strs+line_number)+count))
				printf(" == \n");
			else
			{
				printf(" != \n");
				return common_string;
			}
		}
	}
	
}

int main(void)
{
	char * strs[3] = {"flower", "flow", "flight"};
	char * common_str;

	common_str = longestCommonPrefix(strs,3);
	for (int i =0;i<2;i++)
	{
		printf("common_str is %c\n", *(common_str+i));
	}
}
