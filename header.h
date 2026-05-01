  1 #include<stdio.h>
  2
  3
  4
  5 typedef struct stu
  6 {
  7 int rollno;
  8 char name[20];
  9 float marks;
 10 struct stu *next;
 11 }SLL ;
 12
 13 void stud_add(SLL **);
 14 void stud_show(SLL *);
 15 void stud_del(SLL **);
 16 void stud_mod(SLL *);
 17 void swap(SLL *,SLL *);
 18 void sort_name(SLL *);
 19 void sort_per(SLL *);
 20 void stud_save(SLL *);
 21 void stud_reverse(SLL **);
 22 void stud_deleteall(SLL **);
 23 void sort_menu(SLL *);
 24
