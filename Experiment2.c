
    #include<stdio.h>
void main()
{
float c,f;
printf("Enter the fahrenheit value: ");
scanf("%f"
,&f);
c=(5/9.0)*(f-32);
printf("Fahrenheit to Celsius is: %.2f\n"
,c);
printf("Enter the celsius value: ");
scanf("%f"
,&c);
f=(9/5.0)*c+32;
printf("celsius to Fahrenheit is: %.2f"
,f);
}