#include	<stdio.h>

struct ListNode
{
	int val;
	struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{

}

int main(void)
{
	struct ListNode one[3];
	struct ListNode* l1 = one;
	one[0].val = 11;
	one[1].val = 22;
	one[2].val = 44;

	l1[0].next = &l1[1];
	l1[1].next = &l1[2];
	l1[2].next = NULL;

	for (int i = 0; i < 3; i++)
	{
		printf("l1[%d] is %d, next is %d\n", i, l1[i].val, l1[i].next );
	}
}
