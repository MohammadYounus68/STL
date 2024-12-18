#include<bits/stdc++.h>
#include <utility>
using namespace std;
const int M = 1e9 + 7;
// using ll = long long int;
// #define long long ll
typedef long long ll ;

/*
	1.Map Declaration.
	2.insert()
	3.at(),operator '[]'
	4.size()
	5.begin(),end();
	6.max_size();
	7.empty();
	8.erase();
	9.clear();
	10.count();
	11.find();
	12.upper_bound();
	13.lower_bound();
	14.operator '=';
	15 swap();

*/

//============================================
/*// map declration different way
int main() {
	//1 way;
	map<int,int> mp = {{1,2}};
	
	// 2 way 
	map<string,int> m;
	m.insert({"saruav",1});

	//3 way
	map<string,int> mpp;
	mpp.insert(make_pair("saruv",2));

	//4 way
	map<int, int> mp;
    mp[1] = 2;
    
    //5 way
    std::map<int, int> mp;
    mp.emplace(1, 2);

	// make_pair na use korla {} 3rd bracket use korta hoy

	return 0;
}*/

//==================================================
	
	//vector element frequency check
	// element vector a koy bar kore ase
	/*int main() {

		map<int,int> mp;
		vector<long long> v = {1,212393939393,212393939393,212393939393,3,3,2,1};

		for(int i = 0; i < v.size(); i++) {
			mp[v[i]]++;
		} 

		for(int i = 0; i < v.size(); i++) {
			cout << mp[v[i]] << endl;
		}
		return 0;
	}*/
//==================================================

	//make_pair use and map print;

	/*map<string,int> id;
    id.insert(make_pair("saurav",1));
    id.insert(make_pair("ahshan",2));
    id.insert(make_pair("mohammad",3));
    id.insert(make_pair("younus",4));
    map<string,int> :: iterator it;

    for(it = id.begin(); it != id.end(); it++) {
        cout << it -> first << " " << it -> second << "\n";
    }*/
//==================================================
	
	// for loop use map input;

	/*map<int,int> m;
	for(int i = 0; i < 4; i++) {
        int a,b;
        cin >> a >> b;
        m.insert({a,b});
    }

    for(auto i : m) {
        cout << i.first << " " << i.second << "\n";
    }*/

//==================================================

	//map a input a insert a make_pair use kore input system;

	/*map<string,int> mp;
    for(int i = 0; i < 3; i++) {
        string s; int m;
        cin >> s >> m;
        mp.insert(make_pair( s,m));
    }

    for(auto i : mp) {
    	cout << i.first << " " << i.second << "\n";
    }*/
      
//==================================================
	//map a string index hesabe and value hesabe vector use


		/* #include <bits/stdc++.h>
			using namespace std;
			int main() {

		    map<string,vector<int>> mp;
		    for(int i = 0; i  < 2; i++) {
		        cout << "Enter ID Name: ";
		        string s; cin >> s;
		        cout << "Vector input size: ";
		        int a; cin >> a;
		        vector<int> v;
		        for(int i = 0; i < a; i++) {
		            int num; cin >> num;
		            v.push_back(num);
		        }
		        mp[s] = v;
		    }
		    cout << "Output: " << endl;
		    for(auto i : mp) {
		        cout << i.first << "= ";
		        for(auto j : i.second) {
		            cout << j;
		        }
		        cout << endl;
		    }
		    return 0;
		}*/


 /*
        saurav
        2
        1 2
        mohammad
        2 3
        2
        OUT PUT:
        mohammad 32
        saurav 12

    */


//==================================================

/*
	string num;
    map<string,int> mp;
    vector<string> v(4);
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    for(auto i : v) {
        mp[i]++;
        for(auto i : mp) {
            if(i.second == 1) {
                num = i.first;
            }
        }
    }
    cout << num << endl;*/


    //=============================
    //input;2 2 2 1 3
    //output: jar index bashi sei value print korba;
    /*int num = 0,majority_number;
    vector<int> v(5);
    for(int i = 0; i < 5; i++) {
        cin >> v[i];
    }
    map<int,int> m;
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size() / 2; i++) {
        m[v[i]]++;
    }
    for(auto i : m) {
        num = max(num,i.second);
        if(num >= 0) {
            majority_number = i.first;
        }
    }
    cout << majority_number;*/
//==================================================
	/*
		*vector ar vitor pair use kroe doyta datatype input nea and map ar 
		maddome ta print kora;
			input
			saruav 1
			lubna 2
			eva 4
			tultul 3
			nova 3
			
			output

			eva=4
			lubna=2
			nova=3
			saruav=1
			tultul=3
									vector<pair<int,int>> v(n);
    								for(int i = 0; i < n; i++) {
       								cin >> v[i].first >> v[i].second;
   									 } 								

	vector<pair<string,int>> v;
    for(int i = 0; i < 5; i++) {
        string s; cin >> s;
        int x; cin >> x;
        v.push_back({s,x});
    }
    
    map<string,int> mp;
    for(auto i : v) {
        mp.insert({i.first,i.second});
    }
    for(auto i : mp) {
        cout << i.first << "=" << i.second << endl;
    }

	*/


//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================
//==================================================


