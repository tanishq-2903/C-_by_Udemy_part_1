#include<iostream>
using namespace std;
int main(){
	int a,u,v;
	float speed;
	cout<<"the values of a,u,v="<<endl;
	cin>>a>>u>>v;
	speed=(v*v-u*u)/(2*a);
	cout<<"speed="<<speed<<endl;
}
