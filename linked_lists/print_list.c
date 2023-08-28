
#include <stdio.h>
#include <stdlib.h>

//struct Box {
//	int value;
//	struct Box *next;
//} struct_Box;

typedef struct node{
	int val;
	struct node * next;
} node_t;

void print_list(struct node *head)
		{
	node_t *current = head;

	while (current != NULL) {
		printf("%d", current->val);
		current = current->next;
		printf(" ");
	}
	printf("\n");
}

void push(node_t * head, int val)
{
	node_t * current = head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = (node_t *)malloc(sizeof(node_t));
	current->next->val = val;
	current->next->next = NULL;
}

int main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));

	head->val = 1;
	head->next = NULL;

	struct node* second = (struct node*)malloc(sizeof(struct node));
	second->val = 2;
	second->next = NULL;
	head->next = second;

	struct node* third = (struct node*)malloc(sizeof(struct node));
	third->val = 3;
	third->next = NULL;
	second->next = third;

//	printf("Linked list: ");
//	print_list(head);

//	struct node* fourth = (struct node*)malloc(sizeof(struct node));
//	fourth->val = 4;
//	fourth->next = NULL;
//	third->next = fourth;

	push(head, 4);
	push(head, 25);
	printf("Linked list: ");
	print_list(head);
	//print_list(head);

	free(head);
	free(second);
	free(third);

	return(0);


}