// // VALID ANAGRAM(brute-force)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string a = "Manish";
//     string b = "Namish";
//     int i = 0;
//     int j = 0;
//     int count=a.length();
//     for (int p = 0; p < a.length(); p++)
//     {
//         if (a[i] == b[j])
//         {
//             if (j == b.length())
//             {
//                 break;
//             }
//             a.erase(i, 1);
//             b.erase(j, 1);
//             j=0;
//             i++;
//             j++;
//             count--;
//             if(count==0){
//                 cout<<"ANAGRAM";
//             }
//             else{
//                 cout<<"NOT AN ANAGRAM";
//             }
//         }
//         if (a[i] != b[j])
//         {
//             j++;
//         }
//     }
//     return 0;
// }

// wrong solution

// ___________________________________________________________

// 2nd try

// bruteforce

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i = 0;
//     int j = 0;
//     string a;
//     cout << "Enter the string a : ";
//     cin >> a;
//     string b;
//     cout << "Enter the string b : ";
//     cin >> b;
//     if (a.length() == b.length())
//     {
//         int count = a.length();
//         for (int p = 0; p < a.length(); p++)
//         {
//             for (int q = 0; q < b.length(); q++)
//             {
//                 if (a[p] == b[q])
//                 {
//                     count--;
//                 }
//             }
//         }
//         if (count == 0)
//         {
//             cout << "both the given strings are anagram";
//         }
//         if (count >0)
//         {
//             cout << "not an anagram";
//         }
//     }
//     return 0;
// }

// correct solution ,but T.C is N square 

