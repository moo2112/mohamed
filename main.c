#include <stdio.h>
#include <stdlib.h>
#include "file.h"



int main()
{
    int input1;
    while(1)
    {
        printf("which operation do you want to perform!\n");
        printf("press '1' to add new student\n");
        printf("press '2' to search a student with ID\n");
        printf("press '3' to show all students in a specific course\n");
        printf("press '4' to delete a student\n");
        printf("press '5' to update a data\n");
        printf("press '6' to print all the data\n");
        scanf("%d",&input1);
        switch(input1)
        {
        case 1 :
            Add_std();
            break;
        case 2:
            ID_search();
            break;
        case 3 :
            student_registered_in_course();
            break;
        case 4 :
            remove_student_bu_ID();
            break;
        case 5 :
            update_std_by_ID();
            break;
        case 6:
            print();
            break;
        default:
            printf("please enter true number\n");
        }

    }
    return 0;
}
