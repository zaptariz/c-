            #include <bits/stdc++.h>

            using namespace std;

            bool string_check(string, string);

            bool string_check(string str1, string str2)
            {
                int length_of_str1 = str1.length();
                int length_of_str2 = str2.length();
                cout<<" length of the string_1 : "<< length_of_str1<<"\n";
                cout<<" length of the string_2 : "<< length_of_str2<<"\n";
                if (length_of_str1 != length_of_str2)
                    return false;

                sort(str1.begin(), str1.end());
                sort(str2.begin(), str2.end());
                cout<<" rearrange of string_1 : "<< str1<<"\n";
                cout<<" rearrange of string_2 : "<< str2<<"\n";

                for (int i = 0; i <= length_of_str1; i++)
                {
                    if (str1[i] != str2[i])
                        return false;
                }
                return true;
            }

            int main()
            {
                string str1, str2;
                cout << " Enter the first string : " << endl;
                getline(cin,str1);
                cout << "  Enter the se string :  " << endl;
                getline(cin,str2);
                if (string_check(str1, str2))
                    cout << "given two strings are anagram " << endl;
                else
                    cout << "given two strings are not anagram " << endl;
                return 0;
            }