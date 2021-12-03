#include <stdio.h>
#include<conio.h>

void _or(){
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a == 0 || a == 1) && (b == 0 || b == 1)){
        if (!(a | b)){
            printf("%d",0);
        }
        else{
            printf("1");
        }
    }
    else
        printf("Invalid data");
}

void _and(){
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a == 0 || a == 1) && (b == 0 || b == 1)){
        if (!(a & b)){
            printf("%d",0);
        }
        else{
            printf("1");
        }
    }
    else
        printf("Invalid data");
}

void _not(){
    int a;
    scanf("%d", &a);
    if ((a == 0 || a == 1)){
        if (!a){
            printf("%d",1);
        }
        else{
            printf("0");
        }
    }
    else
        printf("Invalid data");
}

void main(){
    printf("Name: Awantika Yadav\n");
    printf("Roll no. : 21165BTLCS013\n");
    printf("Year: 2nd\n");
    printf("Section: B\n");
    printf("Group: G2\n");
    printf("------------------------------------------\n");
    printf("\nProgram Name: Logic Gate of two sets.\n");
    printf("*******************************************\n");
    
    int _case;
    printf("Choose your test case (0 for or/ 1 for and / 2 for not): ");
    scanf("%d", &_case);
    switch(_case){
        case 0:
            _or();
            break;
        case 1:
            _and();
            break;
        case 2:
            _not();
            break;
        
        default:
            printf("Please select any valid choice!!!");
    }
    
    getch();
}