#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <direct.h>


void createFileTest(); //declare it here

int main() {
    createFileTest();
    return 0;
}


/*So in c i can create, open, read, write to files by declaring a pointer of type
FILE, and use the fopen() function.
*/

//FILE is basically a data type

//fopen() function take ALWAYS two parameters of course, one for the filename
//and the other is the mode of it: 
/*
w - writes to a file
a - appends new data to a file
r - Reads from a file
*/

void createFileTest(){ //redeclare
    int path = _mkdir("dirForCFiles"); //for windows

    char dirExists[] = "dirForCFiles";

    if(path == 0){
        printf("Dir is successfully created:  %s", path);// there are no directories so we create one
    } else {
        printf("Dir already exists: %s", dirExists);
    }

    //THEN WE PROCEED WITH CREATING THE TXT FILE
    FILE *filePointer; // creating the file after the dir is created

    filePointer = fopen("hello.txt","w"); // function has two parameters, name and mode.

    if (filePointer == NULL){
    printf("Could not create or open file.");
    return; //stop it here
    } else {
        fprintf(filePointer, "Hello World, this is my first line to my txt file, and i C is so great to write in\n");
        fprintf(filePointer, "It worked!!!! hehehehe",2); //specify which line.
    }

    fclose(filePointer); //this closes the file - look at this in java when you write scanner.close();
}