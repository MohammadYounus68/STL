/*
1.list declear
2.push_back();
3.push_front();//
4.front();
5.back();
6.pop_front();//
7.pop_back();
8.size();
9.clear();
10.empty();
11.insert();//
12.erase(); //
13.remove();//
14.reverse();//
15.sort();
16.swap();
18.merge();//

** list declear vector ar mutoy but list value print korta hola iterator dea 
print korta hoy.

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
	list<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	li.push_back(5);
	li.push_front(6);

	list<int> :: iterator it;
	// for(it = li.begin(); it != li.end(); it++){
		// cout << *it << " ";
	// }
	it = li.begin();
	advance(it,3);
	li.insert(it,5);
	for(auto it : li){
		cout << it << " ";
	}
	
	return 0;
}