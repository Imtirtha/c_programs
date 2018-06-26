#include <stdio.h>
int main()
{
int a, b;
printf("Enter Two Values To Compare : \n");
scanf("%d %d", &a ,&b);

if(a!=b){
    if(a>b){
        printf("%d is Greater than %d \n",a,b);
    }
    else{
        printf("%d is Smaller than %d \n",a,b);
    }
}
else{
    printf("%d is Equal to %d \n",a,b);
}

return 0;
}

