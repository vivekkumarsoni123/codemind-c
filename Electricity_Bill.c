#include<stdio.h>
int main()
{
    int n;
    float s,q;
    scanf("%d",&n);
    if(n<200) 
    {
        s=n*1.20;
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 1.20
");
        printf("Bill: %.2f
",s);
        printf("Surcharge: 0.00
");
        printf("Total Amount: %.2f",s);
    }
    else if(n>=200&&n<400) 
    {
        s=n*1.40;
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 1.40
");
        printf("Bill: %.2f
",s);
        printf("Surcharge: 0.00
");
        printf("Total Amount: %.2f",s);
    }
    else if(n>=400&&n<600) 
    {
        s=n*1.60;
        q=.15*s;
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 1.60
");
        printf("Bill: %.2f
",s);
        printf("Surcharge: %.2f
",q);
        printf("Total Amount: %.2f",s+q);
    }
    else if(n>=600&&n<800) 
    {
        s=n*1.80;
        q=.15*s;
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 1.80
");
        printf("Bill: %.2f
",s);
        printf("Surcharge: %.2f
",q);
        printf("Total Amount: %.2f",s+q);
    }
    else 
    {
        s=n*2.00;
        q=.15*s;
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 2.00
");
        printf("Bill: %.2f
",s);
        printf("Surcharge: %.2f
",q);
        printf("Total Amount: %.2f",s+q);
    }
}