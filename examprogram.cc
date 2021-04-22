#include <iostream>
#include <string>
#include <fstream>

using namespace std;
/*************************************
* countLine
*
* @param: string pName, the function counts the lines of this string
*
* @return: int count, the number of lines in pName
*************************************/
int countLine(string pName);

/*************************************
* countChar
*
* @param: string pName, the function counts the chars of this string
*
* @return: int count, the number of lines in pName
*************************************/
int countChar(string pName);

/*************************************
* main, takes two arguments and passes the contents of a file into
* a string which is then passed to countLine and countChar
*
* @param: argc, number of command line arguments, argv[] stores the arguments
* 
* 
*************************************/
int main(int argc, char *argv[]){
    if(argc == 1){
        cout<<countLine("Ohio University")<<" lines"<<endl;
        cout<<countChar("Athens")<<" characters"<<endl;
    }
    else if(argc == 2){
        fstream inf(argv[1], fstream::in);
        string temp;
        getline(inf, temp, '\0');
        cout<<countLine(temp)<<" lines"<<endl;
        cout<<countChar(temp)<<" characters"<<endl;
    }
    else if(argc == 3){
        fstream inf(argv[1], fstream::in);
        string temp;
        getline(inf, temp, '\0');
        cout<<countLine(temp)<<" lines"<<endl;
        cout<<countChar(temp)<<" characters"<<endl;
    }
}

int countLine(string pName){
    int count = 0;
    for(size_t i = 0; i < pName.length(); i++){
        if(pName[i] == '\n'){
            count++;
        }
    }
    return count;
}

int countChar(string pName){
    int count = 0;
    for(size_t i = 0; i < pName.length(); i++){
        count++;
    }
    return count;
}

