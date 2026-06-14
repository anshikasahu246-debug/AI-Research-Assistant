#include<iostream>
using namespace std;

void Swap_By_Prt(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b  = temp ;

}
void Add_ten(int *a, int *b){
    *a =*a + 10;
    *b = *b + 10;
}
int main(){
    int x = 20;
    int y = 40;
    cout<<"Before: x = "<<x<<"  y = "<<y<<"\n";

    Swap_By_Prt(&x,&y);
    cout<<"After swap : x = "<<x<<"  y = "<<y<<endl;

    Add_ten(&x,&y);
    cout<<"After adding ten : x = "<<x<<"  y = "<<y<<"\n";
    return 0;

}