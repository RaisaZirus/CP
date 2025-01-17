#include<stdio.h>
int f(float a){
    
    return (a>0)?((a-(int)a)>=0.5? (int)a+1 :(int)a):(((int)a-a)>0.5? (int)a-1 :(int)a);
}
int main(){
    float a = 3.5;
    int b = f(a); 
    printf("%d",b);
}