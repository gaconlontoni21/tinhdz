#include <stdio.h>
#define malloc() (note_t *)malloc(sizeof(note_t))
typedef struct note{
	int val;
	struct note * next;
}note_t;

void Insert_Last_List(note_t * head, int val){
	note_t * current = head;
	while(current -> next != NULL){
		current = current -> next;
	}
	current -> next = malloc();
	current -> next -> val = ++val;
	current -> next -> next = NULL;
}
void Print_Lists(note_t * head){
	note_t * current = head;
	while(current != NULL){
		printf("\n%d", current -> val);
		current = current -> next;
	}
}

int main(){
	note_t * head = NULL;
	head = malloc();
	if (head == NULL){
		return 1;
	}
	head -> val = 1;
	head -> next = malloc();
	head -> next -> val = 2;
	head -> next -> next = NULL;
	Insert_Last_List(head, head -> next -> val);
	Print_Lists(head);
	return 0;
}
