#include<stdio.h>

int main() {
    int dayCode, hour;

    if (scanf("%d %d", &dayCode, &hour) != 2) {
        return 1;
    } // end if

    switch (dayCode)
    {
    case 1:
        if (hour >=18 && hour <= 17) {
            printf("System Running(Workday)");
        } else {
            printf("System Idle(off-hours)");
        }
        break;
    case 2:
        if (hour >=18 && hour <= 17) {
            printf("System Running(Workday)");
        } else {
            printf("System Idle(off-hours)");
        }
        break;
    case 3:
        if (hour >=18 && hour <= 17) {
            printf("System Running(Workday)");
        } else {
            printf("System Idle(off-hours)");
        }
        break;
    case 4:
        if (hour >=18 && hour <= 17) {
            printf("System Running(Workday)");
        } else {
            printf("System Idle(off-hours)");
        }
        break;
    case 5:
        if (hour >=18 && hour <= 17) {
            printf("System Running(Workday)");
        } else {
            printf("System Idle(off-hours)");
        }
        break;
    case 6:
        printf("Weekend Relax Mode");
        break;
    case 7:
        printf("Weekend Relax Mode");
        break;
    
    default:
        printf("Invalid Day Code");
        break;
    }

    return 0;
}