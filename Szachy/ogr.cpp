#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main (void) {
	for(int i=1;i<9;i++)
		{
			for(int j=1;j<9;j++)
				{
					//Król:
					if((j+1)<9)
						cout<<"a"<<i<<j+1<<"+";
					if((j+1)<9 && (i+1)<9)
						cout<<"a"<<i+1<<j+1<<"+";
					if((i+1)<9)
						cout<<"a"<<i+1<<j<<"+";
					if((i+1)<9 && (j-1)>0)
						cout<<"a"<<i+1<<j-1<<"+";
					if((j-1)>0)
						cout<<"a"<<i<<j-1<<"+";
					if((i-1)>0 && (j-1)>0)
						cout<<"a"<<i-1<<j-1<<"+";
					if((i-1)>0)
						cout<<"a"<<i-1<<j<<"+";
					if((j+1)<9 && (i-1)>0)
						cout<<"a"<<i-1<<j+1<<"+";
						
					//Hetman:
					for(int bi=1;bi<9;bi++)
					{
						if((j+bi)<9)
							cout<<"b"<<i<<j+bi<<"+";
						if((j+bi)<9 && (i+bi)<9)
							cout<<"b"<<i+bi<<j+bi<<"+";
						if((i+bi)<9)
							cout<<"b"<<i+bi<<j<<"+";
						if((i+bi)<9 && (j-bi)>0)
							cout<<"b"<<i+bi<<j-bi<<"+";
						if((j-bi)>0)
							cout<<"b"<<i<<j-bi<<"+";
						if((i-bi)>0 && (j-bi)>0)
							cout<<"b"<<i-bi<<j-bi<<"+";
						if((i-bi)>0)
							cout<<"b"<<i-bi<<j<<"+";
						if((j+bi)<9 && (i-bi)>0)
							cout<<"b"<<i-bi<<j+bi<<"+";
					}
					
					//Goñce (dwa)
					for(int bi=1;bi<9;bi++)
					{
						if((j+bi)<9 && (i+bi)<9)
							cout<<"c"<<i+bi<<j+bi<<"+"<<"d"<<i+bi<<j+bi<<"+";
						if((i+bi)<9 && (j-bi)>0)
							cout<<"c"<<i+bi<<j-bi<<"+"<<"d"<<i+bi<<j-bi<<"+";
						if((i-bi)>0 && (j-bi)>0)
							cout<<"c"<<i-bi<<j-bi<<"+"<<"d"<<i-bi<<j-bi<<"+";
						if((j+bi)<9 && (i-bi)>0)
							cout<<"c"<<i-bi<<j+bi<<"+"<<"d"<<i-bi<<j+bi<<"+";
					}
					//Skoczki:
					if((i+1)<9 && (j+2)<9)
						cout<<"f"<<i+1<<j+2<<"+"<<"g"<<i+1<<j+2<<"+";
					if((i+2)<9 && (j-1)>0)
						cout<<"f"<<i+2<<j-1<<"+"<<"g"<<i+2<<j-1<<"+";
					if((i-1)>0 && (j-2)>0)
						cout<<"f"<<i-1<<j-2<<"+"<<"g"<<i-1<<j-2<<"+";
					if((j+1)<9 && (i-2)>0)
						cout<<"f"<<i-2<<j+1<<"+"<<"g"<<i-2<<j+1<<"+";
					if((j+1)<9 && (i+2)<9)
						cout<<"f"<<i+2<<j+1<<"+"<<"g"<<i+2<<j+1<<"+";
					if((i+1)<9 && (j-2)>0)
						cout<<"f"<<i+1<<j-2<<"+"<<"g"<<i+1<<j-2<<"+";
					if((i-2)>0 && (j-1)>0)
						cout<<"f"<<i-2<<j-1<<"+"<<"g"<<i-2<<j-1<<"+";
					if((j+2)<9 && (i-1)>0)
						cout<<"f"<<i-1<<j+2<<"+"<<"g"<<i-1<<j+2<<"+";
						
						
					
					
					
					
					//Wie¿a
					for(int bi=1;bi<9;bi++)
					{
						if((j+bi)<9)
							cout<<"h"<<i<<j+bi<<"+"<<"k"<<i<<j+bi<<"+";
						if((i+bi)<9)
							cout<<"h"<<i+bi<<j<<"+"<<"k"<<i+bi<<j<<"+";
						if((j-bi)>0)
							cout<<"h"<<i<<j-bi<<"+"<<"k"<<i<<j-bi<<"+";
						if((i-bi)>0)
							cout<<"h"<<i-bi<<j<<"+"<<"k"<<i-bi<<j<<"+";
					}						
					
					cout << ">=1" << endl;
				}	
			
		}
			for(int i=1;i<9;i+=2)
				{
					for(int j=1;j<9;j+=2)
						{
							cout<<"c"<<i<<j<<"+"<<"d"<<i<<j<<"+";
						}
				}
			for(int i=2;i<9;i+=2)
				{
					for(int j=2;j<9;j+=2)
						{
							cout<<"c"<<i<<j<<"+"<<"d"<<i<<j<<"+";
						}
				}
			cout << "<=1" << endl;
			
			for(int i=1;i<9;i+=2)
				{
					for(int j=2;j<9;j+=2)
						{
							cout<<"c"<<i<<j<<"+"<<"d"<<i<<j<<"+";
						}
				}
			for(int i=2;i<9;i+=2)
				{
					for(int j=1;j<9;j+=2)
						{
							cout<<"c"<<i<<j<<"+"<<"d"<<i<<j<<"+";
						}
				}
			cout << "<=1" << endl;
			
	
	return 0;
}
