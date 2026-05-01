  1 //adding student data
  2 #include<stdio.h>
  3 #include"header.h"
  4 #include<string.h>
  5 #include<stdlib.h>
  6
  7 void stud_add(SLL **ptr)
  8 {
  9     SLL *new,*last;
 10
 11
 12     new = (SLL *)malloc(sizeof(SLL));
 13
 14     if(new == NULL)
 15     {
 16         printf("Memory allocation failed\n");
 17         return;
 18     }
 19
 20     static int r =0;
 21     new->rollno = ++r;
 22
 23
 24     printf("Enter name : ");
 25     scanf("%s", new->name);
 26
 27     printf("Enter percentage : ");
 28     scanf("%f", &new->marks);
 29
 30     new->next = NULL;
 31
 32     if(*ptr == NULL)
 33     {
 34         *ptr = new;
 35     }
 36     else
 37     {
 38         last = *ptr;
 39
 40         while(last->next)
 41             last = last->next;
 42
 43         last->next = new;
 44     }
 45
 46     printf("Record Added Successfully... Rollno = %d\n", new->rollno);
 47 }
 48