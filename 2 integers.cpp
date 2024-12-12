#include<iostream>
using namespace std;
int main () 
{
	int x,y;
	cout<<" Enter first number: ";
	cin>>x;
	cout<<" Enter second number: ";
	cin>>y;
	if(x>y){
		cout<<x<<" is greater\n";
		if(x%2==0){
			cout<<x<<" is even\n";
			for(int i=1; i<11;  i++){
				cout<<i<<"\n";
			}
		}
		else{
			cout<<x<<" is Odd\n";
			for(int j=10; j>0; j--){
				cout<<j<<"\n";
			}
		}
	}
	else{
		cout<<y<<" is greater\n";
		if(y%2==0){
			cout<<y<<" is even\n";
			for(int i=1;i<11;i++){
				cout<<i<<"\n";
			}
		}
		else{
			cout<<y<<" is Odd\n";
			for(int j=10; j>0; j--){
				cout<<j<<"\n";
			}
		}
		
	}
}