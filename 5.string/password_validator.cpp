//password validator
//if string has 1 small alphabate and 1 capital alphabate and 1 number then only the string is valid password

#include <iostream>
#include <string>
using namespace std;

bool isValid(string pass)
{
    int len = pass.size();
    bool isNum = false;
    bool isCap = false;
    bool isSmall = false;
    
    
    for(int i=0; i<len; i++)
    {
        if(pass[i]>=48 && pass[i] <=57)
        {
            isNum = true;
        }
        else if(pass[i]>=65 && pass[i]<=90)
        {
            isCap = true;
        }
        else if(pass[i]>=97 && pass[i]<=122)
        {
            isSmall = true;
        }
    }
    
    if(isNum == true && isSmall == true && isCap == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string pass;
	    cin>>pass;
	    
	    bool check = isValid(pass);
	    if(check == true)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}