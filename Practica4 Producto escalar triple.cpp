	
#include <iostream>
using namespace std;
int main() {
  int vec1[3], vec2[3], vec3[3],pet=0;
	for (int i = 0; i < 3; i++)
	{ 
		cout << "Introduce valor " << i + 1 << " del primer arreglo: ";
		cin >> vec1[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Introduce valor " << i + 1 << " del segundo arreglo: ";
		cin >> vec2[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Introduce valor " << i + 1 << " del tercer arreglo: ";
		cin >> vec3[i];
	}
	pet += vec1[0] * vec2[1] * vec3[2];
	pet += vec1[1] * vec2[2] * vec3[0];
	pet += vec1[2] * vec2[0] * vec3[1];
	pet -= vec1[2] * vec2[1] * vec3[0];
	pet -= vec1[0] * vec2[2] * vec3[1];
	pet -= vec1[1] * vec2[0] * vec3[2];
	cout << "El resultado es: " << pet;
}
