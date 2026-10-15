#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <direct.h>

void putFileIntoDir();

int main() {
    putFileIntoDir();

    return 0;
}

void putFileIntoDir(){
    // we recreate the method of the dir and check if the dir exists first, if it does we only proceed with creating the file and place it there

    int pathStatus = _mkdir("dirForCFiles"); 
    char dirName[] = "dirForCFiles";
    const char *filename = "TransferCfile.txt";

    if(pathStatus == 0){
        printf("Successfully created the dir: %s\n", dirName);
        } else {
        printf("Could not create the dir: %s, it already exists\n", dirName);
    }

    //now we create the file, but we also need to point the file to the dir.

    /** We point the file to the dir, and then we create it
    So i read a bit on google search, I am supposedly to combine a full string with the dir and the txt file
     */
    char fullPath[256]; //maximum of 256 characters.
    snprintf(fullPath,sizeof(fullPath), "%s/%s", dirName,filename); //combine the dir and the filename into a complete string

    printf("The result of the full String path is: %s\n",fullPath);
    printf("The current size in bytes are: %zu\n", sizeof(fullPath));

    //create the file
    FILE *fileToMyDir = fopen(fullPath,"w"); //the dir and the *filename pointer holds the constant value for a txt file

    if (fileToMyDir == NULL){
    printf("Could not create or open file.");
    return; //stop it here
    } else {
        fprintf(fileToMyDir, "This is the real test.\n"); // so now *fileToMyDir points to the fullPath, where the fullPath holds the dir and the actual *filename
        printf("You have successfully written to: %s", filename);
    } 

    fclose(fileToMyDir);
}

