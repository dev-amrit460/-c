#include <stdio.h>
#define MAX 100
int arr[MAX], len, pos;
void input_array(void);
void output_array(void);
void insert_in_array(int, int);
void delete_frm_array(int);

int main()
{
    int opt, key;
    
    input_array();
    
    printf("Enter the choice of operation, you want to perform:\n 1. Insert \n 2. Delete\n");
    scanf("%d", &opt);
    switch(opt){
        case 1 :
        printf("Enter the key, you want to insert and the position:\n");
        scanf("%d%d", &key, &pos);
        insert_in_array(key, pos);
        printf("After insertion::");
        output_array();
        break;
        
        case 2 :
        printf("Specify the position to be deleted:\n");
        scanf("%d", &pos);
        delete_frm_array(pos);
        printf("After deletion::");
        output_array();
        break;
        
        default:
        printf("Error: You entered invalid choice..");
    }



    return 0;
}


void input_array (){

    printf("Enter the length of the array \n");
    scanf("%d", &len);
    
    printf("Enter the array elements.. \n");
    for(int counter=0;counter<len;counter++)
        scanf("%d", &arr[counter]);
    
    output_array();
}



void insert_in_array(int key, int pos){
    
    int c;
    
    if(pos<0 || pos>len){
        printf("please put position between 1 and %d: \n",len);
    }
    else{
        for(c=len;c>=pos-1;c--){
            arr[c]=arr[c-1];
        }
        arr[pos-1]=key;
        len++;
  }
    
    return;    
    }
        

void delete_frm_array(int pos)
{
    int c;
    
    if( pos<0 || pos>len )
    {
        printf("Invalid position! Please enter position between 1 to %d", len);
    }
    else
    {
    for(c=pos-1;c<len;c++){
            arr[c]=arr[c+1]; 
        
    }
    len--;
}
return;
}


void output_array(void)
{
    int counter;
    printf(" The array elements are:\n");
    for(counter=0;counter<len;counter++)
        printf("%d \n", arr[counter]);
    
}
