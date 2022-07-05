﻿#include <iostream>

struct Student
{
    char name[100];
    int age = 0;
    int marks[100];
    int marks_count = 0;
};

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
    gets_s(s.name, 100);
    printf("Введите возраст: ");
    scanf_s("%d", &s.age);
    printf("Введите количество оценок: ");
    scanf_s("%d", &s.marks_count);

    for (int i = 0; i < s.marks_count; i++)
    {
        printf("Введите оценку №%d", i + 1);
        scanf_s("%d", &s.marks[i]);
    }
}

int main()
{
    system("chcp 1251");
    int s_counter = 5;
    Student group[50];

    for (int i = 0; i < s_counter; i++)
    {
        fillStudentByHand(group[i]);
    }
    system("pause");
    return 0;
}