#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float A2,B2,C2,D2,A1,B1,C1,D1,M0,X=0,y0,z0,x1,y1,z1,DELTA_Y,DELTA_Z,DELTA;

	cout<<"Vnesi vrednosti za prvata ramnina"<<endl;
	cin>>A1;
	cin>>B1;
	cin>>C1;
	cin>>D1;
	cout<<"Vnesi vrednost za vtorata ramnina"<<endl;
	cin>>A2;
	cin>>B2;
	cin>>C2;
	cin>>D2;
	cout<<A1<<"x"<<"+"<<B1<<"y"<<"+"<<C1<<"z"<<"+"<<D1<<"=0"<<endl;
	cout<<A2<<"x"<<"+"<<B2<<"y"<<"+"<<C2<<"z"<<"+"<<D2<<"=0"<<endl;
	x1=(B1*C2)-(B2-C1);
	y1=(C1*A2)-(C2*A1);
	z1=(A1*B2)-(A2*B1);
	cout<<"Pravecot 'a' na pravata e"<<endl;
	cout<<"a=("<<x1<<","<<y1<<","<<z1<<")!=0"<<endl;
	
	
		DELTA_Y=(D1*C2)-(C1*D2);
		DELTA_Z=(B1*D2)-(B2*D1);
		DELTA=(B1*C2)-(C1*B2);
		X=0;
	cout<<"X="<<X<<", "<<"Y="<<DELTA_Y/DELTA<<", Z="<<DELTA_Z/DELTA<<endl;

	
	cout<<"Vrednostite za tockata M"<<endl;
	cout<<"M=("<<X<<","<<DELTA_Y/DELTA<<","<<DELTA_Z/DELTA<<")"<<endl;
	       
       
     
    cout<<" "<<"x"<<"  ";
     if(X>=0)
     {cout<<"-"<<"  ";}
     else{ cout<<"+"<<" ";}
     cout<<fabs(X)<<"  ";
     cout<<" "<<"    "<<"y"<<"   ";
     if(DELTA_Y/DELTA>=0)
     {cout<<"-"<<"  ";}
     else 
     {cout<<"+"<<"  ";}
     cout<<fabs(DELTA_Y/DELTA)<<"  ";
     cout<<" "<<"     "<<"z"<<"    ";
     if(DELTA_Z/DELTA>=0)
     {cout<<"-"<<"  ";}
     else{cout<<"+"<<"  ";}
     cout<<fabs(DELTA_Z/DELTA)<<"  "<<endl;
     if(X>10){cout<<" ";}
     else if(DELTA_Y/DELTA>10){cout<<" ";}
     else if(DELTA_Z/DELTA>10){cout<<" ";}
     cout<<" "<<"_______"<<"   =    "<<"_______"<<"    =   "<<"   "<<"______"<<endl<<endl;
     cout<<"   "<<x1<<"            "<<y1<<"                  "<<z1<<endl;
      
      return 0;

	
}


