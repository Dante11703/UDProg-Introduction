#include "std_lib_facilities.h"
int cond;
int main()
try {
//cout << "Success!\n"; //1. nagy betuvel volt a Cout
//cout << "Success!\n"; //2. nem volt bezarva a macskakorom
//cout << "Success" << "!\n"; //3. megint macskakorom hiba volt illetve pontosvesszp
//cout << "Success!" << "\n"; //4. macskakorom helyett aposztrof volt hasznalva illetve kis betuvel volt irva.	
//int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";	//string volt int kellett
//vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";  //szogletes zarojel es egyenlo
//if (!cond) cout << "Success!\n"; else cout << "Fail!\n";	//kellett deklaralni es negativ
//bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n"; //!c nem c	
//string s = "ape"; bool c = "fool"<s; if (!c) cout << "Success!\n";	//bool es !c
//string s = "ape"; if (s=="ape") cout << "Success!\n";	//rossz volt az if statement
 //string s = "ape"; if (s!="fool") cout << "Success!\n"; //cout es if
//string s = "ape"; if (s+"fool") cout < "Success!\n"; // if statement es cout megint
//vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout <<"Success!\n";	//i<v
//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout <<"Success!\n"; //helyes
//string s = "Success!\n"; for (int i=0; i<9; ++i) cout << s[i]; //i<9
//if (true) cout << "Success!\n"; else cout << "Fail!\n"; //nem kell then
//int x = 2000; int c = x; if (c==2000) cout << "Success!\n"; //nem volt megfelelo a valtozo tipusa
 //string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];	//kisebb mint 9 kene legyen h ne legyen ott a szokoz de igy is helyes
//vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";	//vektor tipust meg kellett adni
//int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n"; //++i	
 //int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout <<"Success!\n";	//valamely karakterek hibasak voltak, illetve nem lehet osztani 0val. tobb fele megoldas lehetseges
//string s = "Success!\n"; for (int i=0; i<=10; ++i) cout <<s[i];	//nem kellett a char
 //int i=0,j=9; while (i<10) ++i; if (j<i) cout << "Success!\n"; //j-t deklarald, es alakitsd az egyik elozo alponthoz
//int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";	//valamelyik karakterek hibasak voltak
//cout << "Success!\n";	//nem cin hanem cout kell
keep_window_open();
return 0;
}	
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}