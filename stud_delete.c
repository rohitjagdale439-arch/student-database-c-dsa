  1 #include<stdio.h>
  2 #include<stdlib.h>
  3 #include<string.h>
  4 #include "header.h"
  5
  6 void stud_del(SLL **ptr)
  7 {
  8     char ch;
  9     int r;
 10     char n[20];
 11
 12     SLL *t,*prev;
 13
 14     if(*ptr == NULL)
 15     {
 16         printf("No Records Found\n");
 17         return;
 18     }
 19
 20     printf("R/r : delete by rollno\n");
 21     printf("N/n : delete by name\n");
 22     printf("Enter choice : ");
 23     scanf(" %c",&ch);
 24
 25     if(ch=='r' || ch=='R')
 26     {
 27         printf("Enter rollno : ");
 28         scanf("%d",&r);
 29
 30         t=*ptr;
 31         prev=NULL;
 32
 33         while(t)
 34         {
 35             if(t->rollno == r)
 36             {
 37                 if(prev==NULL)
 38                     *ptr = t->next;
 39                 else
 40                     prev->next = t->next;
 41
 42                 free(t);
 43                 printf("Record Deleted\n");
 44                 return;
 45             }
 46             prev=t;
 47             t=t->next;
 48         }
 49         printf("Rollno not found\n");
 50     }
 51     else if(ch=='n' || ch=='N')
 52     {
 53         printf("Enter name : ");
 54         scanf("%s",n);
 55
 56         t=*ptr;
 57         prev=NULL;
 58
 59         while(t)
 60         {
 61             if(strcmp(t->name,n)==0)
 62             {
 63                 if(prev==NULL)
 64                     *ptr = t->next;
 65                 else
 66                     prev->next = t->next;
 67
 68                 free(t);
 69                 printf("Record Deleted\n");
 70                 return;
 71             }
 72             prev=t;
 73             t=t->next;
 74         }
 75         printf("Name not found\n");
 76     }
 77 }
 78
 79 void stud_deleteall(SLL **ptr)
 80 {
 81     SLL *t;
 82
 83     if(*ptr==NULL)
 84     {
 85         printf("No Records Found\n");
 86         return;
 87     }
 88
 89     while(*ptr)
 90     {
 91         t=*ptr;
 92         *ptr=(*ptr)->next;
 93         free(t);
 94     }
 95
 96     printf("All Records Deleted Successfully\n");
 97 }
 98