/*
  1. Declaring a structure which represents each student required data
  2. Taking input into a variable of name "nStud" for size of structure array & no. of iterations to collect student data
  3. A counter-controlled loop of counter variable i that goes from 0 to nStud, to collect data into each member
      3.1 Taking input into a variable of name "nSubj" for size of subj_marks[] array member, and no. of iterations to collect subject marks data into each index of student matrix.
      3.2 Initializing total member to 0 and using for loop to add all the indices of subj_mark[]
  4. Printing the same info onto terminal/console using another counter-controlled loop of counter-variable i that goes from 0 to nStud
*/
#include <stdio.h>

int main() {
    struct StudentData  {
        char name[30];
        int rollno;
        float subj_marks[10];
        float total;
    };
    
    int nStud,nSubj;
    printf("\nEnter number of students: ");
    scanf("%d", &nStud);
    
    struct StudentData student[nStud];
    
    for (int i=0; i<nStud; i++)     {
        printf("\n\nENTER STUDENT - %d DATA\n\tName: ",i+1);
        getchar();
        fgets(student[i].name,30,stdin);
        
        printf("\n\tRoll No.: ");
        scanf("%d",&student[i].rollno);
        
        for (int j=0; j<10; j++)
            student[i].subj_marks[j] = 0;
        printf("\n\n\tEnter number of subjects [input range: [1,10]]: ");
        scanf("%d",&nSubj);
        for (int j=0; j<nSubj; j++)     {
            printf("\n\tSubject - %d Marks: ",j+1);
            scanf("%f",&student[i].subj_marks[j]);
        }
        
        student[i].total = 0;
        for (int k=0; k<10; k++)
            student[i].total += student[i].subj_marks[k];
    }
    
    printf("\n\nDISPLAYING ENTERED STUDENT DATA\n\n");
    for (int i=0; i<nStud; i++)     {
        printf("\n\nSTUDENT - %d DATA\n\tName: ",i+1);
        fputs(student[i].name,stdout);
        
        printf("\n\tRoll No.: %d",student[i].rollno);
        
        for (int j=0; j<10; j++)
            printf("\n\tSubject - %d Marks: %f",j+1,student[i].subj_marks[j]);
        
        printf("\nTotal Marks = %f\n",student[i].total);
    }
    
    return 0;
}
