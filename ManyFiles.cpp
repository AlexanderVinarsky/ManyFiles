#include <iostream>
#include "student.h"

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