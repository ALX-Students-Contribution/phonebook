#include "phone.h"

int main(void)
{
	int i, select;
	contact p[] = {
		{"Sarah", "+235493023235"},
		{"Destiny", "+2348125435923"},
		{"Thuba", "+278545940424"},
	};

	for (i = 0; i < 3; i++)
	{
		printf("%d. %s - %s\n", (i + 1), p[i].name, p[i].number);
	}

	printf("\nDo you want to: \n1. Update Contact\n2. Search\n3. Delete Contact");

	scanf("%d", &select);

     	int index;

	printf("Enter the name of the Contact you want to delete\n");
	scanf("%ls", &index);

	p[i].name = "NIL";
	p[i].number = "NIL";

	printf("Successfully deleted %s from the phonebook", p[i].name);
	
	return (0);
}
