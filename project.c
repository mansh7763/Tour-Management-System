#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void international()
{
    FILE *inter;
    char ch;
    inter = fopen("international.txt", "r");
    while (1)
    {
        ch = fgetc(inter);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    printf("\n");
    fclose(inter);

    // read passenger information
    printf("\nkindly give your information:-\n");
    int passesngers;
    printf("\nENTER THE NUMBER OF PASSENGERS\n");
    scanf("%d", &passesngers);
    FILE *fp;
    char another = 'y';
    struct passenger
    {
        char name[20];
        int age;
        long long adhar;
        long long phone;
    };
    struct passenger p;
    fp = fopen("info.txt", "w");

    while (another == 'y')
    {

        printf("\nENTER NAME\n");
        fflush(stdin);
        fgets(p.name, 20, stdin);
        printf("\nENTER age\n");
        scanf("%d", &p.age);
        printf("\nENTER adhar number\n");
        scanf("%lld", &p.adhar);
        printf("\nENTER phone number\n");
        scanf("%lld", &p.phone);
        fwrite(&p, sizeof(struct passenger), 1, fp);
        printf("\nADD ANOTHER RECORD(Y/N)\n");
        fflush(stdin);
        another = getche();
    }
    fclose(fp);
    printf("\n");
    printf("YOU HAVE SELECTED INTERNATIONAL TOUR:-\n");
    FILE *inter1;
    char ch1;
    inter1 = fopen("international.txt", "r");
    while (1)
    {
        ch1 = fgetc(inter1);
        if (ch1 == EOF)
            break;
        printf("%c", ch1);
    }
    printf("\n");
    fclose(inter1);
    printf("\nNOW TELL ME YOUR CHOICES WHERE YOU WANT TO GO:-\n");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO PARIS WILL BE 20000/-\n");
    }
    else if (choice == 2)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO MALDIVES WILL BE 19000/-\n");
    }
    else if (choice == 3)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO AMSTERDAM WILL BE 23000/-\n");
    }
    else if (choice == 4)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO ROME WILL BE 25500/-\n");
    }
    else if (choice == 5)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO THAILAND WILL BE 24000/-\n");
    }
    printf("\nYOU WILL ALSO BE GIVEN DISCOUNT ACCORDING TO DAYS WHICH WAS SHOWN BEFORE.\n");
    int days;
    printf("\nPLEASE ENTER THE NUMBER OF DAYS YOU WANT TO TRAVEL\n");
    scanf("%d", &days);
    double t;
    if (choice == 1)
    {
        if (days > 30)
        {
            t = days * passesngers * 20000;
            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t - (3 * (t / 10)));
        }
        else
        {

            t = days * passesngers * 20000;

            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t);
        }
    }
    else if (choice == 2)
    {
        if (days > 30)
        {

            t = days * passesngers * 19000;

            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t - (3 * (t / 10)));
        }
        else
        {

            t = days * passesngers * 19000;
            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t);
        }
    }
    else if (choice == 3)
    {
        if (days > 30)
        {

            t = days * passesngers * 23000;
            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t - (3 * (t / 10)));
        }
        else
        {

            t = days * passesngers * 23000;
            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t);
        }
    }
    else if (choice == 4)
    {
        if (days > 30)
        {

            t = days * passesngers * 25500;
            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t - (3 * (t / 10)));
        }
        else
        {

            t = days * passesngers * 25500;
            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t);
        }
    }
    else if (choice == 5)
    {
        if (days > 30)
        {

            t = days * passesngers * 24000;
            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n ", t - (3 * (t / 10)));
        }
        else
        {

            t = days * passesngers * 8100;
            printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t);
        }
    }
    printf("HIRING OF GUIDE WILL COST YOU AN EXTRA OF 2000\n");
    printf("DO YOU WANT GUIDE FOR YOUR TOUR\n");
    printf("1.YES\n");
    printf("2.NO\n");
    int guide;
    scanf("%d", &guide);
    double total;
    if (guide == 2)
    {
        if (choice == 1)
        {
            if (days > 30)
            {

                t = days * passesngers * 20000;
                total = t - (3 * (t / 10));
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 20000;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 2)
        {
            if (days > 30)
            {

                t = days * passesngers * 19000;
                total = t - (3 * (t / 10));
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 19000;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 3)
        {
            if (days > 30)
            {

                t = days * passesngers * 23000;
                total = t - (3 * (t / 10));
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 23000;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 4)
        {
            if (days > 30)
            {

                t = days * passesngers * 25500;
                total = t - (3 * (t / 10));
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 25500;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 5)
        {
            if (days > 30)
            {

                t = days * passesngers * 24000;
                total = t - (3 * (t / 10));
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf \n", total);
            }
            else
            {

                t = days * passesngers * 8100;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
    }
    else if (guide == 1)
    {
        if (choice == 1)
        {
            if (days > 30)
            {

                t = days * passesngers * 20000;
                total = t - (3 * (t / 10)) + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 20000;
                total = t + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 2)
        {
            if (days > 30)
            {

                t = days * passesngers * 19000;
                total = t - (3 * (t / 10)) + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 19000;
                total = t + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 3)
        {
            if (days > 30)
            {

                t = days * passesngers * 23000;
                total = t - (3 * (t / 10)) + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 23000;
                total = t + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 4)
        {
            if (days > 30)
            {

                t = days * passesngers * 25500;
                total = t - (3 * (t / 10)) + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 25500;
                total = t + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 5)
        {
            if (days > 30)
            {

                t = days * passesngers * 24000;
                total = t - (3 * (t / 10)) + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n ", total);
            }
            else
            {

                t = days * passesngers * 8100;
                total = t + 2000;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
    }
    // generating the receipt

    printf("\n DO YOU WANT TO GENARATE RECEIPT:-\n");
    printf("1:yes\n");
    printf("2:no\n");
    int re;
    scanf("%d", &re);
    if (re == 1)
    {
        // printing the location

        if (choice == 1)
        {
            printf("you have selected PARIS\n");
        }
        if (choice == 2)
        {
            printf("you have selected MALDIVES\n");
        }
        if (choice == 3)
        {
            printf("you have selected AMSTERDAM\n");
        }
        if (choice == 4)
        {
            printf("you have selected ROME\n");
        }
        if (choice == 5)
        {
            printf("you have selected THAILAND\n");
        }

        // printing the info
        printf("\t\t\t\t\t  PASSENGER INFO \n");
        FILE *f;
          struct passenger
        {
            char name[20];
            int age;
            long long int adhar;
            long long int phone;
        };
        struct passenger p;
        f = fopen("info.txt", "r");
        if (f == NULL)
        {
            puts("cannot open file");
            exit(0);
        }
        while (fread(&p, sizeof(p), 1, f) == 1)
        {
            
            printf("\t\t\t\t  NAME :  %s\n", p.name);
            printf("\t\t\t\t  AGE :  %d\n", p.age);
            printf("\t\t\t\t  ADHAR NUMBER :  %lld\n", p.adhar);
            printf("\t\t\t\t  PHONE NUMBER :  %lld\n", p.phone);
            printf("\n\n\n\n");
        }
        fclose(f);
        printf("\n");

        // printing total amount

        printf("\n\n");
        printf("YOUR FINAL AMOUNT IS : %lf\n", total);
        printf("THANK YOU FOR CHOOSING US");
    }
    else
    {
        printf("thank you for using our services");
    }
}

void domestic()
{
    FILE *dom;
    char ch;
    dom = fopen("domestic.txt", "r");
    while (1)
    {
        ch = fgetc(dom);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    printf("\n");
    fclose(dom);

    // read passenger information
    printf("\nkindly give your information:-\n");
    int passesngers;
    printf("ENTER THE NUMBER OF PASSENGERS\n");
    scanf("%d", &passesngers);
    FILE *fp;
    char another = 'y';
    struct passenger
    {
        char name[20];
        int age;
        long long adhar;
        long long phone;
    };
    struct passenger p;
    fp = fopen("info.txt", "w");

    while (another == 'y')
    {

        printf("\nENTER NAME\n");
        fflush(stdin);
        fgets(p.name, 20, stdin);
        printf("ENTER age\n");
        scanf("%d", &p.age);
        printf("ENTER adhar number\n");
        scanf("%lld", &p.adhar);
        printf("ENTER phone number\n");
        scanf("%lld", &p.phone);
        fwrite(&p, sizeof(struct passenger), 1, fp);
        printf("\nADD ANOTHER RECORD(Y/N)\n");
        fflush(stdin);
        another = getche();
    }
    fclose(fp);
    printf("\n");
    printf("\n");
    printf("YOU HAVE SELECTED DOMESTIC TOUR:-\n");
    FILE *dom1;
    char ch1;
    dom1 = fopen("domestic.txt", "r");
    while (1)
    {
        ch1 = fgetc(dom1);
        if (ch1 == EOF)
            break;
        printf("%c", ch1);
    }
    printf("\n");
    fclose(dom1);
    printf("PLEASE CHOOSE THE DESTINATION WHERE YOU WANT TO TRAVEL\n");
    int choice;
    double amt;
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO MYSSORRIE WILL BE 6300/-\n");
    }
    else if (choice == 2)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO SHIMLA WILL BE 6900/-\n");
    }
    else if (choice == 3)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO MANALI WILL BE 7600/-\n");
    }
    else if (choice == 4)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO DARJEELING WILL BE 7700/-\n");
    }
    else if (choice == 5)
    {
        printf("YOUR TOTAL PER DAY COST OF ONE PERSON TO GOA WILL BE 8100/-\n");
    }
    printf("YOU WILL ALSO BE GIVEN DISCOUNT ACCORDING TO DAYS WHICH WAS SHOWN BEFORE.\n");
    int days;
    printf("PLEASE ENTER THE NUMBER OF DAYS YOU WANT TO TRAVEL\n");
    scanf("%d", &days);
    printf("HIRING OF GUIDE WILL COST YOU AN EXTRA OF 500\n");
    printf("DO YOU WANT GUIDE FOR YOUR TOUR\n");
    printf("1.YES\n");
    printf("2.NO\n");
    int guide;
    scanf("%d", &guide);
    double t;
    double total;
    if (guide == 1)
    {
        if (choice == 1)
        {
            if (days > 30)
            {

                t = days * passesngers * 6300;
                total = t - (t / 4) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 6300;
                total = t - (t / 5) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 6300;
                total = t - ((3 * t) / 20) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 6300;
                total = t + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 2)
        {
            if (days > 30)
            {

                t = days * passesngers * 6900;
                total = t - (t / 4) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 6900;
                total = t - (t / 5) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 6900;
                total = t - ((3 * t) / 20) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 6900;
                total = t + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 3)
        {
            if (days > 30)
            {

                t = days * passesngers * 7600;
                total = t - (t / 4) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 7600;
                total = t - (t / 5) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 7600;
                total = t - ((3 * t) / 20) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 7600;
                total = t + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t + 500);
            }
        }
        else if (choice == 4)
        {
            if (days > 30)
            {

                t = days * passesngers * 7700;
                total = t - (t / 4) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 7700;
                total = t - (t / 5) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 7700;
                total = t - ((3 * t) / 20) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 7700;
                total = t + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 5)
        {
            if (days > 30)
            {

                t = days * passesngers * 8100;
                total = t - (t / 4) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 8100;
                total = t - (t / 5) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 8100;
                total = t - ((3 * t) / 20) + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 8100;
                total = t + 500;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
    }
    if (guide == 2)
    {
        if (choice == 1)
        {
            if (days > 30)
            {

                t = days * passesngers * 6300;
                total = t - (t / 4);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 6300;
                total = t - (t / 5);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 6300;
                total = t - ((3 * t) / 20);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 6300;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 2)
        {
            if (days > 30)
            {

                t = days * passesngers * 6900;
                total = t - (t / 4);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 6900;
                total = t - (t / 5);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 6900;
                total = t - ((3 * t) / 20);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 6900;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 3)
        {
            if (days > 30)
            {

                t = days * passesngers * 7600;
                total = t - (t / 4);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 7600;
                total = t - (t / 5);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 7600;
                total = t - ((3 * t) / 20);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 7600;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", t);
            }
        }
        else if (choice == 4)
        {
            if (days > 30)
            {

                t = days * passesngers * 7700;
                total = t - (t / 4);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 7700;
                total = t - (t / 5);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 7700;
                total = t - ((3 * t) / 20);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 7700;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
        else if (choice == 5)
        {
            if (days > 30)
            {

                t = days * passesngers * 8100;
                total = t - (t / 4);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 15)
            {

                t = days * passesngers * 8100;
                total = t - (t / 5);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else if (days > 8)
            {

                t = days * passesngers * 8100;
                total = t - ((3 * t) / 20);
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
            else
            {

                t = days * passesngers * 8100;
                total = t;
                printf("YOUR TOTAL COST OF TOUR WILL BE %lf\n", total);
            }
        }
    }
    // generating the receipt

    printf("\n DO YOU WANT TO GENARATE RECEIPT:-\n");
    printf("1:yes\n");
    printf("2:no\n");
    int re;
    scanf("%d", &re);
    if (re == 1)
    {
        // printing the location

        if (choice == 1)
        {
            printf("you have selected MYSSORRIE\n\n");
        }
        if (choice == 2)
        {
            printf("you have selected SHIMLA\n\n");
        }
        if (choice == 3)
        {
            printf("you have selected MANALI\n\n");
        }
        if (choice == 4)
        {
            printf("you have selected DARJEELING\n\n");
        }
        if (choice == 5)
        {
            printf("you have selected GOA\n\n");
        }
        printf("\t\t\t\t\t  PASSENGER INFO \n");
        FILE *f;
        struct passenger
        {
            char name[20];
            int age;
            long long int adhar;
            long long int phone;
        };
        struct passenger p;
        f = fopen("info.txt", "r");
        if (f == NULL)
        {
            puts("cannot open file");
            exit(0);
        }
        while (fread(&p, sizeof(p), 1, f) == 1)
        {

            
            printf("\t\t\t\t  NAME :  %s\n", p.name);
            printf("\t\t\t\t  AGE :  %d\n", p.age);
            printf("\t\t\t\t  ADHAR NUMBER :  %lld\n", p.adhar);
            printf("\t\t\t\t  PHONE NUMBER :  %lld\n", p.phone);
            printf("\n\n\n\n");
        }
        fclose(f);
        printf("\n");

        // printing total amount

        printf("\n\n");
        printf("YOUR FINAL AMOUNT IS : %lf\n", total);
        printf("THANK YOU FOR CHOOSING US");
    }
    else
    {
        printf("thank you for using our services");
    }
}

void menu()
{
    int choice;
    printf("\t\t\t*** WELCOME ***\n");
    printf("\t\t*** TOUR MANGEMENT SYSTEM ***");
    printf("\n\n\n");
    printf("1:DO YOU WANT A INTERNATIONAL TOUR\n");
    printf("2:DO YOU WANT A DOMESTIC TOUR\n");
    printf("3.EXIT");
    printf("\n\n");
    printf("ENTER YOUR CHOICE SIR: \n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        international();
    }
    else if (choice == 2)
    {
        domestic();
    }
    else if (choice == 3)
    {
        system("clear");
        menu();
    }
    else
    {
        printf("kindly enter appropriate choice");
        system("clear");
        menu();
    }
}
int main()
{
    menu();
    return 0;
}