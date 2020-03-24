#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    char pname;
    int btime;
    int atime;
    int restime=0;
    int ctime=0;
    int wtime=0;
}a[1000],b[1000],c[1000];
void insert(int n){
    int i;
    for(i=0;i<n;i++){
        cin>>a[i].pname;
        cin>>a[i].atime;
        cin>>a[i].btime;
        a[i].wtime=-a[i].atime+1;
    }
}
bool btimeSort(node a,node b){
    return a.btime < b.btime; 
}
bool btimeOppSort(node a,node b){
    if(a.btime!=b.btime)
        return a.btime > b.btime; 
    return a.atime < b.atime;
}
int main(){
    int nop,choice,i,qt;
    cout<<"Enter number of processes\n";
    cin>>nop;
    cout<<"Enter process, AT, BT\n";
    insert(nop);
    disp(nop,1);
    return 0;
}
