#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 256
#define MAXCHAR 1000


/* Vidadi Nasibov 2020 Project: Library Management System [Simulation of library book management, like ADA Library]*/

/* Based on electron library systems' working principle */

/*
IMPORTANT NOTE: In some swith cases, 1, 3 and 5, used {}, brackets, before writing the code. Sometimes in C, occurs error which states jump of cases. 
The main reason of it declaring some necessary variables inside switch cases. For overcoming this error, developer should use
brakets, {}, before writting his/her code to case. It allows declared variable to be used only in spefici case, and overcomes jumping error. 

IMPORTANT NOTE (2): Detele Algorithm used in case 4 is simple selecting the line witch is want to be deleted. All lines except selected one, are copied by system and 
moved to new .txt file. Then new .txt files names with the old one and old one deletes by system. 

Other main notes were mentioned in the spefic lines, which needs comment.
*/

char filename[40]= "Notes.txt";
int gotit;
char *ptr;
char buff[BUFSIZ];
FILE *fp, *fp1, *fp2;
int i;
void libraryMenu(void);
void systemPause(void);

void flush()   //  flush generates a value which helps to break from used function
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);  //used several time in project
}
 
typedef struct {
  char bookName[255];
  char authorName[255];
  int publishYear;
} Note;

void libraryMenu(void) {  //simple interface design
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2    WELCOME TO LIBRARY MANAGMENT SYSTEM!   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   MAIN MENU   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
		printf("=========================================\n");
		printf("\xDB\xDB\xDB\xDB\xB1 0. Rules                               |\n");
		printf("\xDB\xDB\xDB\xDB\xB1 1. Donate a book                       |\n");
		printf("\xDB\xDB\xDB\xDB\xB1 2. Check Spesific Book                 |\n");
		printf("\xDB\xDB\xDB\xDB\xB1 3. Show All Books                      |\n");
		printf("\xDB\xDB\xDB\xDB\xB1 4. Order a Book                        |\n");
		printf("\xDB\xDB\xDB\xDB\xB1 5. How Much Should I Pay?              |\n");
		printf("\xDB\xDB\xDB\xDB\xB1 6. Exit                                |\n");
		printf("=========================================\n");
	}
	
void systemPause(void){
	int c, d;
  		for (c = 1; c <= 33007; c++)             /* This block of code gives time-out*/
       			for (d = 1; d <= 23067; d++)                          /* before next line being executed. It also used for nice interface */
      					 {}
}	
 
int main(int argc, char* argv[]){
	
    char choice;
    Note* notes, note;
    
    int len = 0;
    notes = (Note*) malloc (sizeof(Note) * len);
 
    while(1) {
      
      libraryMenu();
      
      printf("\n\nPlease read rules before using the system!");
	  printf("\n\nEnter your choice: ");
      scanf("\n%c", &choice);
      
      
	  switch(choice) {
	  	
	  	case '0':
	  		
	  		system("CLS"); 
	  		printf("\n\n\t\t\t\t*RULES*\t\t\t");
	  		
	  		printf("\n\n 1. User cannot DONATE and ORDER book at same time (at same compile)!\n");
	  		printf("\n 2. User can only borrow one book electronically at each compile!\n");
	  		printf("\n 3. User can only get purchased books by coming to library. NO delivery!\n");
	  		
	  		printf("\n\nPress any key for Main Menu. ");
  			scanf("\n%c", &choice);
    	    system("CLS");
	  		break;
        case '1':
        {
		char name[200]; 
   		FILE * fp;
   		int i;
   		fp = fopen ("Notes.txt","a+");
        system("CLS"); 
        
        
        flush();
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    LIBRARY MANAGMENT SYSTEM!    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
		printf("   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   BOOK DONATION!   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
		printf("=========================================\n");
		printf("\xDB\xDB\xDB\xDB\xB1 Enter book's name, please: ");
		//printf("\xDB\xDB\xDB\xDB\xB1                                        |\n");
        //printf("Enter book's name, please: ");
     	scanf("%[^\n]%*c", note.bookName);
		fprintf (fp, note.bookName,i + 1); 
		fprintf (fp, "     | ",i + 1);
        
        printf("\xDB\xDB\xDB\xDB\xB1 Enter author's name, please: "); 
        scanf("%[^\n]%*c", note.authorName);
		fprintf (fp, note.authorName,i + 1); 
		fprintf (fp, "    |   ",i + 1);
        		
		printf("\xDB\xDB\xDB\xDB\xB1 Enter book's publish year, please: ");
		scanf("%d", &note.publishYear);
		fprintf (fp, "%d ",note.publishYear); 
      
        fprintf (fp, "\n",i + 1); 
   		fclose (fp);
   
        printf("\n");
        printf("=========================================================\n");
		printf("\xDB\xDB\xDB\xDB\xB1 Thank you! Book donation added to list sucessfully!\n");
        printf("\xDB\xDB\xDB\xDB\xB1 You're redirecting to main menu...\n");
  		
  		systemPause();
      					 
      	system("CLS");
      }
        break;
        
        case '2':
	{
		fp = fopen ("Notes.txt","r");
		
		char chosen_bookName[100], chosen_authorName[100];
		
		system("CLS");
		
		flush();
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    LIBRARY MANAGMENT SYSTEM!    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   SPESIFIC BOOK CHECK!   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
		printf("===================================================\n");
		printf("\xDB\xDB\xDB\xDB\xB1 Enter book's name you want to search, please: ");
        scanf("%[^\n]%*c", chosen_bookName); 
        
        printf("\xDB\xDB\xDB\xDB\xB1 Enter author's name, please: "); 
        scanf("%[^\n]%*c", chosen_authorName);
        	
	    char *target= chosen_bookName;    // target for SEARCHING inside txt file, among books
	    
	    
  		gotit = 0;
  		while(fgets(buff, BUFSIZ, fp)) {
    		ptr = strstr(buff, target); 
    		if(ptr) {
    			system("CLS");
    			printf("===================================================\n");
    			printf("\xDB\xDB\xDB\xDB\xB1 You can borrow/buy requested book!\n\n");
    			
    				fp = fopen ("Notes.txt","a+");
    			     char mystring [200];
    			     char name_file[]= "Notes.txt";
					 char *buff= chosen_bookName;
    					if (fp == NULL) perror ("Error opening file");
    						else
    							{
        						while( fgets (mystring ,200 , fp) != NULL )
        						{
           			 		if ((ptr = strstr (mystring,buff))!=NULL)    //if string is found it returns if return true value and prints
            				printf("%s",mystring);
        				}
    				}
    					printf("\n\xDB\xDB\xDB\xDB\xB1 Press any key for Main Menu. ");
  						scanf("\n%c", &choice);
    					system("CLS");
     					fclose (fp);
      			
				  rewind(fp);
      			gotit = 1;
      			break;
   			 }
  		}
  		fflush(fp);
  		fclose(fp);

  		if(!gotit){
    		printf("\n\xDB\xDB\xDB\xDB\xB1 Sorry, requested book does not found!\n");
    		printf("\xDB\xDB\xDB\xDB\xB1 You're redirecting to main menu...\n");
    		
    	systemPause();
      	}
      		system("CLS");
  			//gotit = getchar(); 
			}
        break;
        
        case '3':
		system("CLS");
        char str[MAXCHAR];
        	    
		fp = fopen("Notes.txt", "r");
    			
		if (fp == NULL){
        	printf("Could not open file %s","Notes.txt");
        	return 1;
    	}
    	
		while (fgets(str, MAXCHAR, fp) != NULL)
       		printf("%s", str);
    	
		fclose(fp);
    				
		printf("\n\xDB\xDB\xDB\xDB\xB1 Press any key for Main Menu. ");
  		scanf("\n%c", &choice);
    	system("CLS");
        break;
        
        case '4':     // This block serves for deleting data. Addtional information given in the top.
	       {              
	    system("CLS");
	    char c;
        int del_line, temp = 1;
        fp1 = fopen(filename, "r"); //a+
        c = getc(fp1);
        while (c != EOF)
        {
          printf("%c", c);
          c = getc(fp1);
        }
        
        rewind(fp1);
        
        printf("\n\n\t\t\t**WARNING** \n\nYou can only borrow one book electronically at each compile.\n\n\tIt is for avoiding unfair book share!!");
        printf(" \n\n\nEnter line number of the of the book you want to borrow.\n\t   Otherwise press 'q' for main menu: ");
        scanf("%d", &del_line);
        
  		char delete_line;
  		delete_line = getchar();
		
		if(delete_line == 'q'){      // user can exit to main menu after he/she borrowed his/her book
			system("CLS");
		}
		
		else
		
        fp2 = fopen("copy.c", "w"); //a+
        c = getc(fp1);
        
		
        while (c != EOF) {
          c = getc(fp1);
          if (c == '\n')
          temp++;
          // all lines except the line to be deleted
          if (temp != del_line)
          {
            //copy all lines in file copy.c
            putc(c, fp2);
          }
        }
        //close both the files for prevent any bug.
        fclose(fp1);
        fclose(fp2);
        //deletes original file
        remove(filename);
        //rename the file to original name
        rename("copy.c", filename);
        printf("\n The contents of file after being modified are as  follows:\n");
        fp1 = fopen(filename, "r");
        c = getc(fp1);
        while (c != EOF )  {
            printf("%c", c);
            c = getc(fp1);
        }
        fclose(fp1);
        system("CLS");
	    }
	
	    //deleteLine();
        break;
        
        case '5':
        {
		int numberOfBooks, i = 1;
		float sum = 0, price;
		system("CLS");
        char str[MAXCHAR];
        	    
		fp = fopen("booksForSale.txt", "a+");
    			
		if (fp == NULL){
        	printf("Could not open file %s","booksForSale.txt");
        	return 1;
    	}
    	
		while (fgets(str, MAXCHAR, fp) != NULL)
       		printf("%s", str);
    	
		fclose(fp);
    				
		printf("\n\nHow many books you want to buy? ");
  		scanf("\n%d", &numberOfBooks);
  		
  		printf("\n\n**Prices of books are fixed and you can check in the table above.\n");
  		
  		while(i <= numberOfBooks){
  			
			printf("\nPlease enter the prices of the books one-by-one: ");
  			scanf("%f", &price);
  			
  			sum += price;
  			i++;
		  }
		
		printf("\n-----------------------------------------------------------------");
		printf("\n\n*You can take them from bookshop of our library whenever you want!*\n\nThe total sum of your books is %.2f AZN.\n", sum);
    	
		printf("\n\nPress any key for Main Menu. ");
  		scanf("\n%c", &choice);
    	system("CLS");
    }
        break;
        	
        case '6':
        	system("CLS");
        	printf("Thank you, Goodbye!");
        	exit(0);	
        break;
        
        default:
        printf("Not a valid option\n"); //For error checking, preventing other inputs
        break;
      }
    }
    return 0;
}
