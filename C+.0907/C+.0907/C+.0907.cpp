#include <iostream>
#include <typeinfo>
using namespace std;

//template <class T> //Ä£°å¹Ø¼ü×Ö
//void swapArgs(T &a,T &b){
//
//	T tmp;
//	cout << typeid(tmp).name() << endl;
//	tmp = a;
//	a = b;
//	b = tmp;
//
//}
//
//template <typename T>
//int findArgs(T * src,size_t n, T f){
//	int i;
//	for (i = 0; i < n; i++){
//		if (src[i] == f){
//			return i;
//		}
//	}
//	return -1;
//}

template <typename T>
T add(T a, T b){
	return a + b;
}

int main1(){

	/*int ia = 5, ib = 7;
	double da = 3.14, db = 1.618;

	swapArgs(ia, ib);
	cout << ia <<' '<< ib << endl;

	swapArgs(da, db);
	cout << da << ' ' << db << endl;*/

	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	cout << findArgs(arr, 7, 5) << endl;*/

	cout << add<int>(2, 5) << endl;

	system("pause");
	return 0;
}