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
bool atimeSort(node a,node b){
    return a.atime < b.atime; 
}
int k=0,f=0,r=0;
void disp(int nop,int qt){
    int n=nop,q;
    sort(a,a+n,atimeSort);
    int ttime=0,i;
    int j,tArray[n];
    int alltime=0;
    bool moveLast=false;
    for(i=0;i<n;i++){
        alltime+=a[i].btime;
  //      cout<<"start is "<<a[i].pname<<" to "<<ttime<<"\n";
    }
    alltime+=a[0].atime;
    for(i=0;ttime<=alltime;){
        j=i;
        while(a[j].atime<=ttime&&j!=n){
     //       cout<<"less than atime is "<<a[j].pname<<" to "<<ttime<<"\n";
            b[r]=a[j];
            j++;
            r++;
        }
        if(r==f){
            c[k].pname='i';
            c[k].btime=a[j].atime-ttime;
            c[k].atime=ttime;
            ttime+=c[k].btime;
            k++;
            continue;
        }
        i=j;
        if(moveLast==true){
     //       cout<<"moving "<<b[f].pname<<" to "<<r<<"\n";
             sort(b+f,b+r,btimeOppSort);    
            // b[r]=b[f];
            // f++;
            // r++;
        }
       
