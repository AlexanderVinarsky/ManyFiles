#include <iostream>
#include "student.h"
#include "group.h"

int main()
{
    system("chcp 1251");

    Group gr;
    fillGroupByHand(gr);
    system("cls");

    printGroup(gr);

    system("pause");
    return 0;
}