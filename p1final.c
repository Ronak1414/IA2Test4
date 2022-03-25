#include <stdio.h>
#include<math.h>
float input_radius()
{
  float r;
  printf("enter the radius:\n");
  scanf("%f",&r);
  return r;
}

float input_heigth()
{
  float h;
  printf("enter the height:\n");
  scanf("%f",&h);
  return h;
}

float input_length()
{
  float l;
  printf("enter the lenght:\n");
  scanf("%f",&l);
  return l;
}

float find_weight(float radius, float height, float length)
{
  float w;
  w=3.14*radius*radius*radius*sqrtf(height * length);
  return w;
}

void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with radius : %f , height : %f , length : %f is \n%f",radius,height,length,weight);
}

int main()
{
   float radius,height,length,weight;

  radius=input_radius();
  height=input_heigth();
  length = input_length();
 weight=find_weight( radius,height, length);
 output(radius,height,length,weight);
  return 0;
}