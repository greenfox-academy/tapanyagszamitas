//TODO:
//Create a structure called "student":
//name of the student
//number of the student's grade - error handling
//type of the student's behavior in an enumeration ("behaviors"): - BAD_BEHAVIOR , GOOD_BEHAVIOR
//The student's are stored in an array.
// Write a function that returns with the grade's avarage
// write a function that prints out if the student's grade higher than 3 and the behavior is bad:
//"(student's name) you are fuckin amazing, please behave good"
//write a function that counts good behaviors, if they have 5 grades:
//return with the count of students

#include <stdio.h>
#include <stdlib.h>

typedef enum behavior
{
    GOOD_BEHAVIOR,
    BAD_BEHAVIOR
} behavior_st;


typedef struct
{
    char name[20];
    int grade;
    behavior_st behavior;
} student_st;

int average_returner(student_st student_array[], int size);
void student_print(student_st student_array[], int size);
beststudent(student_st student_array[], int size);

int main()
{
    student_st student_petra = {"Petra", 5, GOOD_BEHAVIOR};
    student_st student_panna = {"Panna", 4, BAD_BEHAVIOR};
    student_st student_patrik = {"Patrik", 2, BAD_BEHAVIOR};
    student_st student_paul = {"Paul", 5, BAD_BEHAVIOR};
    student_st student_peter = {"Peter", 1, GOOD_BEHAVIOR};

    student_st student_array[]= { student_petra, student_panna, student_patrik, student_paul, student_peter};
    int size = sizeof (student_array)/sizeof (student_array[0]);

    printf("\n\n The average of grades is %d", (average_returner(student_array, size))) ;

    student_print(student_array, size);

    printf("\n\n The number of students with 5 grade and good behavior is %d ",(beststudent(student_array, size)));

    return 0;
}
int average_returner(student_st student_array[], int size)
{
    int sum_notes = 0;
    int i = 0;
    for( i=0; i<=size; i++){
        sum_notes = student_array[i].grade  + sum_notes;
    }
    return (sum_notes/size);
}

void student_print(student_st student_array[], int size)
{

    int j = 0;

    for(j=0; j<= size; j++){
        if(student_array[j].grade >= 3 && student_array[j].behavior==1)
        {
            printf("\n %s, you are fuckin amazing, please behave good \n", student_array[j].name );
        }
    }
}

int beststudent(student_st student_array[], int size)
{
    int counter =0;
    int j = 0;
    for(j=0; j<= size; j++){
        if(student_array[j].grade >= 5 && student_array[j].behavior==0){
            counter++;
            printf("\n %s, you are fuckin amazing, please behave good \n", student_array[j].name );
        }
    }
    return counter;
}
