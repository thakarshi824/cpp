#include<iostream>
using namespace std;

int main(){
int i=0;
int mark[5];
cout<<"enter mark[0] :";
cin>>mark[0];
cout<<"enter mark[1] :";
cin>>mark[1];
cout<<"enter mark[2] :";
cin>>mark[2];
cout<<"enter mark[3] :";
cin>>mark[3];
cout<<"enter mark[4] :";
cin>>mark[4];
/*for(int i=0;i<=4;i++){
cout<<"the value of "<<i<<" is = "<<mark[i]<<endl;
}*/


/*while(i<=4){
 cout<<"the value of "<<i<<" is = "<<mark[i]<<endl;
 i++;
}*/

do{
 cout<<"the value of "<<i<<" is = "<<mark[i]<<endl;
 i++;
}while(i<=4);



return 0;
} 