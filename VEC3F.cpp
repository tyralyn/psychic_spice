#include "VEC3F.h"

using namespace std;

VEC3F::VEC3F(float s) {  //constructor that makes every element of elements an s
	elements[0]=elements[1]=elements[2]=s;
	}

VEC3F::VEC3F(float x, float y, float z){ //constructor
	elements[0]=x; elements[1]=y; elements[2]=z;
	}

VEC3F::VEC3F(const VEC3F& v){ // copy constructor, copy VEC3F parameter
	*this = v;
	}

VEC3F::VEC3F(const float v[3]){ // copy constructor, copy float array parameter
	elements[0]=v[0]; elements[1]=v[1]; elements[2]=v[2];
	}

VEC3F& VEC3F::operator=(const VEC3F&v){ //overload =, copy VEC3F v
	elements[0]=v[0]; elements[1]=v[1]; elements[2]=v[2];
	return *this;
	}

VEC3F& VEC3F::operator=(float s){ //overload =, set copy VEC3F with float s as every element
	elements[0]=elements[1]=elements[2]=s;
	return *this;
	}
float VEC3F::getMagnitude(){ //get magnitude of vector
	float m = elements[0]*elements[0] + elements[1]*elements[1] + elements[2]*elements[2];
	return sqrt(m); 
	}
	
/*float& VEC3F::operator[](int i){ //access element of vector with bracket indices
	cout<<"yellw";
	cout<<elements[i];	
	return elements[i];
	}
	
float VEC3F::operator[](int i) const{ //access element of vector with bracket indices
	cout<<"hiello";
	cout<<elements[i];
	return elements[i];
	}*/
	
void VEC3F::normalize(){ //normalize vector
	float m = getMagnitude();
	if (m!=0.0)
		*this /= sqrt(m);
}
VEC3F VEC3F::normal(){ //return copy of current vector normalized
	VEC3F* v = new VEC3F(elements[0], elements[1], elements[2]);
}