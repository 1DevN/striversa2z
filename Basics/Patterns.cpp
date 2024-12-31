#include <bits/stdc++.h>
using namespace std;

void Pattern3(int c){
    for(int i=1;i<c+1;i++){
        for(int j=1;j<c-i+2;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void Pyramid(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
     
    }
}
void invPyramid(int N){
    for(int i=1;i<N;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=2*N;j>2*(i)+1;j--){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void halfDiam(int N){
    for(int i=0;i<2*N-1;i++){
        if(i<N){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
        
        }
        else{
            for(int j=2*N-1;j>i;j--){
                cout<<"*";
            }
        }
        cout<<endl;

    } 
}

void BinNumTri(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<i+1;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}

void NumCrown(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int j=2*N-2;j>2*i;j--){
            cout<<" ";
        }
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void IncNumTRI(int N){
    int num=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter the number";
    int N;
    cin >>N;
    cout<<"your pattern"<<endl;
     IncNumTRI(N);
}