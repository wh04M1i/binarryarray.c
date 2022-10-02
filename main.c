#include<stdio.h>
#include<stdlib.h>
int arr[20];
void createLeftChild(int key, int index){
    if(arr[index]=='\0'){
        printf("No parent found\n");
        return;
    }
    arr[(2*index)+1] = key;
}
void createRightChild(int key, int index){
    if(arr[index]=='\0'){
        printf("No parent found\n");
        return;
    }
    arr[(2*index)+2] = key;
}
void createRoot(int key){
    if(arr[0]!='\0'){
        printf("Root already Creaed");
        return;
    }
    arr[0] = key;
}
void printTree(){
    int i;
    while(arr[i]!='\0'){
        printf("%d ",arr[i]);
        i++;
    }
}
int main(){
    createRoot(10);
    int choice,i=0,num;
    do{
        printf("Enter the value of left Child for %d\n",arr[i]);
        scanf("%d",&num);
        createLeftChild(num,i);
        printf("Enter the value of right child for %d\n",arr[i]);
        scanf("%d",&num);
        createRightChild(num,i);

        printf("Do you want to enter more data? 1.Yes 0.No\n");
        scanf("%d",&choice);
        i++;
    }while(choice!=0);
    printf("Array representation of binary tree is\n");
    printTree();
    return 0;
}

