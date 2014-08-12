#include "VEC3F.h"
#include <iostream>

using namespace std;

int main() {
	VEC3F v1 = VEC3F (2,3,5);
	v1.testle();
	VEC3F v2 = VEC3F (13,11,7);
	
	cout<<"vector 1: ";
	cout<<v1<<endl;
	cout<<"vector 2: "<<v2<<endl;
	
	VEC3F v3 = v1+v2;
	VEC3F v4 = v1;
	v4+=v2;
	cout<<v1<<" + "<<v2<<" = "<<v3<<" "<<v4<<endl;
	
	v3 = v1-v2;
	v4=v1;
	v4-=v2;
	cout<<v1<<" - "<<v2<<" = "<<v3<<" "<<v4<<endl;
	
	float f = 2;
	float g;
	
	v3 = v1*f;
	v4=v1;
	v4*=f;
	cout<<v1<<" * "<<f<<" = "<<v4<<endl;
	
	v3 = v1/f;
	v4=v1;
	v4/=f;
	cout<<v1<<" / "<<f<<" = "<<v3<<" "<<v4<<endl;
	
	g = v1 < v2;
	cout<<v1<<" dot "<<f<<" = "<<g<<endl;
	
	v4 = v1 > v2;
	cout<<v1<<" cross "<<v2<<" = "<<v4<<endl;
}