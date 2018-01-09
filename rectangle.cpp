#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
using namespace std;
void aa(){
    cout<<"                 ****              ***             ***\n";
    cout<<"                ******             ***             ***\n";
    cout<<"               ***  ***            ***\n";
    cout<<"              ***    ***           ***             ***\n";
    cout<<"             ************          ***             ***\n";
    cout<<"            **************         ***             ***\n";
    cout<<"           ***          ***        *********       ***\n";
    cout<<"          ***            ***       *********       ***\n\n";
}
int main()
{


    for(int som=0;som<=10;som++){
    system("CLS");
    aa();

    cout<<"                                 "<<som*10<<"%"<<endl<<"                            ";
    for(int jk=0;jk<=som;jk++){
    cout<<"__";
    }
    if(som<3){
        Sleep(550);
    }else{
        if(som<60){
            Sleep(300);
        }
        else{Sleep(150);}
            }
    if((som==3)||(som==6.5)||(som==9.3)){
     Sleep(3000);
    }
    }

 cout<<"\n hi! please enter th length and width then the (x & y) of the start point: ";
 int t,l,x,y,a,b,a1,b1;
 cin>>t>>l>>x>>y;

 a=(t+y)*2+6;
 b=(l+x)*2+6;
a1=a/2;
b1=b/2;
 char mat[a][b];

 int i,j;
 for(i=0;i<a;i++){
  for(j=0;j<b;j++){
   mat[i][j]=' ' ;
  }
 }
 j=b/2;
  for(i=0;i<a;i++){
   mat[i][j]='*';
 }
  i=a/2;
  for(j=0;j<b;j++){
   mat[i][j]='*';
 }
j=b1+x;
 for(i=a1-y-t;i<=a1-y;i++){
    mat[i][j]='*';
 }
 j=b1+x+l;
 for(i=a1-y-t;i<=a1-y;i++){
    mat[i][j]='*';
 }
 i=a1-y-t;
 for(j=b1+x;j<b1+x+l;j++){
mat[i][j]='*';
 }
  i=a1-y;
 for(j=b1+x;j<b1+x+l;j++){
mat[i][j]='*';
 }


  for(i=0;i<a;i++){
  for(j=0;j<b;j++){
  cout<<" "<<mat[i][j] ;
  }
  cout<<"\n";
 }
cout <<"\n area  "<<t*l;
cout<<"\n environment "<<(t+l)*2<<"\n\n";

    return 0;
}
