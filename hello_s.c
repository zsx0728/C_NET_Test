#define BLACK 0
#define RED 4

void write_string(char * pstring, int color)
{
	char far * pvideo = (char far *)0xB8000000;
	while(* pstring)
	{
		* pvideo = * pstring;
		pstring++;
		pvideo++;
		* pvideo = color;
		pvideo++;
	}
}

void main()
{
	write_string("Hello,world!", RED);
}
