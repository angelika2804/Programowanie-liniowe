#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main (void) {
		for(int i=1;i<19;i++)
		{
			for(int j=1;j<19;j++)
				{
					if(j>i)
						cout<<"x"<<i<<j<<"+";
					if(i>j)
						cout<<"x"<<j<<i<<"+";
											
				}		
				cout << "=2;" << endl;
		}
		
		cout <<endl;
		cout << "bin ";
		for(int i=1;i<19;i++)
		{
			for(int j=1;j<19;j++)
				{
					if(j>i)
						cout<<"x"<<i<<j<<",";
											
					
				}		
		}
		cout << ";" << endl;
		cout <<endl;
		for(int i=1;i<17;i++)   //cykl 3
		{
			for(int j=i+1;j<18;j++)
			{
				for(int k=j+1;k<19;k++)
				{
					cout<<"x"<<i<<j<<"+"<<"x"<<i<<k<<"+"<<"x"<<j<<k<<"<=2;"<<endl;
				}
			}
		}
		for(int i=1;i<16;i++)   //cykl 4
		{
			for(int j=i+1;j<17;j++)
			{
				for(int k=j+1;k<18;k++)
				{
					for(int l=k+1;l<19;l++)
						cout<<"x"<<i<<j<<"+"<<"x"<<i<<l<<"+"<<"x"<<j<<k<<"+"<<"x"<<k<<l<<"<=3;"<<endl;
				}
			}
		}
		for(int i=1;i<15;i++)   //cykl 5
			for(int j=i+1;j<16;j++)
				for(int k=j+1;k<17;k++)
					for(int l=k+1;l<18;l++)
						for(int m=l+1;m<19;m++)
							cout<<"x"<<i<<j<<"+"<<"x"<<i<<m<<"+"<<"x"<<j<<k<<"+"<<"x"<<k<<l<<"+"<<"x"<<l<<m<<"<=4;"<<endl;
		for(int i=1;i<14;i++)   //cykl 6
			for(int j=i+1;j<15;j++)
				for(int k=j+1;k<16;k++)
					for(int l=k+1;l<17;l++)
						for(int m=l+1;m<18;m++)
							for(int n=m+1;n<19;n++)
								cout<<"x"<<i<<j<<"+"<<"x"<<i<<n<<"+"<<"x"<<j<<k<<"+"<<"x"<<k<<l<<"+"<<"x"<<l<<m<<"+"<<"x"<<m<<n<<"<=5;"<<endl;
		for(int i=1;i<13;i++)   //cykl 7
			for(int j=i+1;j<14;j++)
				for(int k=j+1;k<15;k++)
					for(int l=k+1;l<16;l++)
						for(int m=l+1;m<17;m++)
							for(int n=m+1;n<18;n++)
								for(int p=n+1;p<19;p++)
									cout<<"x"<<i<<j<<"+"<<"x"<<i<<p<<"+"<<"x"<<j<<k<<"+"<<"x"<<k<<l<<"+"<<"x"<<l<<m<<"+"<<"x"<<m<<n<<"+"<<"x"<<n<<p<<"<=6;"<<endl;
		
	return 0;
}
