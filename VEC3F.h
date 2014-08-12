#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std; 
class VEC3F {
	private:
		float elements[3];
	public:
		void testle() {cout<<"whatup "<<endl;};
		VEC3F(float s=0.0); //constructor that makes every element of elements an s
		VEC3F(float x, float y, float z); //constructor
		
		VEC3F(const VEC3F& vector); // copy constructor, copy VEC3F parameter
		VEC3F(const float vector[3]); // copy constructor, copy float array parameter
		VEC3F& operator=(const VEC3F&v); //overload =, copy VEC3F v
		VEC3F& operator=(float s); //overload =, set copy VEC3F with float s as every element
		float getMagnitude(); //get magnitude of vector
  float& operator[](int i)       { return elements[i]; }
  float  operator[](int i) const { return elements[i]; }		inline VEC3F& operator += (const VEC3F& v); //adds VEC3F v to current vector
		inline VEC3F& operator -= (const VEC3F& v); //subtracts VEC3F v to current vector
		inline VEC3F& operator *= (float s); //multiplies every element in current vector by float s
		inline VEC3F& operator /= (float s); //divides every element in current vector by float s
		void normalize(); //normalize vector
		VEC3F normal(); //return copy of current vector normalized
		
};

inline VEC3F& VEC3F::operator += (const VEC3F& v){ //adds VEC3F vector to current vector
	elements[0]+= v[0]; elements[1] += v[1]; elements[2]+=v[2];
	}
inline VEC3F& VEC3F::operator -= (const VEC3F& v){ //subtracts VEC3F vector to current vector
	elements[0]-= v[0]; elements[1] -= v[1]; elements[2]-=v[2];
	}
inline VEC3F& VEC3F::operator *= (float s){ //multiplies every element in current vector by float s
	elements[0]*= s; elements[1] *= s; elements[2]*=s;
	}
inline VEC3F& VEC3F::operator /= (float s){ //divides every element in current vector by float s
	elements[0]/= s; elements[1] /= s; elements[2]/=s;
	}
	
	
inline VEC3F operator+(const VEC3F& u, const VEC3F&v) { //add vectors u and v
	return VEC3F(u[0]+v[0],u[1]+v[1],u[2]+v[2]);
}	
inline VEC3F operator-(const VEC3F& u, const VEC3F&v) { // subtract vectors u and v
	return VEC3F(u[0]-v[0],u[1]-v[1],u[2]-v[2]);
}	
inline VEC3F operator-(const VEC3F& v) { //negate vector v
	return VEC3F(-v[0],-v[1],-v[2]);
}	
inline VEC3F operator/(const VEC3F& v, float s) { //divide elements in vector v by float s
	return VEC3F(v[0]/s,v[1]/s,v[2]/s);
}	
inline float operator<(const VEC3F& u, const VEC3F&v) { //dot product of vectors v and u 
	return(u[0]*v[0]+u[1]*v[1]+u[2]*v[2]);
}
inline VEC3F operator*(const VEC3F& u, const VEC3F&v) { //multiply elements of vector v by elements of vector u
	return(u[0]*v[0]+u[1]*v[1]+u[2]*v[2]);
}	
inline VEC3F operator*(const VEC3F& v, float s) { //multiply elements of vector v by float s
	return VEC3F(v[0]*s,v[1]*s,v[2]*s);
}	
inline VEC3F operator>(const VEC3F& u, const VEC3F&v) { //cross product of vectors v and u
	return VEC3F(u[1]*v[2]-v[1]*u[2], -u[0]*v[2]+v[0]*u[2], u[0]*v[1]-v[0]*u[1]);
}	
inline std::ostream &operator<<(std::ostream &out, const VEC3F& v)
  { return out << "(" << v[0] << ", " << v[1] << ", " << v[2] << ")"; }


