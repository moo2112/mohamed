#define MAX_SIZE 100
typedef struct data_base
{
  char first_name[10];
  char last_name[10];
  int ID;
  float GPA;
  char course_1[20];
  char course_2[20];
  char course_3[20];
}student_t;

extern char inp;
extern char input1;
extern int last_student_ID;
extern int ID_search_loop;
extern int first_name_search_loop;
extern int student_registered_in_course_loop;
extern int remove_student_bu_ID_loop;
extern int update_std_by_ID_loop;
extern student_t student[MAX_SIZE];
extern int print_loop;
extern int num;

void Add_std();
void ID_search();
void student_registered_in_course();
void remove_student_bu_ID();
void update_std_by_ID();
void print();
