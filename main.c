\\WRTIE A RECURSIVE PROGRAM TO SOLVE THE TOWER OF HANOI PROBLEM

#include <stdio.h>
#include <stdlib.h>
void towerHanoi(int, char, char, char);//Declaration

int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerHanoi(n, 'A', 'C', 'B');//Call
    return 0;
}
//Definition
void towerHanoi(int n, char source, char dest, char spare)
{
    if(n==1)
    {
        printf("\nDisk 1 move from %c to %c ", source, dest);
        return;
    }
    towerHanoi(n-1, source, spare, dest);
    printf("\nDisk %d moves q   from %c to %c ", n, source, dest);
    towerHanoi(n-1, spare, dest, source);
}
