    //*************************************************************************************************************************************//
   //                                            HEADER FILES IN PROJECT                                                                  //
  //*************************************************************************************************************************************// 

#include<stdio.h>
#include<string.h>
   
    //*************************************************************************************************************************************//
   //                                            STRUCTURE OF PROJECT                                                                     //
  //*************************************************************************************************************************************// 

struct student
{
	char First_Name[100];
	char Last_Name[100];
	char Father_Name[100];
	int roll_NO;
	int p_marks;
	int c_marks;
	int m_marks;
	int e_marks;
	int cs_marks;
	int total_marks;
	float obtained_marks;
	float percentage;
	char grade;
	char result;
};
student st[15]=
    {{"Aliza","Ahmad","Muhammad Aasim",1,90,85,96,80,91,550.23,442.22,80.44,'A','P'},
	{"Laiba","Talha","Mian Talha",2,85,70,89,67,81,550,392,71,'B','P'},
	{"Minal","Faran","Younis Khan",3,90,85,78,76,68,550,397,73,'B','P'},
	{"Kinza","Bilal","Mudassir Malik",4,87,90,95,98,80,550,489,87,'A','P'},
	{"Sofia","Aamir","Muhammad Aamir",5,87,80,96,87,75,550,472,80,'A','P'},
	{"Aamir","Khan","Muhammad Shakeel",6,91,89,90,85,93,550,490,92,'A','P'},
	{"Umair","Khan","Sardar Ali",7,65,76,56,78,65,550,340,65,'C','F'},
	{"Hasan","Khan","Ali khan",8,90,82,56,67,89,550,390,63,'C','F'},
	{"Haris","Khan","Muhammad Noman",9,45,40,50,65,55,550,250,45,'F','F'},
	{"Aasim","Khan","Muhammad Ali",10,90,87,95,50,45,550,350,55,'D','F'}};


     //*************************************************************************************************************************************//
   //                                            FUNCTIONS OF PROJECT                                                                     //
  //*************************************************************************************************************************************// 

void read_all_student_grades (student []);//print all grades with names in tabular form
void read_specific_record_of_Obtained_Roll_NO (student []);//print obtained marks and roll no's with nmaes
void modify_result (student []);// function for changes by entering all the data of new student
void delete_record (student []);// to delete any data of student by entring roll no
void display_all_students (student []);// it will display only names of students
void print_specific_table_by_ROLL_NO (student []);// print any data of student by entring roll no in tabular form(integar)
void print_main_table (student[]);//display all data of students in tabular form
void print_specific_table (student[],int);//it will display specific data of student by entring name(string)
void Sort_by_Name(student []);//sorting of names(string)
void Sort_by_Obtained_Marks(student []);// sorting of max marks to min marks(integar)
void Pass_Students(student []);//it will display only names of pass students with result
void Fail_Students(student []);//it will display only names of failed students with result

int  main()
{


	//*************************************************************************************************************************************//
   //                                              INTRODUCTION                                                                           //
  //*************************************************************************************************************************************// 
printf(" \n\n\t\t             ********MADE BY: SOFIA MUHAMMAD AAMIR********");
printf("\n\t\t           ********REGISTRATION NO: FA21-BSE-036*********");
printf("\n\t           ******COMSATS UNIVERSITY ISLAMBAD, ABBOATTABD CAMPUS*******");
printf("\n__________________________________________________________________________________________________________________________");
printf("\n\n\n\n\n");
printf("\t---------------------------------------------------------------------------------------------------------");
printf("\n\t|                                                                                                        |");
printf("\n\t|                                   PROGRAMMING FUNDAMENTALS PROJECT                                     |");
printf("\n\t|                                          STUDENT REPORT CARD                                           |");
printf("\n\t|                                                                                                        |");
printf("\n\t---------------------------------------------------------------------------------------------------------");

int x;
char c;
{
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    MENU \t\t\t\t\t\t\t\t\t\t\t\t\t\t");
	printf("\n\t\t\t\t\t\tSTUDENTS NAMES\t\t\t\t\t\t\t\t\t\t\t");
	printf("----------------------------------------------------");
	printf("\n\t\t\t\t==================================================");
	printf("\n\n\t\t\t\t\t           1:ALIZA    ");
	printf("\n\t\t\t\t\t           2:LAIBA    ");
	printf("\n\t\t\t\t\t           3:MINAL    ");
	printf("\n\t\t\t\t\t           4:KINZA    ");
	printf("\n\t\t\t\t\t           5:SOFIA    ");
	printf("\n\t\t\t\t\t           6:AAMIR    ");
	printf("\n\t\t\t\t\t           7:UMAIR    ");
	printf("\n\t\t\t\t\t           8:HASAN    ");
	printf("\n\t\t\t\t\t           9:HARIS    ");
	printf("\n\t\t\t\t\t           10:AASIM    ");
	printf("\n\t\t\t\t\t           0:EXIT    ");
	printf("\n\n\t\t\tDO YOU WANT TO CONTINUE IF YES ENTER 1:");
	scanf("%d",&x);
	
	//**************************************************************************************************************//
   //                                         DIFFERENT CHOICES                                                    //
   //*************************************************************************************************************//
   if(x==1)
   do
   {
   	printf("\n\n\t\t---------------------------------------------------------------");
   	printf("\n\t\t|            1: READ ALL STUDENT GRADES                          |");
   	printf("\n\t\t|            2: READ SPECIFIC RECORD OF OBTAINED AND ROLL NO     |");
   	printf("\n\t\t|            3: MODIFY RESULT                                    |");
   	printf("\n\t\t|            4: DELETE RECORD                                    |");
   	printf("\n\t\t|            5: DISPLAY ALL STUDENTS                             |");
   	printf("\n\t\t|            6: PRINT SPECIFIC TABLE BY ROLL NO                  |");
   	printf("\n\t\t|            7: PRINT MAIN TABLE                                 |");
   	printf("\n\t\t|            8: PRINT SPECIFIC TABLE BY NAME                     |");
   	printf("\n\t\t|            9: SORTING BY NAME                                  |");
   	printf("\n\t\t|           10:SORTING BY OBTAINED MARKS                         |");
   	printf("\n\t\t|           11:PASS STUDENTS                                     |");
   	printf("\n\t\t|           12:FAIL STUDENTS                                     |");
   	printf("\n\t\t-----------------------------------------------------------------");
   	printf("\n\n\n\t\t\t\tENTER NUMBER OF YOUR CHOICE FROM 1 TO 12:");
   	scanf("%d",&x);
   	
  if(x==1)
{
	read_all_student_grades (st);
}
else if(x==2)
{
	read_specific_record_of_Obtained_Roll_NO (st);
}
else if(x==3)
{
	modify_result (st);
}
else if(x==4)
{
	delete_record (st);
}
else if(x==5)
{
	display_all_students (st);	
}
else if(x==6)
{
	print_specific_table_by_ROLL_NO (st);
}
else if(x==7)
{
	print_main_table (st);
}
else if(x==8)
{
	print_specific_table (st,10);
}
else if(x==9)
{
	Sort_by_Name (st);
}
else if(x==10)
{
	Sort_by_Obtained_Marks (st);
}
else if(x==11)
{
    Pass_Students (st);
}
else if(x==12)
{
    Fail_Students (st);
}
}
while(x!=12);
return 0;
}
}
    //***********************************************************************************************************************************//
   //                                            (FUNCTION 1) READ ALL STUDENTS GRADES                                                 //
  //**********************************************************************************************************************************//
void read_all_student_grades (student st[])
{
	{
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tNAMES\t\t\t|\t\tGRADES\t|");
		printf("\n\t\t|=======================================================|");
	}
	for(int i=0;i<10;i++)
	{
		printf("\n\t\t|%d|%s\t\t\t|\t%c\t\t|",i+1,st[i].First_Name,st[i].grade);
	}
	printf("\n\t\t|=======================================================|");
}



   //********************************************************************************************************************************//
   //                                 (FUNCTION 2) PRINT_SPECIFIC_TABLE_OF_OBTAINED_MARKS_AND_ROLL_NO                                //
  //********************************************************************************************************************************//
void read_specific_record_of_Obtained_Roll_NO (student [])
{
	{
		printf("\n\t\t|==========================================================================|");
		printf("\n\t\t|\tNAMES\t\t\t|\tROLL NO\t|\tOBTAINED MARKS\t   |");
		printf("\n\t\t|==========================================================================|");
	}
	for(int i=0;i<10;i++)
	{
		printf("\n\t\t|%d|%s\t\t\t|\t%d\t|\t%.2f\t\t   |",i+1,st[i].First_Name,st[i].roll_NO,st[i].obtained_marks);
	}
	printf("\n\t\t|==========================================================================|");
}


    //********************************************************************************************************************************//
   //                                          (FUNCTION 3) MODIFY RESULT                                                            //
  //********************************************************************************************************************************//
void modify_result (student [])
{
	int flg=0;
	char Modifier_Name[100];
	fflush(stdin);
	printf("Enter Modifier Name:");
	scanf("%s",Modifier_Name);
	for (int k=0;k<10;k++ && flg==0)
	{
		if(strcmp(Modifier_Name,st[k].First_Name)==0)
		{
			for (int i=0;i<10;i++);
	printf("\nPlease Enter The New Details of student \n");
    fflush(stdin);
	printf("Enter The New Name of student:");
    gets(st[k].First_Name);
	fflush(stdin);
    printf("Enter The Last Name of student:");
    gets(st[k].Last_Name);
    printf("Enter The Father Name of student:");
    gets(st[k].Father_Name);
	printf("Enter The Roll No of student:");
    scanf("%d",&st[k].roll_NO);
    fflush(stdin);
    printf("Enter The marks in physics out of 100:");
    scanf("%d",&st[k].p_marks);
    fflush(stdin);
    printf("Enter The marks in chemistry out of 100 : ");
    scanf("%d",&st[k].c_marks);
    
    printf("Enter The marks in maths out of 100 : ");
    scanf("%d",&st[k].m_marks);
    
    printf("Enter The marks in english out of 100 : ");
    scanf("%d",&st[k].e_marks);
    
    printf("Enter The marks in computer science out of 100 : ");
    scanf("%d",&st[k].cs_marks);
    
    printf("Total marks:");
    scanf("%d",&st[k].total_marks);
    st[k].obtained_marks=st[k].p_marks+st[k].c_marks+st[k].m_marks+st[k].e_marks+st[k].cs_marks;
    printf("Obtained marks=%.2f ",st[k].obtained_marks);
    st[k].percentage=(st[k].p_marks+st[k].c_marks+st[k].m_marks+st[k].e_marks+st[k].cs_marks)/5.0;
    printf("Percentage=%.2f",st[k].percentage);
    if(st[k].percentage>=60)
    st[k].grade='A';
    else if(st[k].percentage>=50 && st[k].percentage<60)
    st[k].grade='B';
    else if(st[k].percentage>=33 && st[k].percentage<50)
    st[k].grade='C';
    else
    st[k].grade='F';
    printf("\nGrade=%c",st[k].grade);
    printf("\n\n\t\t  MODIFIER RECORD     ");
    printf("\n\n=============================================================================================");
	printf("\nFIRST| LAST| FATHER|R.NO| PHY| CHEM| MATH| ENG| C.SCI| TOTAL| OBTAINED| PERCENTAGE| GRADE|");
	//printf("\n-----------------------------------------------------------------------------------------");
    printf("\n%s  |%s| %s | %d  | %d | %d  | %d  | %d | %d   | %d  |  %.2f |  %.2f   |   %c  |\n\n",st[k].First_Name,st[k].Last_Name,st[k].Father_Name,st[k].roll_NO,st[k].p_marks,st[k].c_marks,st[k].m_marks,st[k].e_marks,st[k].cs_marks,st[k].total_marks,st[k].obtained_marks,st[k].percentage,st[k].grade);
     printf("\n=============================================================================================");
flg=1;

}
	}
	printf("\n\t\t OLD INFORMATION OF STUDENTS  ");
	print_main_table (st);
	if(flg==0)
	printf("sorry! no match found.\n");
}



    //*****************************************************************************************************************************//
   //                                           (FUNCTION 4) DELETE_RECORD                                                        //
  //*****************************************************************************************************************************//
void delete_record (student st[])
{
	int n;
	printf("Enter roll no of student to be deleted:");
	scanf("%d",&n);
	int i=n;
	while(i<10)
	{
		st[i-1]=st[i];
		i++;
	}
	n--;
	printf("\n\nAfter deletion the data is:");
	printf("\n\n=============================================================================================");
	printf("\nFIRST| LAST|R.NO| PHY| CHEM| MATH| ENG| C.SCI| TOTAL| OBTAINED| PERCENTAGE| GRADE|");
	printf("\n=============================================================================================");
	for(int i=0;i<9;i++)
	{
    printf("\n%s|%s| %d  | %d | %d  | %d  | %d | %d   | %d  |  %.2f |  %.2f   |   %c  |",st[i].First_Name,st[i].Last_Name,st[i].roll_NO,st[i].p_marks,st[i].c_marks,st[i].m_marks,st[i].e_marks,st[i].cs_marks,st[i].total_marks,st[i].obtained_marks,st[i].percentage,st[i].grade);

}
printf("\n=============================================================================================");
}


    //**********************************************************************************************************************************//
   //                                            (FUNCTION 5) DISPLAY ALL STUDENTS                                                     //
  //**********************************************************************************************************************************//
void display_all_students (student [])
{
		{
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\t     \tNAMES OF STUDENTS\t\t\t|");
		printf("\n\t\t|=======================================================|");
    	}
    	for(int i=0;i<10;i++)
	{
		printf("\n\t\t|\t\t%s %s\t\t\t\t|",st[i].First_Name,st[i].Last_Name);
	}
		printf("\n\t\t|=======================================================|");
}



    //********************************************************************************************************************************//
   //                                 (FUNCTION 6) PRINT_SPECIFIC_TABLE_BY_ROLL_NO                                                   //
  //********************************************************************************************************************************//
void print_specific_table_by_ROLL_NO (student [])
{
	char str[10];
	int n;
	printf("\n\n\n\t\t\t\tENTER ROLL NO OF STUDENT TO PRINT SPECIFIC TABLE:");
	//gets(n);
	scanf("%d",&n);
	int flg=0;{}
	for(int i=0;i<10;i++)
	{
		if(n==st[i].roll_NO)
		{
			flg++;
			printf("\n\t\t =======================================================");
		printf("\n\t\t|%d\tFIRST NAME\t|       %s\t\t\t|",i+1,st[i].First_Name);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tLAST NAME\t|\t%s\t\t\t|",st[i].Last_Name);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tFATHER NAME\t|\t%s\t\t|",st[i].Father_Name);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tROLL NO\t\t|\t%d\t\t\t|",st[i].roll_NO);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tPHYSICS MARKS\t|\t%d\t\t\t|",st[i].p_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tCHEMISTRY MARKS\t|\t%d\t\t\t|",st[i].c_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tMATHS MARKS\t|\t%d\t\t\t|",st[i].m_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tENGLISH MARKS\t|\t%d\t\t\t|",st[i].e_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tCOMPUTER SCIENCE|\t%d\t\t\t|",st[i].cs_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tTOTAL MARKS\t|\t%d\t\t|",st[i].total_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tOBTAINED MARKS\t|\t%.2f\t\t\t|",st[i].obtained_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tPERCENTAGE\t|\t%.2f\t\t\t|",st[i].percentage);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tGRADE\t\t|\t%c\t\t\t|",st[i].grade);
		printf("\n\t\t|=======================================================|");
		}
}
	if(flg==0)
	{
		printf("RECORD NOT FOUND");
	}
	else
	{
		printf("\n%d RECORD FOUND",flg);
	}
}


    //*************************************************************************************************************************************//
   //                                            (FUNCTION 7) PRINT MAIN TABLE                                                            //
  //*************************************************************************************************************************************//

void print_main_table (student st[])
{
		printf("\n ============================================================================================================");
		printf("\n | FIRST   | ROLL NO | PHY | CHEM | MATH | ENG | C.SCI | TOTALMARKS | OBTAINEDMARKS | PERCENTAGEAGE | GRADE |");
	    printf("\n ==============================================================================================================");
	    for(int i=0;i<10;i++)
	    {
	    	printf("\n | %s   | %d     |  %d  |  %d   |  %d  |  %d  |  %d   |  %d       |  %.2f       | %.2f         |    %c   |",st[i].First_Name,st[i].roll_NO,st[i].p_marks,st[i].c_marks,st[i].m_marks,st[i].e_marks,st[i].cs_marks,st[i].total_marks,st[i].obtained_marks,st[i].percentage,st[i].grade);
		}
		fflush(stdin);
		printf("\n ==============================================================================================================");
	}


    //*************************************************************************************************************************************//
   //                                            (FUNCTION 8) PRINT SPECIFIC TABLE                                                        //
  //************************************************************************************************************************************//
void print_specific_table (student st[],int)
{
	char str[10];
	char n[100];
	printf("\n\n\n\t\t\t\tENTER FIRST NAME OF STUDENT TO PRINT SPECIFIC TABLE:");
	//gets(n);
	scanf("%s",n);
	int flg=0;{}
	for(int i=0;i<10;i++)
	{
		if(strcmp (n,st[i].First_Name)==0)
		{
			flg++;
			printf("\n\t\t =======================================================");
		printf("\n\t\t|%d\tFIRST NAME\t|       %s\t\t\t|",i+1,st[i].First_Name);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tLAST NAME\t|\t%s\t\t\t|",st[i].Last_Name);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tFATHER NAME\t|\t%s\t\t|",st[i].Father_Name);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tROLL NO\t\t|\t%d\t\t\t|",st[i].roll_NO);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tPHYSICS MARKS\t|\t%d\t\t\t|",st[i].p_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tCHEMISTRY MARKS\t|\t%d\t\t\t|",st[i].c_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tMATHS MARKS\t|\t%d\t\t\t|",st[i].m_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tENGLISH MARKS\t|\t%d\t\t\t|",st[i].e_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tCOMPUTER SCIENCE|\t%d\t\t\t|",st[i].cs_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tTOTAL MARKS\t|\t%d\t\t|",st[i].total_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tOBTAINED MARKS\t|\t%.2f\t\t\t|",st[i].obtained_marks);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tPERCENTAGE\t|\t%.2f\t\t\t|",st[i].percentage);
		printf("\n\t\t|=======================================================|");
		printf("\n\t\t|\tGRADE\t\t|\t%c\t\t\t|",st[i].grade);
		printf("\n\t\t|=======================================================|");
		}
}
	if(flg==0)
	{
		printf("RECORD NOT FOUND");
	}
	else
	{
		printf("\n%d RECORD FOUND",flg);
	}
}


    //***********************************************************************************************************************************//
   //                                        (FUNCTION 9) SORT_BY_NAME                                                                  //
  //**********************************************************************************************************************************//
void Sort_by_Name(student [])
{
for(int j=0;j<=8;j++)
{
	for(int i=0;i<=8;i++)
	{
		if(strcmp(st[i].First_Name,st[i+1].First_Name)==1)
	{
			student t=st [i];
			st [i]=st [i+1];
			st [i+1]= t;
		}
	}
}
	printf("\n ============================================================================================================");
	printf("\n | FIRST   | ROLL NO | PHY | CHEM | MATH | ENG | C.SCI | TOTALMARKS | OBTAINEDMARKS | PERCENTAGEAGE | GRADE |");
	printf("\n ==============================================================================================================");
	for(int i=0;i<10;i++)
	    {
	printf("\n | %s   | %d     |  %d  |  %d   |  %d  |  %d  |  %d   |  %d       |  %.2f       | %.2f         |    %c   |",st[i].First_Name,st[i].roll_NO,st[i].p_marks,st[i].c_marks,st[i].m_marks,st[i].e_marks,st[i].cs_marks,st[i].total_marks,st[i].obtained_marks,st[i].percentage,st[i].grade);
		}
		fflush(stdin);
	printf("\n ==============================================================================================================");
}


 //***********************************************************************************************************************************//
   //                                        (FUNCTION 10) SORT_BY_Obtained_Marks                                                    //
  //********************************************************************************************************************************//
void Sort_by_Obtained_Marks(student st[])
{
for(int j=0;j<=8;j++)
{
	for(int i=0;i<=8;i++)
	{
		if(st[i].obtained_marks<st[i+1].obtained_marks)
	{
			student t=st [i];
			st [i]=st [i+1];
			st [i+1]= t;
		}
	}
}
    printf("\n\t\tSORTING OF STUDENTS FROM MAXIMUM TO MINIMUM OBTAINED MARKS");
	printf("\n \t\t===============================================================");
	printf("\n \t\t| FIRST  | TOTALMARKS | OBTAINEDMARKS | PERCENTAGEAGE | GRADE |");
	printf("\n \t\t===============================================================");
	for(int i=0;i<10;i++)
	    {
	printf("\n \t\t| %s   | %d       |  %.2f       | %.2f         |    %c   |",st[i].First_Name,st[i].total_marks,st[i].obtained_marks,st[i].percentage,st[i].grade);
		}
		fflush(stdin);
	printf("\n \t\t===================================================================");
}


    //*****************************************************************************************************************************//
   //                                           (FUNCTION 11) PASS_STUDENTS                                                       //
  //*****************************************************************************************************************************//
void Pass_Students(student [])
{
	int i;
	printf("\n\n\t\t\t\tNAMES OF PASS STUDENTS:");
	printf("\n\t\t\t\t     |=============================|");
	printf("\n\t\t\t\t     |\t NAMES\t|   RESULT         |");
	printf("\n\t\t\t\t     |=============================|");
	for(int i=0;i<10;i++)
	{
	if(st[i].result=='P')
		printf("\n\t\t\t\t     |\t%s\t|  %c(PASS))        |",st[i].First_Name,st[i].result);
	}
	printf("\n\t\t\t\t     |=============================|");
}


    //*****************************************************************************************************************************//
   //                                           (FUNCTION 12) FAIL_STUDENTS                                                       //
  //*****************************************************************************************************************************//
void Fail_Students(student [])
{
	int i;
	printf("\n\n\t\t\t\tNAMES OF FAIL STUDENTS:");
	printf("\n\t\t\t\t     |=============================|");
	printf("\n\t\t\t\t     |\t NAMES\t|   RESULT         |");
	printf("\n\t\t\t\t     |=============================|");
	for(int i=0;i<10;i++)
	{
	if(st[i].result=='F')
		printf("\n\t\t\t\t     |\t%s\t|  %c(FAIL))        |",st[i].First_Name,st[i].result);
	}
	printf("\n\t\t\t\t     |=============================|");
}


    //*****************************************************************************************************************************//
   //                                               END OF PROJECT                                                                //
  //*****************************************************************************************************************************//
    
