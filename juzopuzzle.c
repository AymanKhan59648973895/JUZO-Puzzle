#include <stdio.h>
#include <stdlib.h>
int top = 12;
int stack[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int count;
int rem = 13;

void pop1(int count)
{
    --top;
}

int main()
{ //start of main//
    int i = 0, level;

    char ch;

    printf(" WELCOME TO JUZO PUZZLE\n");
    printf(" RULES:\n");
    printf(" THERE ARE A MAXIMUM OF 13 FILES, WHICH CONSISTS OF ONE CORRUPT FILE THAT IS THE 13TH FILE\n");
    printf(" YOU CAN CHOOSE UP TO A MAXIMUM OF 3 FILES AND A MINIMUM OF ONE FILE PER TURN\n");
    printf(" THE PERSON THAT IS LEFT OUT WITH THE LAST FILE (CORRUPT FILE) LOSES\n");
    printf(" Choose difficulty level- 1 or 2\n");
    scanf("%d", &level);

    if (level == 1)
    {

        int choice;
        do
        { //start of for//

            if (i % 2 == 0)
            { //start of if//
                printf(" PLAYER 1\n");
                printf(" HOW MANY FILES DO YOU WANT TO REMOVE?\n");
                scanf("%d", &choice);
                switch (choice)
                { //start of switch//
                case 1:
                    if (choice < rem)
                     {
                        printf(" 1 FILE HAS BEEN REMOVED\n");
                     }
                    pop1(count);
                    rem--;
                    if (top >= 0)
                     {
                        printf(" REMAINING NO OF FILES ARE %d \n", rem);
                     }
                    break;

                case 2:
                    if (choice < rem)
                     {
                        printf(" 2 FILES HAS BEEN REMOVED\n");
                     }
                    pop1(count);
                    pop1(count);
                    rem--;
                    rem--;
                    if (top >= 0)
                     {
                        printf(" REMAINING NO OF FILES ARE %d \n", rem);
                     }
                    break;

                case 3:
                    if (choice < rem)
                     {
                        printf(" 3 FILES HAS BEEN REMOVED\n");
                     }
                    pop1(count);
                    pop1(count);
                    pop1(count);
                    rem--;
                    rem--;
                    rem--;
                    if (top >= 0)
                     {
                        printf(" REMAINING NO OF FILES ARE %d \n", rem);
                     }
                    break;

                default:
                    printf(" INVALID CHOICE\n");
                    exit(0);
                };
            }
            else
             {
                printf(" PLAYER 2\n");
                scanf("%d", &choice);
                switch (choice)
                {

                case 1:
                    if (choice < rem)
                    {
                        printf(" 1 FILE HAS BEEN REMOVED\n");
                    }
                    pop1(count);
                    rem--;
                    if (top >= 0)
                    {
                        printf(" REMAINING NO OF FILES ARE %d \n", rem);
                    }
                    break;

                case 2:
                    if (choice < rem)
                    {
                        printf(" 2 FILES HAS BEEN REMOVED\n");
                    }
                    pop1(count);
                    pop1(count);
                    rem--;
                    rem--;
                    if (top >= 0)
                    {
                        printf(" REMAINING NO OF FILES ARE %d \n", rem);
                    }
                    break;

                case 3:
                    if (choice < rem)
                    {
                        printf(" 3 FILES HAS BEEN REMOVED\n");
                    }
                    pop1(count);
                    pop1(count);
                    pop1(count);
                    rem--;
                    rem--;
                    rem--;
                    if (top >= 0)
                    {
                        printf(" REMAINING NO OF FILES ARE %d \n", rem);
                    }
                    break;

                default:
                    printf(" INVALID CHOICE\n");
                };
            }
            i++;
        } while (i <= 12 && top != -1 && top != -2 && top != -3); //end of if//

        if (i % 2 == 0)
        {
            printf(" PLAYER 1 WINS\n");
        }
        else
        {
            printf(" PLAYER 2 WINS\n");
        }
    }
  
    else if (level == 2)
      
    {
        do
        {

            int choice2, j;
            printf(" PLAYER\n");
            printf(" HOW MANY FILES DO YOU WANT TO REMOVE?\n");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                if (choice2 < rem)
                {
                    printf(" 1 FILE HAS BEEN REMOVED\n");
                    pop1(count);
                }
                if (rem != 1)
                {
                    printf(" COMPUTER HAS REMOVED 3 FILES\n");
                }
                pop1(count);
                pop1(count);
                pop1(count);
                if (top >= 0)
                {
                    printf(" REMAINING NO. OF FILES ARE %d \n", rem -= 4);
                }
                break;

            case 2:
                if (choice2 < rem)
                {
                    printf(" 2 FILES HAS BEEN REMOVED\n");
                }
                pop1(count);
                pop1(count);
                if (rem != 1)
                {
                    printf(" COMPUTER HAS REMOVED 2 FILES\n");
                }
                pop1(count);
                pop1(count);

                if (top >= 0)
                {
                    printf(" REMAINING NO. OF FILES ARE %d \n", rem -= 4);
                }
                break;

            case 3:
                if (choice2 < rem)
                {
                    printf(" 3 FILES HAS BEEN REMOVED\n");
                }
                pop1(count);
                pop1(count);
                pop1(count);
                if (rem != 1)
                {
                    printf(" COMPUTER HAS REMOVED 1 FILE\n");
                }

                pop1(count);

                if (top >= 0)
                {
                    printf(" REMAINING NO. OF FILES ARE %d \n", rem -= 4);
                }

                break;

            default:
                printf(" INVALID CHOICE\n");
                exit(0);
            };
        } while (i <= 12 && top>=0);
      

        printf(" COMPUTER WINS!!\n BETTER LUCK NEXT TIME..\n");
    }
    else
    {
        printf(" INVALID LEVEL\n");
        exit(0);
    }
}