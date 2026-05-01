  1
  2 #include<stdio.h>
  3 #include<string.h>
  4 #include "header.h"
  5
  6 void stud_mod(SLL *ptr)
  7 {
  8     char ch;
  9     int r;
 10     char n[20];
 11
 12     if(ptr == NULL)
 13     {
 14         printf("No Records Found\n");
 15         return;
 16     }
 17
 18     printf("R/r : search by rollno\n");
 19     printf("N/n : search by name\n");
 20     printf("P/p : search by percentage\n");
 21     printf("Enter choice : ");
 22     scanf(" %c",&ch);
 23
 24     if(ch=='r' || ch=='R')
 25     {
 26         printf("Enter rollno : ");
 27         scanf("%d",&r);
 28
 29         while(ptr)
 30         {
 31             if(ptr->rollno == r)
 32             {
 33                 printf("Enter new name : ");
 34                 scanf("%s",ptr->name);
 35
 36                 printf("Enter new percentage : ");
 37                 scanf("%f",&ptr->marks);
 38
 39                 printf("Record Modified\n");
 40                 return;
 41             }
 42             ptr = ptr->next;
 43         }
 44         printf("Rollno not found\n");
 45     }
 46     else if(ch=='n' || ch=='N')
 47     {
 48         printf("Enter name : ");
 49         scanf("%s",n);
 50
 51         while(ptr)
 52         {
 53             if(strcmp(ptr->name,n)==0)
 54             {
 55                 printf("Enter new name : ");
 56                 scanf("%s",ptr->name);
 57
 58                 printf("Enter new percentage : ");
 59                 scanf("%f",&ptr->marks);
 60
 61                 printf("Record Modified\n");
 62                 return;
 63             }
 64             ptr = ptr->next;
 65         }
 66         printf("Name not found\n");
 67     }
 68     else if(ch=='p' || ch=='P')
 69     {
 70         float p;
 71         printf("Enter percentage : ");
 72         scanf("%f",&p);
 73
 74         while(ptr)
 75         {
 76             if(ptr->marks == p)
 77             {
 78                 printf("Enter new name : ");
 79                 scanf("%s",ptr->name);
 80
 81                 printf("Enter new percentage : ");
 82                 scanf("%f",&ptr->marks);
 83
 84                 printf("Record Modified\n");
 85                 return;
 86             }
 87             ptr = ptr->next;
 88         }
 89         printf("Record not found\n");
 90     }
 91 }
 92
 93 void stud_reverse(SLL **ptr)
 94  {
 95  SLL *prev=NULL,*cur,*next;
 96 if(*ptr==NULL)
 97  {
 98  printf("No Records Found\n");
 99  return;
100  }
101  cur=*ptr;
102  while(cur)
103  {
104  next=cur->next;
105 cur->next=prev;
106  prev=cur;
107  cur=next;
108  }
109  *ptr=prev;
110  printf("List Reversed Successfully\n");
111  }
~