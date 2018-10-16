//Counting whether all vowels are present in the string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    set<char>s;
    for(int i=0;i<st.length();i++){
        if(st[i]=='a')
            s.insert('a');
        else if(st[i]=='e')
            s.insert('e');
        else if(st[i]=='i')
            s.insert('i');
        else if(st[i]=='o')
            s.insert('o');
        else if(st[i]=='u')
            s.insert('u');
    }
	
    if(s.size()==5)
    	cout << "YES" << endl;
    else
	cout << "NO" << endl;

	return 0;
}
