1 #include<stdio.h>
  2 #include "header.h"
  3
  4 void stud_show(SLL *ptr)
  5 {
  6     if(ptr == NULL)
  7     {
  8         printf("No Records Found\n");
  9         return;
 10     }
 11
 12     printf("\n--------------------------------------\n");
 13     printf("RollNo\tName\tPercentage\n");
 14     printf("--------------------------------------\n");
 15
 16     while(ptr)
 17     {
 18         printf("%d\t%s\t%.2f\n",
 19                 ptr->rollno,
 20                 ptr->name,
 21                 ptr->marks);
 22
 23         ptr = ptr->next;
 24     }
 25
 26     printf("--------------------------------------\n");
 27 }
 28