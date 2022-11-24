#include<stdio.h>
#include<string.h>

typedef struct emp{
    int eid;
    char ename[20];
}E;

void accept(E e1[10], int *n){
    printf("Enter the number of elements: ");
    scanf("%d",n);
    printf("Enter the employee details: ");
    for(int i=0;i<*n;i++){
        scanf("%d%s",&e1[i].eid,e1[i].ename);
    }

}
void search(E e1[10], int n){
    int opt;
    printf("Choose an option: \n1.Name\n2.Employee ID");
    scanf("%d",&opt);
    printf("Enter the search element: ");

    switch(opt){
        case 1: {
                    char key[10];
                    scanf("%s",key);
                    for(int i=0;i<n;i++){
                        if(strcmp(key,e1[i].ename)==0){
                            printf("Name found in location %d",i+1);
                            return;
                        }
                    }
                    printf("not found");
                    break;

                }

        case 2:{
                    int key;
                    scanf("%d",&key);
                    for(int i=0;i<n;i++){
                        if(key==e1[i].eid){
                            printf("ID found in location %d",i+1);
                            return;
                        }
                    }
                    printf("not found");
                    break;
                }
        default: printf("Invalid option.");
                 break;    
    
    }
}

void main(){
    int n;
    E e1[10];
    accept(e1,&n);
    search(e1,n);
}