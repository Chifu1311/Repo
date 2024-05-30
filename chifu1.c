#include <stdio.h>
#include <math.h>//for functions like trig

double arithmetic();
double trignometry();
double theorems();
double advanced();

int main()
{
    //declaration of variables that will be used

    int function;
    int choice;
    int response;

    do{
        printf("\n Welcome\n");
        printf("1 ARITHMETIC\n");
        printf("2 TRIGNOMETRY\n");
        printf("3 THEOREMS\n");
        printf("4 ADVANCED\n");

        printf("Select function: ");
        scanf("%d",&function);

    double result;
    switch(function)
    {
    case 1:
        result=arithmetic();
        break;
    case 2:
        result=trignometry();
        break;
    case 3:
        result=theorems();
        break;
    case 4:
        result=advanced();
        break;
    default:
        printf("Invalid option\n");
    }
    printf("%lf",result);
    printf("\npress 1 to continue or 0 to quit: ");
    scanf("%d",&response);
    }
    while(response==1);
    printf("\nExit\n");
    
}
    double arithmetic()
    {
        double fnumber,a;
        double snumber;
        int func;
        char functions[10][20]={"addition","subtraction","multiplication","division"};
        int b;
        for(b=0;b<4;b++)
        {
            printf("%d.%s\n",b+1,functions[b]);
        }
        printf("Select operator");
        scanf("%d",&func);

        printf("Enter first number: ");
        scanf("%lf",&fnumber);
        printf("Enter second number: ");
        scanf("%lf",&snumber);

        switch(func)
        {
        case 1:
        a =fnumber+snumber;
        break;

        case 2:
        a =fnumber-snumber;
        break;

        case 3:
        a =fnumber*snumber;
        break;

        case 4:
            if(snumber!=0)
            {
            a =fnumber/snumber;
            }
            else{
                printf("infinity");
            }

        break;
        default:
            printf("Invalid operator\n");
            break;
        }
        return a;
    }
    double trignometry()
    {
        int func;
        double angle;
        double k;
        char functions[10][20]={"cosine","sine","tangent"};
        int a;
        for(a=0;a<3;a++)
        {
            printf("%d.%s\n",a+1,functions[a]);
        }
        printf("Select operator: ");
        scanf("%d",&func);
        printf("Enter the number: ");
        scanf("%lf",&angle);

        switch(func)
        {
        case 1:
            k =cos(angle);
            break;

        case 2:
            k =sin(angle);
            break;

        case 3:
            k =tan(angle);
            break;
        default:
            printf("Invalid operator");
            break;

        }
        return k;
        }
    double theorems()
    {
        double fnumber;
        double snumber;
        double tnumber;
        double t;
        int func;
        char functions[10][20]={"pythagorean","area","volume"};
        int c;
        for(c=0;c<3;c++)
        {
            printf("%d.%s\n",c+1,functions[c]);
        }
        printf("Select option");
        scanf("%d",&func);
        printf("Enter first number: ");
        scanf("%lf",&fnumber);
        printf("Enter second number: ");
        scanf("%lf",&snumber);

        switch(func)
        {
        case 1:
           t=sqrt((fnumber*fnumber)+(snumber*snumber));
           break;

        case 2:
            t=fnumber*snumber;
            break;

        case 3:
            printf("Enter third number: ");
            scanf("%lf",&tnumber);
            t=fnumber*snumber*tnumber;
            break;

        default:
            printf("invalid option ");
        }
        return t;

    }
    double advanced(){
     int function, j;
     double snumber;
     double fnumber;
     char functions[10][20]={"power","squireRoot","logarithm"};

     int d;
     for(d=0;d<3;d++)
     {
         printf("%d.%s\n",d+1,functions[d]);
     }
     printf("Select the function: ");
     scanf("%d",&function);
    
    switch(function)
    {
     case 1:
         printf("Enter the number: ");
         scanf("%lf",&fnumber);
         printf("Enter the power: ");
         scanf("%lf",&snumber);
         j=pow(fnumber,snumber);
         break;

     case 2:
         printf("Enter the number: ");
         scanf("%lf",&fnumber);
         j=sqrt(fnumber);
         break;

     case 3:
         printf("Enter the number: ");
         scanf("%lf",&fnumber);
         j=log(fnumber);
         break;

     default:
        printf("Invalid option");
        break;
       }
       return j;
}



