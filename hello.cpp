#include <iostream>
#include <iomanip>
using namespace std;
 int backup(long long var3);
int main(){
    long long var1;
    long long var2;
    long long var3;
    int values[]={1,2,3,4,5,6,7,8,9};
    int length = sizeof(values)/sizeof(values[0]);
int counter=0;
while(counter<length-1){
std::cout<<values[counter]<<" "<<std::endl;
counter++;


}

std::cout<<"Hello world!\n Please enter two values to calculate"<<std::endl;
    cin>>var1;
    cin>>var2;
    var3=var1+var2;

    std::cout<<var3<<" Hoise value bodda"<<std::endl;

backup(var3);
return 0;
}

int backup(long long var3) {


    std::cout<<"Hello world!"<<std::endl;

    std::cout<<var3<<" Hoise value bodda"<<std::endl;
    return 0;
}






