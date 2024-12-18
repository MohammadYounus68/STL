#include <algorithm>
#include<bits/stdc++.h>
#include <functional>
#include <string>
#include <vector>
using namespace std;
#define PI 3.14159
// typedef long long ll;
// using ll = long long int;
#define ll long long

void problem1() {
    // address print kore (&) symbol dea;

    int n = 5;
    cout << &n << endl;
    int *ptr;
    ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;

    /*
        int *ptr;
        *ptr = &n (dela kaj korba na) ata kaj korar upai hossa
        ptr = &n (dela kaj koraba);

        int *ptr = &n (dela kaj korba)
        
        cout << *ptr ( ai vabe oy address ar value print korba)
        cout << ptr (sudo ptr lakle address print korba) 

    */
}

void problem2() {
    int n = 5;
    cout << "N value: " << n << endl;
    cout << "N of address: " << &n << endl;
    int *p = &n;
    cout << "N memory address use p pointer addresss now: " << p << endl;
    cout << "p pointer value now: " << *p << endl;
    *p = 10;
    cout << "N new value: " << n << endl;
    /* *p = 10 (n ar value change hoya jabe bcz amra 
        n ar memory address use korachi p pointer a tai 
        p ar value change korla n ar value o change hoya jabe);
    */ 
}
//==========================

void problem3(void *numberptr,char type) { // void pointer essa muto type nea jai
    switch (type) {
        case 'i': cout << *((int*)numberptr) << endl;break;// handle int*;
        case 'c': cout << *((char*) numberptr) << endl; break;// handle char*;

    }
}

/*
    int main() {
            int number = 5;
            char letter = 'a';
            char type; cin >> type;
            problem3(&number,type);
            problem3(&letter,type);
    }
*/

//===========================================

// array of pointer
/*
    # array only arr lakle address print korba
    # *(arr +0) lakao ja only arr[0] lakao tai
    bcz *(arr +0) dea point korta che oy address ka

*/

void problem4() {
    int arr[5] = { 1,2,3,4,5 };
    cout << arr << endl;
    cout << &arr[0] << endl; // 0 number address deba; 
    cout << *(arr +0) << endl;
    cout << "All index address print:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << (arr +i) << endl;
    }
    /*
        &arr[i] == (arr +i) //same
        arr[i] == *(arr +i) //same
    */
}

//===========================================

// min and max check for pointer use    

void problem5() {
    int arr[5] = { 5,2,1,4,3 };
    int *max,*min;
    max = &arr[0];
    min  = &arr[0];
    for(int i = 0; i < 5; i++) {
        if(arr[i] > *max) {
            max = &arr[i];
        }
        if(arr[i] < *min) {
            min = &arr[i];
        }
    }
    cout << "max: " << *max << endl;
    cout << "min: " << *min << endl;


}

int main() {

    // problem1();
    // problem2();
    //problem3();
    // problem4();
    problem5();

}


