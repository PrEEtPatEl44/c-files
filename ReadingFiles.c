#include<stdio.h>
int main(){
    FILE *fptr=fopen("C:\\Users\\User\\Desktop\\preet\\COLLEGE.txt", "r");
    char read[100];
    
    while(fgets(read, 100, fptr)!=NULL){
    
    printf("%s", read);
    }
    fclose(fptr);

}