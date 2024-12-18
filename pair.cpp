/*
	pair hossa struct ar aunorop 
	struct hossa normal functoin ar pair hossa builting function



*/
/*#include<bits/stdc++.h>
using namespace std;
pair<int,int> p;
int main(){
	p.first = 1;
	p.second = 2;
	cout << p.first << endl;
	cout << p.second << endl;

}*/

//..........................

/*#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<string,vector<int>> p;
	cin >> p.first;
	for(int i = 0; i < 5; i++){
		int n;
		cin >> n;
		p.second.push_back(n);		
	}

	cout << p.first << ": ";
	vector<int> :: iterator it;
	for(it = p.second.begin(); it != p.second.end(); it++){
		cout << *it << " ";
	}
}*/


//------------------------
//make pair use 

/*#include<bits/stdc++.h>
#include <utility>
using namespace std;
int main(){
	pair<int,vector<int>> p;
	p = make_pair(2,vector<int>{1,2,3,4});
	cout << p.first << endl;
	vector<int> v = p.second;
	for(auto i : v){
		cout << i << " ";
	}
	
	return 0;
}*/


/*#include<bits/stdc++.h>
#include <iterator>
using namespace std;
int main(){
	pair<int,vector<int>> p;
	cin >> p.first;
	for(int i = 0; i < p.first; i++){
		int n;
		cin >> n;
		p.second.push_back(n);
	}
	vector<int> :: iterator it;
	for(it = p.second.begin(); it != p.second.end(); it++){
		cout << *it << " ";
	}
	return 0;
}*/

//--------------------------------

/*#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<vector<string>,vector<int> > p;
	for(int i = 0; i < 3; i++) {
		string s;
		int n;
		cin >> s >> n;
		p.first.push_back(s);
		p.second.push_back(n);
	}
	for(int i = 0; i < n; i++) {
		cout << p.first[i] << " " << p.second[i] << endl;
	}
	return 0;
}*/

//--------------------------------
//max min function use in pair


/*#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,int> p1,p2;
	p1 = {1,2};
	p2 = {2,4};
	pair<int,int> p = max(p1,p2);
	cout << p.first << " " << p.second;
	return 0;
}*/


//------------------------------
//vector pair use and print

/*#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int>> v;
	v.push_back({1,2});
	v.push_back({3,5});
	v.push_back({2,6});
	v.push_back({4,3});
	v.push_back({5,1});
	sort(v.begin(),v.end());
	for(auto i : v){
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}*/

//------------------------------


/*#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int>> v;
	for(int i = 0; i < 3; i++) {
		int a,b;
		cin >> a >> b;
		v.push_back({a,b});
	}
	for(int i = 0; i < 3; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;

}*/


//-----------------------------
// using the unique function;;

/*#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<string,int>> v;
	v.push_back({"saurav",12});
	v.push_back({"momin",12});
	v.push_back({"karim",12});
	v.push_back({"younus",12});
	v.push_back({"mohammad",12});
	v.push_back({"mohammad",12});
	sort(v.begin(),v.end());
	int ss = unique(v.begin(), v.end())- v.begin();
	for(int i = 0; i < ss; i++){
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}*/

//----------------------------------------------------

/*#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<pair<string,string>> v(n);
	
	for(int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(),v.end());
	int v1size = unique(v.begin(),v.end()) - v.begin();
	cout << v1size << endl;


			4
			sddqllmmpk syded
			fprsq fnenjnaz
			n hdej
			sddqllmmpk syded

			3



	return 0;
}*/


//--------------------------------------

/*#include<bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;
bool cmp(const pair<int,int> &p1,const pair<int,int> &p2){
	if(p1.first > p2.second){
		return 1;
	}else if(p1.first == p2.second){
		return (p1.second < p2.second);
	}
	return 0;
}
int main(){
	int n,k,ans = 0;
	cin >> n >> k;
	vector<pair<int,int>> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(),v.end(),cmp);
	for(auto i : v){
		if(i == v[k - 1]){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}*/

/////////////////////////////////////////////////////
////////////////////////////////////////////////////
//important pair declear..........
/*

	#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,string>> v;
    
    for(int i = 0; i < 3; i++){
        int f;
        string s;
        cin >> f >> s;
        v.push_back(make_pair(f,s));
    }

    vector<pair<int,string>> :: iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << it -> first << it -> second << endl;
    }

    return 0;
}




*/