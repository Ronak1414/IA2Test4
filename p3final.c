/*
Write a program find whether a given number is a prime number.
int input_number();
int is_prime(int n);
void output(int n, int is_prime);


#include <stdio.h>
#include <math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

int isprime(int n)
{
  if (n==0 || n==1) {
    return 0
  }
  if (n==2) {
    return 1;
  }
  for(int i= 2; i<= sqrt(n);i++)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}
void output(int n, int isp)
{
  if(isp == 0)
    printf("%d is not a prime number\n",n);
  else
    printf("%d is a prime number\n",n)
}

int main()
{
  int n = input();
  int isp = isprime(n);
  output(n,isp);
  return 0;
  }
}*/

#include<stdio.h>
#include<math.h>
typedef struct _camel
{
  float r,h,l,w;
  int m;
}camel;

camel input()
{
  camel c;
  printf("enter the radius: \n");
  scanf("%f",&c.r);
  printf("enter the height: \n");
  scanf("%f",&c.h);
  printf("enter the length: \n");
  scanf("%f",&c.l);
  return c;
}
void find_weight(camel *c)
{
  
  c->w=3.14*(c->r*c->r*c->r)*sqrt(c->h*c->l);
}

void mood(camel *c)
{
  if(c->r < c->h && c->r < c->l)
    c->m = 0;
  else if(c->h < c->l && c->h < c->r)
    c->m = 1;
  else
    c->m = 2;
    
}
void output(camel c)
{
  printf("the weight is %0.1f",c.w);
  if(c.m==0)
    printf("\ncamel is sick");
  else if(c.m==1)
    printf("\ncamel is happy");
  else 
    printf("\ncamel is tense");
}
int main()
{
  camel c=input();
  find_weight(&c);
  mood(&c);
  output(c);
  return 0;
}


