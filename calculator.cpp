#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

void addition(){
    cout<<"Enter The Number:";
    int x,y;  //declaration of variables
    cin>>x>>y;
    cout<<"The addition of "<<x<<"and"<<y<<"is"<<x+y<<endl;

}

void subtraction(){
    cout<<"Enter The Number:";
    int x,y;  //declaration of variables
    cin>>x>>y;
    cout<<"The subtraction of "<<x<<"and"<<y<<"is"<<x-y<<endl;

}


void multiplication(){
    cout<<"Enter The Number:";
    int x,y;  //declaration of variables
    cin>>x>>y;
    cout<<"The multiplication of "<<x<<"and"<<y<<"is"<<x*y<<endl;

}

void divisiom(){
    cout<<"Enter The Number:";
    int x,y;  //declaration of variables
    cin>>x>>y;
    cout<<"The division of "<<x<<"and"<<y<<"is"<<(float)x/(float)y<<endl;

}

//n!=n(n-1)(n-2)......
void factorial(){
    cout<<"Enter The Number:";
    int n;  //declaration of variables
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of "<<n<<"is"<<fact<<endl;
}

void power(){
    cout<<"Enter the number:";
    int x,y;
    cin>>x>>y;
    int power=pow(x,y);
    cout<<"The power of x to the y is:"<<power<<endl;
}

void square(){
    cout<<"Enter the number:";
    int x;
    cin>>x;
    int power=pov(x,2);
    cout<<"The square of x is:"<<power<<endl;
}

void cube(){
    cout<<"Enter the number:";
    int x;
    cin>>x;
    int power=pov(x,3);
    cout<<"The cube of x is:"<<power<<endl;
}

void squareroot(){
    cout<<"Enter the number:";
    int x;
    cin>>x;
    int power=sqrt(x);
    cout<<"The squareroot of x is:"<<power<<endl;
}


//driver code
int main()
{
    cout<<"CALCULATOR"<<endl;

    cout<<"Enter 1 for addition\n";
    cout<<"Enter 2 for subtraction\n";
    cout<<"Enter 3 for multiplication\n";
    cout<<"Enter 4 for division\n";
    cout<<"Enter 5 for factorial\n";
    cout<<"Enter 6 for power\n";
    cout<<"Enter 7 for square\n";
    cout<<"Enter 8 for cube\n";
    cout<<"Enter 9 for squareroot\n";
    cout<<"Enter 0 to exit\n";

    int choice;
    
    cout<<"Enter your Choice:";
    cin>>choice;
    switch(choice){
        case 1:
        addition();
        break;

        case 2:
        subtraction();
        break;

        case 3:
        multiplication();
        break;

        case 4:
        division();
        break;

        case 5:
        factorial();
        break;

        case 6:
        power();
        break;

        case 7:
        square();
        break;

        case 8:
        cube();
        break;

        case 9:
        squareroot();
        break;

        case 0:
        exit();
        break;

        default:
        cout<<"Your choice is invalid \n";
        break;

    }
    return 0;
}
