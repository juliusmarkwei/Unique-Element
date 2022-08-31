#include<iostream>
using namespace std;

string unique(int arrayParam[], int length){
    string check = "true";
    for(int i = 0; i<length-1; i++){
        for(int j = i+1; j<length; j++){
            if(arrayParam[i] == arrayParam[j]){
                check = "false";
                break;
            }
        }
    }
    return check;   
}

int main(){
    int Array[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(Array)/sizeof(Array[0]);
    cout<<unique(Array, len);
    return 0;
}
