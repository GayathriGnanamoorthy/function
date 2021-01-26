int main()

{
int num = 0, sum;

printf("input number: ");
scanf("%d",&num);

//counter=1;

for ( sum=0; num>0;)

{
    sum = sum + num % 10;
    num = num /10;
  }
printf("output number= %d", sum);

getch();
return 0;

}
