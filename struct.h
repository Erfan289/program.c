#include"stdio.h"
#include"stdlib.h"
#include"string.h"

#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED



#endif // STRUCT_H_INCLUDED

typedef struct student{
int age;
int id;
int degree;
char gender;
char* name;
char* password;

}student;

student arr[30]={
{
   20,100,89,'M',"ERFAN","ERFAN1"
},
{
  25,101,96,'M',"MOHSEN","MOHSEN1"
}
};

