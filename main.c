  1 #include<stdio.h>
  2 #include "header.h"
  3
  4 int main()
  5 {
  6     SLL *head = NULL;
  7     char ch;
  8
  9     while(1)
 10     {
 11         printf("\n======= STUDENT MENU =======\n");
 12         printf("| A/a : Add Record           |\n");
 13         printf("|D/d : Delete Record         |\n");
 14         printf("|S/s : Show List             |\n");
 15         printf("|M/m : Modify Record         |\n");
 16         printf("|V/v : Save                  |\n");
 17         printf("|L/l : Sort List             |\n");
 18         printf("|R/r : Reverse List          |\n");
 19         printf("|X/x : Delete All Records    |\n");
 20         printf("|E/e : Exit                  |\n");
 21         printf("==============================\n");
 22         printf("Enter Choice : ");
 23
 24         scanf(" %c",&ch);
 25
 26         switch(ch)
 27         {
 28             case 'a':
 29             case 'A':
 30                 stud_add(&head);
 31                 break;
 32
 33             case 'd':
 34             case 'D':
 35                 stud_del(&head);
 36                 break;
 37
 38             case 's':
 39             case 'S':
 40                 stud_show(head);
 41                 break;
 42
 43             case 'm':
 44             case 'M':
 45                 stud_mod(head);
 46                 break;
 47
 48             case 'v':
 49             case 'V':
 50                 stud_save(head);
 51                 break;
 52
 53             case 'l':
 54             case 'L':
 55                 sort_menu(head);     // your sort function
 56                 break;
 57
 58             case 'r':
 59             case 'R':
 60                 stud_reverse(&head);
 61                 break;
 62
 63             case 'x':
 64             case 'X':
 65                 stud_deleteall(&head);
 66                 break;
 67
 68             case 'e':
 69             case 'E':
 70                 printf("Program Exit...\n");
 71                 return 0;
 72
 73             default:
 74                 printf("Invalid Choice\n");
 75         }
 76     }
 77 }
 78