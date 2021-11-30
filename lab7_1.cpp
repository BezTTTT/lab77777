#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string s1,s2,s3,s4;
	cout << "Input text: " ;
	cin >> s1;
    cout << "Reversed text: " << func1(s1) << "\n" ;
	s3 = func1(s1);
	s4 = func2(s3);
	s2 = func2(s1);
	if( s4 == s2 ){
		cout << "Palindrome: " << "Yes" ;
	}
	else{
		cout << "Palindrome: " << "No" ;
	}
    return 0;
}
