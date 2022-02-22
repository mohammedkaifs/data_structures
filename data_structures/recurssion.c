    #include<stdio.h>
    int fact(int n)
    {
        if(n==0)
        return 1;
        return(n*(fact(n-1)));
    }

    int main()
    {
        int num,res;
        printf("Enter the number:");
        scanf("%d",&num);
        res=fact(num);
        printf("The fact of number is %d",res);
        return 0;
    }


