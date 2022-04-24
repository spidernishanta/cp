#include<bits/stdc++.h>
#include<string>
using namespace std;
int bsdk(char* str){
    int count = 0;

    for (int i = 0; i < strlen(str); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}
main()
{
	char s[100];
	cin>>s;
	int c=bsdk(s);
	if(c%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
}


