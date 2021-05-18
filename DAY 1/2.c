//Calling a function by pass by address in stucture

#include <stdio.h>
#include <string.h>
 
struct info{
int roll_no;
char name[50];
float CGPA;
};
 
void func(struct info *record);
 
int main() 
{
            struct info record;
 
            record.roll_no=1806223;
            strcpy(record.name, "Pramit");
            record.CGPA = 8.5;
 
            func(&record);
            return 0;
}
 
void func(struct info *record)
{
            printf(" roll is: %d \n", record->roll_no);
            printf(" Name is: %s \n", record->name);
            printf(" CGPA is: %f \n", record->CGPA);
}