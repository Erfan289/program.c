

#include"program.h"
#include "struct.h"

//DONE----------------
/*this function takes two inputs one as a new password for the admin
and another one as its function if it is 1 the function will work as
editing to the password if any thing else it will determine default
password
*/
char* AdminPassword(char *newPass,int decision) {
    char *adminPass;
adminPass = (char *) malloc(strlen("1234") + 1);
strcpy(adminPass, "1234");
return adminPass;
if(decision==1){
    adminPass = (char *) realloc(adminPass, strlen(newPass) + 1);
    strcpy(adminPass, newPass);
    printf("%s",adminPass);
}
}
/* dsk*/
myIndex(int id) {
    int index;
    int i;
    for ( i = 0; i < 30; i++) {

        if (arr[i].id == id) {
            index = i;
            break;
           }

}if(index!=i){
printf("wrong id\n");
return -1;
} else
return index;
}
//DONE----------------------------*/
void viewAllRecords() {


    for (int i = 0; i < lastIndex(); i++) {

            printf("%d :{name : %s ID : %d degree: %d \nage: %d \ngender: %c\n\n", i+1, arr[i].name,
                   arr[i].id, arr[i].degree, arr[i].age, arr[i].gender);

        }

    }
    //--done

void viewStudentRecord(int id) {
   int index= myIndex(id);
    printf("Student'sname is : %s\nStudent'sPassword is : %s\nStudent'sDegree is: %d\nStudent'sId is: %d\nStudent'sAge is: %d\nStudent'sGender is: %c\n", arr[index].name,arr[index].password,arr[index].degree,arr[index].id,arr[index].age,arr[index].gender);

}///*done----

void viewYourRecord(int id) {
    int index= myIndex(id);
    printf("Your Name is : %s\nYour Password is : %s\nYour Degree is: %d\nYour Id is: %d\nYour Age is: %d\nYour Gender is: %c\n", arr[index].name,arr[index].password,arr[index].degree,arr[index].id,arr[index].age,arr[index].gender);

}
int addStudent(char *name, char *password, int degree, int id, int age, int gender) {
    for (int i = 0; i < 20; i++) {
        if (arr[i].id == id) {
            printf("this id already exists\n");
            return 0;
        }
        else {
        if(newSizeOfClass()<20){
    int newIndex=newSizeOfClass();
   arr[newIndex].name = (char *) malloc(strlen(name) + 1);
   strcpy(arr[newIndex].name, name);
   arr[newIndex].password = (char *) malloc(strlen(password) + 1);
   strcpy(arr[newIndex].password, password);
   arr[newIndex].degree = degree;
    arr[newIndex].id = id;
    arr[newIndex].age = age;}
    } }}
int newSizeOfClass(){

        if (lastIndex()>=20){

            printf("sorry ,sir the class is full\n");
            return 20;
        }
        else
        return lastIndex();
        }
int lastIndex(){
int i;
 for ( i = 0; i <= 20; i++){
    if(arr[i].age==0){
    break;
    }}
    return i;
    }
void editGrade(int degree, int id) {
    int index = myIndex(id);

        arr[index].degree = degree;


}
void editName(int id, char *newname) {


        arr[/*myIndex(id)*/0].name = (char *) realloc(arr[/*myIndex(id)*/0].name, strlen(newname) + 1);
        strcpy(arr[/*myIndex(id)*/0].name, newname);

}





/*
//done------
void editGrade(int degree, int id) {
    int index = myIndex(id);

        arr[index].degree = degree;


}
int addStudent(char *name, char *password, int degree, int id, int age, int gender) {
    for (int i = 0; i < 20; i++) {
        if (arr[i].id == id) {
            printf("this id already exists\n");
            return 0;
        }
        else {
      int newIndex=1;
   arr[newIndex].name = (char *) malloc(strlen(name) + 1);
   strcpy(arr[newIndex].name, name);
   arr[newIndex],password = (char *) malloc(strlen(password) + 1);
   strcpy(arr[newIndex].password, password);
   arr[newIndex].degree = degree;
    arr[newIndex].id = id;
    arr[newIndex].age = age;}
    } }
sizeofClass(int c){
    if (c=1){     //use macro here
         cntr++;//this one

        if (cntr>20){

            printf("sorry ,sir the class is full\n");
        }
        else
        return cntr;
        }
    if (c=0){
         cntr--;
        if (cntr>20){

            printf("sorry the class is full\n");
        }
        else
        return cntr;
        }



    }*/






