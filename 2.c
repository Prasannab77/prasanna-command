#include<stdio.h>
#include<stdlib.h>
# define MAX 100
struct term
{
    int row;
    int col;
    int value;
};
struct term sparse[MAX],trans[MAX];
int size;
void create();
void display(int values,struct term matrix[]);
int main()
{
    int choice;
while(1)
{

    printf("\n.menu:\n");
    printf("1.create a sparse matrix:\n");
    printf("2.transpose of a sparse matrix:\n");
    printf("3.exit\n");
    printf("enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
{
        case 1:
            
             create();
             break;
        
        case 2:
             transpose();
             break;
        
        case 3:
            exit(0);
        
}
}    
return 0;
}

void create()
{

    int matrix [10][10];
    int i,value,col,row;
    printf("enter no of rows ,cols,and value:");
    scanf("%d%d%d",&row,&col,&value);
      sparse[0].row=row;
      sparse[0].col=col;
      sparse[0].value=value;
      for(i=1;i<=value;i++)
      {
        printf("\n enter row,col,and value:\n");
        scanf("%d%d%d",&sparse[i].row,&sparse[i].col,&sparse[i].value);

      }
display(value,sparse);
}

void transpose()
{
    int i,values;
    values=sparse[0].value;
    for(i=0;i<=sparse[0].value;i++)
    {
        trans[i].row=sparse[i].col;
        trans[i].col=sparse[i].row;
        trans[i].value=sparse[i].value;

    }
display(values,trans);
}

void display(int value,struct term a[])
{
    int i;
    printf("\n\trow\tcol\tvalue\n");
    for(i=0;i<=value;i++)
      {
        printf("a[%d]:%d\t%d\t%d\n",i,a[i].row,a[i].col,a[i].value);
      }
}






