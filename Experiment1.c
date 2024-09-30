
    #include <stdio.h>
int main() {
int a, b, c, sum;
float avg;
printf("Enter three integers: ");
scanf("%d%d%d"
, &a, &b, &c);
sum = a + b + c;
avg = (float)sum / 3.0;
printf("Sum=%d\nAverage=%.2f"
, sum, avg);
return 0;
}
    