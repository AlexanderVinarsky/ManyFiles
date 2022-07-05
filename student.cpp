#include "student.h"
#include <iostream>

double getAverageMark(Student s)
{
    double av = 0;
    for (int i = 0; i < s.marks_count; i++)
    {
        av += s.marks[i];
    }
    av /= s.marks_count;
    return av;
}
void fillStudentByHand(Student& s)
{
    printf("Введите имя: ");
    do
        gets_s(s.name, 100);
    while (s.name[0] == '\n' || s.name[0] == '\0');
    printf("Введите возраст: ");
    scanf_s("%d", &s.age);
    printf("Введите количество оценок: ");
    scanf_s("%d", &s.marks_count);

    for (int i = 0; i < s.marks_count; i++)
    {
        printf("Введите оценку №%d", i + 1);
        scanf_s("%d ", &s.marks[i]);
    }
}
void printStudent(Student s, bool detailed)
{
    printf("Студент: %s, возраст: %i, оценок: %d\n",
        s.name, s.age, s.marks_count);
    if (detailed)
    {
        printf("Оценки: ");
        for (int i = 0; i < s.marks_count; i++)
        {
            printf("%d ", s.marks[i]);
        }
    }
}