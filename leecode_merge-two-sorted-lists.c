#include	<stdio.h>
#include	<stdlib.h>

struct ListNode
{
	int val;
	struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if (!l1)
		return l2;
	if (!l2)
		return l1;
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)), *t = head;
	while (l1 && l2)
	{
		printf("l1->val is %d, l2->val is %d\n", l1->val, l2->val);
		if (l1->val < l2->val)
		{
			t->next = l1;
			l1 = l1->next;
		}
		else
		{
			t->next = l2;
			l2 = l2->next;
		}
		t = t->next;
	}

	if (l1)	t->next = l1;
	else if	(l2) t->next = l2;
	return head->next;
}

int main(void)
{
	struct ListNode one[3];
	struct ListNode* l1 = &one[0];

	struct ListNode two[3];
	struct ListNode* l2 = &two[0];

	int i;

	one[0].val = 1;
	one[1].val = 2;
	one[2].val = 4;

	two[0].val = 1;
	two[1].val = 3;
	two[2].val = 4;

	l1->next = &l1[1];
	l1++;
	l1->next = &l1[2];
	l1++;
	l1->next = NULL;

	l2->next = &l2[1];
	l2++;
	l2->next = &l2[2];
	l2++;
	l2->next = NULL;

	struct ListNode* l3;

	l1 = &one[0];
	l2 = &two[0];
	for (i = 0; i < 3; i++)
	{
		printf("l1[%d] is %d, next is %p\n", i, l1->val, l1->next);
		l1++;
	}

	for (i = 0; i < 3; i++)
	{
		printf("l2[%d] is %d, next is %p\n", i, l2->val, l2->next);
		l2++;
	}

	l1 = &one[0];
	l2 = &two[0];
	for (i = 0; i < 6; i++)
	{
		l3 = mergeTwoLists( l1, l2);
		printf("l3[%d] is %d, next is %p\n", i, l3->val, l3->next);
		l3++;
	}
}
