#include "file.h"

int size;
int last_student_ID;
int ID_search_loop;
int first_name_search_loop;
int student_registered_in_course_loop;
int remove_student_bu_ID_loop;
int update_std_by_ID_loop;
int print_loop;
student_t student[MAX_SIZE];
char inp;
int num;

Add_std()
{
    char *courses[] = {"arabic" , "english" , "math" , "science"};
    int number_of_course=0;
    printf("enter the number of student\n");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("enter your first name\n");
        scanf("%s",&student[last_student_ID].first_name);
        printf("enter your last name\n");
        scanf("%s",&student[last_student_ID].last_name);
        student[last_student_ID].ID = last_student_ID + 1;
        printf("enter your GPA\n");
        scanf("%f",&student[last_student_ID].GPA);
        printf("enter the 1st course you want to register....press '1' for (arabic) '2' for (english) '3' for (math) '4' for (sciene)\n");
        scanf("%s",&student[last_student_ID].course_1);
        printf("enter the 2nd course you want to register\n");
        scanf("%s", &student[last_student_ID].course_2);
        printf("enter the 3rd course you want to register\n");
        scanf("%s",&student[last_student_ID].course_3);
        printf("DONE..........your data is %s %s %d %f %s %s %s \n\n",student[last_student_ID].first_name ,student[last_student_ID].last_name ,student[last_student_ID].ID ,student[last_student_ID].GPA ,student[last_student_ID].course_1 ,student[last_student_ID].course_2 ,student[last_student_ID].course_3);
    }
        last_student_ID++;
      num++;
      printf("number of students is %d\n\n",num);
    }


ID_search()
{
    int tosearch,found;
    printf("enter the ID to search\n");
    scanf("%d",&tosearch);
    for (;ID_search_loop<size; ID_search_loop++)
    {
        if (student[ID_search_loop].ID == tosearch)
        {
          found = 1;
          break;
        }
    }
    if (found == 1)
    {
        printf("the element %d found in position %d\n",tosearch,ID_search_loop+1);
        printf("..........your data is %s %s %d %f %s %s %s \n",student[ID_search_loop].first_name ,student[ID_search_loop].last_name ,student[ID_search_loop].ID ,student[ID_search_loop].GPA ,student[ID_search_loop].course_1 ,student[ID_search_loop].course_2 ,student[ID_search_loop].course_3);
    }
    else
    {
        printf("the element %d is not found\n",tosearch);
    }
}
/*
First_name_search()
{
    int found = 0;
    char tosearch[10];
    printf("enter the name you want to search for\n");
    scanf("%s",&tosearch);
    for (; first_name_search_loop < size ; first_name_search_loop++)
    {
        if (strcmp(tosearch,student[first_name_search_loop].first_name) == 0);
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("%s found in position %d\n",student[first_name_search_loop].first_name,first_name_search_loop+1);
    }
    else
    {
        printf("not found\n");
    }
}
*/

student_registered_in_course()
{
    int found=0;
    char tosearch[10];
    printf("enter the course you want to search\n");
    scanf("%s",&tosearch);
    for (; student_registered_in_course_loop<size ; student_registered_in_course_loop++)
    {
        if(strcmp(tosearch,student[student_registered_in_course_loop].course_1) == 0 || strcmp(tosearch,student[student_registered_in_course_loop].course_2) == 0 || strcmp(tosearch,student[student_registered_in_course_loop].course_3) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        for (; student_registered_in_course_loop<size ; student_registered_in_course_loop++)
    {
        printf("%s %s %d %f %s %s %s\n", student[student_registered_in_course_loop].first_name ,student[student_registered_in_course_loop].last_name, student[student_registered_in_course_loop].ID ,student[student_registered_in_course_loop].GPA ,student[student_registered_in_course_loop].course_1 ,student[print_loop].course_2 ,student[print_loop].course_3);
    }
    }
}

remove_student_bu_ID()
{
    int pos;
    printf("enter the student ID that you want to delete\n");
    scanf("%d",&pos);
    for(remove_student_bu_ID_loop=pos-1 ; remove_student_bu_ID_loop< (size - pos + 1); remove_student_bu_ID_loop++)
    {
        strcpy(student[remove_student_bu_ID_loop].first_name , student[remove_student_bu_ID_loop+1].first_name);
        strcpy(student[remove_student_bu_ID_loop].last_name , student[remove_student_bu_ID_loop+1].last_name);
        student[remove_student_bu_ID_loop].ID = student[remove_student_bu_ID_loop+1].ID;
        student[remove_student_bu_ID_loop].GPA = student[remove_student_bu_ID_loop+1].GPA;
        strcpy(student[remove_student_bu_ID_loop].course_1 , student[remove_student_bu_ID_loop+1].course_1);
        strcpy(student[remove_student_bu_ID_loop].course_2 , student[remove_student_bu_ID_loop+1].course_2);
        strcpy(student[remove_student_bu_ID_loop].course_3 , student[remove_student_bu_ID_loop+1].course_3);
    }
    size--;
    for(remove_student_bu_ID_loop=0; remove_student_bu_ID_loop<size; remove_student_bu_ID_loop++)
        {
            printf("%s\n", student[remove_student_bu_ID_loop].first_name);
        }
}


update_std_by_ID()
{
    int id;
    int found = -1;
    int inp;
    printf("enter your ID\n");
    scanf("%d",&id);
    for (int i = 0; i < size ; i++)
    {
        if (id == student[i].ID)
        {
            found = 1;
        }
    }
    printf("what do you want to update........press '1' for first name '2' for last name '3' for ID '4' for GPA '5' for course 1 '6' for course 7 'g' for course 3\n");
    scanf("%d",&inp);

    if (found==1)
    {
        switch(inp)
        {
            case 1:
                printf("your name is %s\n",student[found].first_name);
                printf("enter your new name\n");
                scanf("%s",&student[found].first_name);
                printf("your new name is %s\n",student[found].first_name);
                break;

            case 2:
                printf("your last name is %s\n",student[update_std_by_ID_loop].last_name);
                printf("enter your new last name\n");
                scanf("%s",&student[update_std_by_ID_loop].last_name);
                printf("your new last name is %s\n",student[update_std_by_ID_loop].last_name);
                break;

            case 3:
                printf("your ID is %d\n",student[update_std_by_ID_loop].ID);
                printf("enter your new ID\n");
                scanf("%d",&student[update_std_by_ID_loop].ID);
                printf("your new ID is %d\n",student[update_std_by_ID_loop].ID);
                break;

            case 4:
                printf("your GPA is %f\n",student[update_std_by_ID_loop].GPA);
                printf("enter your new GPA\n");
                scanf("%f",&student[update_std_by_ID_loop].GPA);
                printf("your new ID is %f\n",student[update_std_by_ID_loop].GPA);
                break;

            case 5:
                printf("your 1st course is %s\n",student[update_std_by_ID_loop].course_1);
                printf("enter your new 1st course\n");
                scanf("%s",&student[update_std_by_ID_loop].course_1);
                printf("your new 1st course is %s\n",student[update_std_by_ID_loop].course_1);
                break;

            case 6:
                printf("your 2nd course is %s\n",student[update_std_by_ID_loop].course_2);
                printf("enter your new 2nd course\n");
                scanf("%s",&student[update_std_by_ID_loop].course_2);
                printf("your new 2nd course is %s\n",student[update_std_by_ID_loop].course_2);
                break;

            case 7:
                printf("your 3rd course is %s\n",student[update_std_by_ID_loop].course_3);
                printf("your 3rd course is %s\n",student[update_std_by_ID_loop].course_3);
                printf("enter your new 3rd course\n");
                scanf("%s",&student[update_std_by_ID_loop].course_3);
                printf("your new 3rd course is %s\n",student[update_std_by_ID_loop].course_3);
                break;

            default :
                printf("your input is not correct\n");
        }
    }

}

void print()
{
    printf("do you want to print all the data?.. 'y' for yes and 'n' for no\n");
    scanf(" %c",&inp);
    if (inp == 'y')
  {
    for (; print_loop<size ; print_loop++)
    {
        printf("%s %s %d %f %s %s %s\n", student[print_loop].first_name ,student[print_loop].last_name, student[print_loop].ID ,student[print_loop].GPA ,student[print_loop].course_1 ,student[print_loop].course_2 ,student[print_loop].course_3);
    }
  }
  else
  {
      printf("OK,THANKS\n");
  }
}


