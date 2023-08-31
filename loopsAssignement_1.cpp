
/*

// print all the odd numberes form 1 to 100

#include <iostream>
using namespace std;
int main(){
   //  First Method  \\
// for(int i=1;i<=100;i++){
// if(i%2!=0){
//     cout<<i<<"\t";
//         }
// }
      // second method//

 for(int i=1;i<=99;i+=2)
 cout<< i <<"\t";
    return 0;
}

*/
/*
// print all the numbers from 1 to 100 that are divisible by 3

#include <iostream>
using namespace std;
int main(){
// first method   \\

// for(int i=1;i<=100;i++){
// if(i%3==0){
//     cout<< i <<"\t";
// }
// }

// second method
for(int i=3;i<100;i+=3)
cout<< i<<"\t";
    return 0;
}

*/
/*
// 3:: print the table of n, here n is an integer which the user will input

#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the integer n:";
cin>>n;
for(int i=1;i<=10;i++)
cout<<n<<"x"<< i<<"=" <<n*i<<endl;
    return 0;
}
*/
/*
// que:4-  Display this AP : 4,7,10,13....up to n terms


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    for(int i=4;i<=(3*n+1);i+=3)
   cout<<i<<"\t";

    return 0;
}
*/

// que:5- display the GP: 3,12,48,....upto n terms

/*
#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cout<<"Enter the number n:";
cin>>n;
for(int i=3;i<=3*pow(4,n-1);i*=4)
cout<<i<<"\t";
    return 0;
}

*/

// WAP to print all the ascii values and their equivalents characters of 26 alphabets using while loop



// #include <iostream>
// using namespace std;
// int main(){
// int  i=65;
// while(i<=90){
//     cout<<"ASCII value:"<<i <<  "   Equivalent character:"<<char(i)<<endl;
//     i++;
    
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
char ch='A';
while(ch<='Z'){
cout<<int(ch)<<":"<<ch<<endl;
ch++;
}
    return 0;
}