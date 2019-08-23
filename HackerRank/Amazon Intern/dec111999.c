#include<stdio.h>

typedef struct city{
	char c[10];
	node *next;
}city;

node *get_node()
{
	node *temp;
	temp = (node *)malloc(sizeof(node));
	temp->next = NULL;
	return temp;
}

int main(void)
{
	node *New, *head, *temp, *last;
	int n, i;
	char data[10];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", data);
		New = get_node();
		
	}
}

