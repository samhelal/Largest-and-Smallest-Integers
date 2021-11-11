/*(Largest and Smallest Integers) Write a program that
reads in five integers and determines and prints the largest and
the smallest integers in the group. Use only the programming
techniques you learned in this chapter.(c++ how to program)*/
//program comparing five numbers 
#include <iostream>
using namespace std ;

int main (){
    int a(0),b(0),c(0),d(0),e(0) , min(0) , max(0);
    cout <<"Enter five numbers : " ;
    cin>> a>>b>>c>>d>>e ;
    min =a ;
    if (b<min){
        min=b ;
    }
    if(d<min){
        min =d ;
    }
    if(c<min){
        min =c ;
    }
    if(e<min){
        min = e;
    }
    cout << " The smallest is : " << min <<endl;
    max = a ;
    if(b>max) {
        max=b;
    }
    if(c>max){
        max =c ;
    }
    if(d>max){
        max = d ;
    }
    if(e>max) {
        max = e ;
    }
    cout << " The lagest is : " << max << endl ;

}