#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize)
{
	if (strsSize == 0)
		return "";
	char *common_str = (char *)malloc(200);
	int i, j, flag = 0;

	strcpy(common_str, strs[0]);
	for (i=0; i < strlen(strs[0]); i++)
	{
		for (j = 1;j < strsSize; j++)
		{
			if (strs[j][i] != strs[0][i])
			{
				common_str[i] = '\0';
				flag = 1;
				break;
			}
		}

		if (flag == 1)
			return common_str;
	}
	return common_str;
}

int main(void)
{
	char * strs[3] = {"flower", "flow", "flight"};
	//char * strs[3]={"dog","racecar","car"};
	//char * strs[3]={""};
	char * common_str;

	common_str = longestCommonPrefix(strs,3);
	for (int i =0;i<strlen(common_str);i++)
	{
		printf("%c", *(common_str+i));
	}
	printf("\n");
}
