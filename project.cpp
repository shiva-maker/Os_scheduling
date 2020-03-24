
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
