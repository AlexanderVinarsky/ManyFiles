#include "group.h"
#include "student.h"
#include <iostream>

void printGroup(Group g)
{
	printf("√руппа %s", g.name);
	for (int i = 0; i < g.size; i++)
		printStudent(g.students[i]);
	printf("\n");
}

void fillGroupByHand(Group& g)
{
	printf("¬ведите название группы: ");
	do
		gets_s(g.name, 100);
	while (g.name[0] == '\n' || g.name[0] == '\0');
	for (int i = 0; i < g.size; i++)
	{
		fillStudentByHand(g.students[i]);
	}
}