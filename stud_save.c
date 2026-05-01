  1 #include<stdio.h>
  2 #include<stdlib.h>
  3 #include<string.h>
  4 #include "header.h"
  5
  6
  7 /* ---------------- swap data ---------------- */
  8 void swap(SLL *a, SLL *b)
  9 {
 10     SLL temp;
 11
 12     temp.rollno = a->rollno;
 13     strcpy(temp.name,a->name);
 14     temp.marks = a->marks;
 15
 16     a->rollno = b->rollno;
 17     strcpy(a->name,b->name);
 18     a->marks = b->marks;
 19
 20     b->rollno = temp.rollno;
 21     strcpy(b->name,temp.name);
 22     b->marks= temp.marks;
 23 }
 24
 25
 26 /* ---------------- sort by name ---------------- */
 27 void sort_name(SLL *ptr)
 28 {
 29     SLL *i,*j;
 30
 31     for(i=ptr;i;i=i->next)
 32     {
 33         for(j=i->next;j;j=j->next)
 34         {
 35             if(strcmp(i->name,j->name)>0)
 36                 swap(i,j);
 37         }
 38     }
 39 }
 40
 41
 42 /* ---------------- sort by percentage ---------------- */
 43 void sort_per(SLL *ptr)
 44 {
 45     SLL *i,*j;
 46
 47     for(i=ptr;i;i=i->next)
 48     {
 49         for(j=i->next;j;j=j->next)
 50         {
 51             if(i->marks > j->marks)
 52                 swap(i,j);
 53         }
 54     }
 55 }
 56
 57
 58 /* =====================================================
 59                 SORT MENU FUNCTION
 60    ===================================================== */
 61 void sort_menu(SLL *ptr)
 62 {
 63     char ch;
 64
 65     if(ptr==NULL)
 66     {
 67         printf("No Records Found\n");
 68         return;
 69     }
 70
 71     printf("N/n : sort by name\n");
 72     printf("P/p : sort by percentage\n");
 73     printf("Enter choice : ");
 74     scanf(" %c",&ch);
 75
 76     if(ch=='n'||ch=='N')
 77     {
 78         sort_name(ptr);
 79         printf("Sorted by Name\n");
 80     }
 81     else if(ch=='p'||ch=='P')
 82     {
 83         sort_per(ptr);
 84         printf("Sorted by Percentage\n");
 85     }
 86 }
 87
 88
 89 /* =====================================================
 90                 SAVE FUNCTION ONLY
 91    ===================================================== */
 92 void stud_save(SLL *ptr)
 93 {
 94     FILE *fp;
 95
 96     if(ptr==NULL)
 97     {
 98         printf("No Records To Save\n");
 99         return;
100     }
101
102     fp=fopen("student.dat","wb");
103
104     if(fp==NULL)
105     {
106         printf("File open failed\n");
107         return;
108     }
109
110     while(ptr)
111     {
112         fwrite(ptr,sizeof(SLL)-sizeof(SLL *),1,fp);
113         ptr=ptr->next;
114     }
115
116     fclose(fp);
117     printf("Data Saved Successfully...\n");
118 }
119
~