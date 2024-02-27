#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double sum = 0;
double numbers;
double Average;

int main(int argc,char * argv[]){
    if(argc <= 1){
        cout << "Please input numbers to find average.";
    }
    else{
        for(int i=0; i<argc;i++){
            numbers = atof(argv[i]);
            sum += numbers;
            if(i == argc-1){
                Average = sum/i;
                cout << "---------------------------------" << endl;
                cout << "Average of "<< i <<" numbers = " << Average << endl;
                cout << "---------------------------------" << endl;
            }
        }
    }
    return 0;

}
