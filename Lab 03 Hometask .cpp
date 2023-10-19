#include<iostream>
using namespace std;
// Task 1.
   int main ()
{
int x,c,v,n,b;
cout << "For Punjab press 1\nFor Sindh press 2\nFor KPK press 3\nFor Balochistan press 4" << endl;
cin >> n;
x=30523371;
c=110012442;
v=47886051;
b=12334408;
switch (n)
{
case 1:
cout << "Population is "<<c << endl;
break
;case 2:
cout << "Population is "<<v << endl;
break;
case 3:
cout << "Population is "<<x << endl;
break
;case 4:
cout << "Population is "<<b<< endl;
break;
default:
cout << "Please write correct integer for province selection" << endl;
break;
}
}

// Task 2:
//int main()
//{
// char x;
// int c,v,b,n,m;
// cout <<"Please Write the alphabet.";
// cin>>x;
// if (x=='a'|| x=='e' || x=='i'|| x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
// {
// c=1;
// }
// else
// {
// c=2;
// }
// switch (c)
// {
//
// case 1:
// cout<<"The Alphabet is vovel";
// break;
// case 2:
// cout<<"The Alphabet is Consonant";
// break;
//}
//}
// Task 3.
//int main ()
//{
// int x,c,v,b,n,m;
// cout<<"Please write the Number: ";
// cin>>x;
// if (x<0)
// {
// c=1;
// }
// else if(x>0)
// {
// c=2;
// }
// else if (x==0)
// {
// c=3;
// }
// switch (c)
// {
// case 1:
// cout<<"The integer is negative";
// break;
// case 2:
// cout<<"The Integer is Positive";
// break;
// case 3:
// cout<<"The integer in equal to 0";
// break;
// default:
// cout<<"Please write an integer.";
// break;
// }
//}
// Task 4.
//int main ()
//{
// int x,c,v,b,n,m;
// cout<<"What is your age:";
// cin>>x;
// if(x>=0)
// {
// if(x>=0 && x<=12)
// {
// cout<<"You are a Child.";
// }
// else if(x>12 && x<=19)
// {
// cout<<"You are a teenager.";
// }
// else if(x>19)
// {
// cout<<"You are an Adult.";
// }
// }
// else if(x<0)
// {
// cout<<"Age can not be negative";
// }
//}

//Task 5.
//int main ()
//{
// int x,c,v,b,n,m;
// cout<<"What are The Numbers \n";
// cin>>b;
// cin>>c;
// cin>>v;
// x=0;
// if(x==0)
// {
// if(b>c && b>v)
// {
// cout<<"The largest Number is "<<b<<endl;
// }
// else if(c>x && c>v)
// {
// cout<<"The largest Number is "<<c<<endl;
// }
// else if(v>c &&v>x)
// {
// cout<<"The largest Number is "<<v<<endl;
// }
// }
// else
// {
// cout<<"There is a problem.";
// }
//}
// Task 6.
//int main()
//{
// char x;
// int c,v,b,n,m;
// cout <<"Please Write the alphabet.";
// cin>>x;
// v=0;
// if(v==0)
// {
//
// if (x=='a'|| x=='e' || x=='i'|| x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
// {
// cout<<"The Alphabet is Vovel.";
// }
// else{
// cout<<"The Alphabet is Consonant.";
// }
// }
// else
// {
// cout<<"This Can't be Possible. ";
// }
//}


