#include "lists.h"
int len(const char *str)
list_t *create_node(const char *str)
/**
 * add_node end - function that adds node at the end of the list
 * @head: pointer to the 1st node
 * @str: new node to be added at the end
 * Return: pointer at the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;
		if (head == NULL)
			new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}
/**
 * create_node - a function that creates nodes
 * @str: string to be inputed in the new node created
 * Return: pointer to malloc memory
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - sting length
 * @str: strilength to be found
 * Return: number of length
 */
int len(const char *str)
{
	int y;

	if (str == NULL)
		return (0);

	y = 0;
	while (str[i] != '\0')
	{
		y++
