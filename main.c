// Arithmetic Operations
//and(%)or(|)not()add(+)

#include "./header.h"

int array[5];

void binario(int y)
{
    for(int i = 3; i >= 0; i--){
        if((y & (1 << i)) != 0){
            printf("1");
        }else{
            printf("0");
        }
    }
}

void c4(int y)
{
    for(int i = 4; i >= 0; i--){
        if((y & (1 << i)) != 0){
            array[i]=1;
        }else{
            array[i]=0;
        }
    }
}
void c43(int y)
{
    for(int i = 3; i >= 0; i--){
        if((y & (1 << i)) != 0){
            array[i]=1;
        }else{
            array[i]=0;
        }
    }
}

int main(){

    int a, b, y,y2,ans;

    printf("Arithmetic operations program\n");
    printf("Enter two numbers bewteen (0 a 15)\n");
    printf("Number 1: ");
    scanf("%d",&a);
    printf("Number 2: ");
    scanf("%d",&b);

    printf("Operation to execute? \n");
    printf("1:AND\n");
    printf("2:OR\n");
    printf("3:NOT\n");
    printf("4:SUM\n");

    printf("Choose: ");
    scanf("%d",&ans);

    switch (ans) {
        case 1: {
            y=a&b;
            printf("Decimal answer:%d\n",y);
            printf("Binary answer: ");
            binario(y);
            c4(y);
			printf("\n");
            int c=array[4];
            printf("Complement C4:");
            printf("%d",c);
            printf("\n");
        }
            break;
        case 2:{
            y=a|b;
            printf("Decimal answer:%d\n",y);
            printf("Binary answer:");
            binario(y);
            c4(y);
            int c=array[4];
            printf("Complement C4:");
            printf("%d",c);
            printf("\n");
        }
            break;
        case 3:{
            y=(~a);
            y2=(~a)+1;
            printf("Decimal answer:%d\n",y2);
            printf("Binary answer:");
            binario(y);
            c43(y);
            printf("\n");
            int c=array[4];
            printf("Complement C4:");
            printf("%d",c);
            printf("\n");
        }
            break;
        case 4:{
            y=a+b;
            printf("Decimal answer:%d\n",y);
            printf("Binary answer:");
            binario(y);
            c4(y);
            printf("\n");
            int c=array[4];
            printf("Complement C4:");
            printf("%d",c);
            printf("\n");
            break;
        }
        default:
            printf("Error");
            break;
    }
}
