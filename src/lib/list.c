#include "list.h"

#include <stdlib.h>
#include <string.h>

struct Person *create_node(char *name, char *surname, char *email, char *phone)
{
	if (name == NULL || surname == NULL || email == NULL || phone == NULL)
		return NULL;

	struct Person *node = NULL;

	node = (struct Person *)malloc(sizeof(struct Person));
	if (node == NULL)
		return NULL;

	strncpy(node->name, name, CAPACITY);
	strncpy(node->surname, surname, CAPACITY);
	strncpy(node->email, email, CAPACITY);
	strncpy(node->phone, phone, CAPACITY);
	node->next = NULL;

	return node;
}

struct Person *load_node(char *address_line) 
{
	if (address_line == NULL) 
		return NULL;

	char *address_copy = strdup(address_line);

	struct Person *node = NULL;
	char *name;
	char *surname;
	char *email;
	char *phone;

	name = strtok(address_copy, DELIMETER);
	surname = strtok(NULL, DELIMETER);
	email = strtok(NULL, DELIMETER);
	phone = strtok(NULL, DELIMETER);

	node = create_node(name, surname, email, phone);

	free(address_copy);
	return node;
}

int load_list(char *filepath, struct Person **list) 
{
	if (filepath == NULL) 
		return 1;

	FILE *file = fopen(filepath, "r");
	if (file == NULL)
		return 2;

	char line[128];
	while (fgets(line, sizeof(line), file)) {
		if(strcmp(line, "\n") == 0) 
			continue;

		line[strcspn(line, "\n")] = '\0';

		struct Person *node = load_node(line);
		if (node != NULL)
			add_to_list(list, node);
	}
	fclose(file);
	return 0;
}

void print_node(struct Person *node) 
{
	if (node == NULL) 
		return;

	printf("%s, %s, %s, %s\n", node->name, node->surname, node->email, node->phone);	
}

void print_list(struct Person *list) 
{
	while (list != NULL) {
		print_node(list);
		list = list->next;
	}
}

int add_to_list(struct Person **list, struct Person *new_address)
{
	if (new_address == NULL)
		return 1;
		
	if (list == NULL)
		return 2;

	struct Person *temp = *list;
	
	if (temp == NULL) {
		*list = new_address;
		return 0;
	}
    
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_address;
	return 0;
}

int add_to_list_at(struct Person **list, struct Person *new_address, int pos) 
{
	if (new_address == NULL)
		return 1;

	if (list == NULL)
		return 2;
	
	if (pos <= 0 || *list == NULL) {
		new_address->next = *list;
		*list = new_address;

		return 0;
	}

	struct Person *temp = *list;
	while (temp->next != NULL && pos > 1) {
		temp = temp->next;
		pos--;
	}
	new_address->next = temp->next;
	temp->next = new_address;
	return 0;
}

int delete_at(struct Person **list, int pos)
{
	if (*list == NULL || pos < 0) 
		return 1;

	struct Person *temp = *list;

	if (pos == 0) {
		*list = (*list)->next;
		free(temp);

		return 0;
	}

	while (temp->next != NULL && pos > 1) {
		temp = temp->next;
		pos--;
	}
	if (pos > 1 || temp->next == NULL) 
		return 2;
	
	struct Person *to_delete = temp->next;
	temp->next = temp->next->next;
	free(to_delete);
	return 0;
}

void delete_list(struct Person **list) 
{
	struct Person* next = NULL;
	
	while (*list != NULL) {
		next = (*list)->next;
		free(*list);
		*list = next;
	}
}

struct Person *find_at(struct Person *list, int pos) 
{
	if (pos < 0)
		return NULL;

	while (list->next != NULL && pos > 0) {
		list = list->next;
		pos--;
	}

	if (pos > 0)
		return NULL;
	return list;
}	

struct Person *find_by_name(struct Person *list, char *name) 
{
	while (list != NULL) {
		if (strcmp(list->name, name) == 0)
			return list;
		list = list->next;
	}
	return NULL;
}

struct Person *find_by_surname(struct Person *list, char *surname) 
{
	while (list != NULL) {
		if (strcmp(list->surname, surname) == 0)
			return list;
		list = list->next;
	}
	return NULL;
}

struct Person *find_by_email(struct Person *list, char *email)
{
	while (list != NULL) {
		if (strcmp(list->email, email) == 0)
			return list;
		list = list->next;
	}
	return NULL;
}

struct Person *find_by_phone(struct Person *list, char *phone)
{
	while (list != NULL) {
		if (strcmp(list->phone, phone) == 0)
			return list;
		list = list->next;
	}
	return NULL;
}
