#include<stdio.h>
#include<string.h>
typedef struct product
{
    int ID;
    int Qty;
    int Mrp;
    int dis;
    char Name[25];
}p;
typedef struct buy
{
    int ID;
    char Name[25];
}b;
int k=0;
int save=0;
int off=0,sum=0;
typedef int lakshya;
lakshya main(){
    p obj[5]={{101,5,290,40,"shirt"},{102,10,300,40,"Cargo pant"},
    {103,12,600,90,"Suit"},{104,17,999,50,"Coat"},
    {105,20,400,20,"short pant"}};
    b obj1[5];
    int n=1;
    int ID_N;
    int choice;
    while (n==1){

        printf("\t\t--------MENU--------\n");
        printf("View Inventory Stock(1)\n");
        printf("Purchase Items(2)\n");
        printf("checkout (3)\n");
        printf("To exit(4)\n\n");
        printf("Enter the choice\n"); 
        scanf("%d",&choice);
        if(choice<1||choice>4){
            printf("invaild choice");}
        if(choice==1){
            printf("\n\t\t------Current Inventory------\t\t\n");
            printf("ID\tName\t\tPrice\tQuantity\n");

           for(int i=0;i<5;i++){
            printf("%d\t%-12s\t%d\t%d",obj[i].ID,obj[i].Name,obj[i].Mrp,obj[i].Qty);
            
            printf("\n");
           }
            continue;
        }
        
        int qu;

        if(choice==2){
            for(int i=0;i<5;i++){
                printf("---Enter 11 to EXIT with current Items---\n");
                printf("Enter the ID of Product to ADD Item\n");
                scanf("%d",&ID_N);

                if (ID_N==11)
                {
                   break;
                }

                printf("Enter the Quantity\n");
                scanf("%d",&qu);
                

                int found = 0;

                for(int j=0;j<5;j++){
                    if(obj[j].ID == ID_N){
                        if(qu>obj[j].Qty||qu<0){
                            printf("Invaild Quantity");
                            break;
                        }
                        obj1[k].ID= obj[j].ID;
                        strcpy(obj1[k].Name,obj[j].Name);
                        save+=obj[j].dis*qu;
                        int price = obj[j].Mrp - obj[j].dis;

                        sum += price * qu;
                        save += obj[j].dis * qu;
                        obj[j].Qty -= qu;
                        found = 1;
                        k++;
                        break;
                    }
                }

                if(found == 0){
                    printf("Invalid ID\n");
                } 

            }
            continue;
        }

        if(choice==3){
            printf("---YOU ITEMS---\n");
            for(int i=0;i<k;i++){
                printf("# Name %s \n",obj1[i].Name);
                printf("# ID %d \n",obj1[i].ID);
                
                
                printf("\n");
            }
            printf("# Your Total Sum= %d \n",sum);
            
            printf("# Your Total save =%d\n",save);
            printf("--Thank you-- \n\n");
            continue;           
        }

        if(choice==4){
            printf("*-* Thank you for your Time *-*");
            break;
        }        
    
    }    

   

}
