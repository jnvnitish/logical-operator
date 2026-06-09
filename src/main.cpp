#include <iostream>
using namespace std;
int main(){
    int num{};
    const int lower{10};
    const int upper{20};  

    cout<<boolalpha;

    // cout<<"enter the number between bounds-"<<lower<<" and  "<<upper<<endl;

    // cin>>num;
    
    // bool within_bounds {false};
    // within_bounds=(num>lower && num<upper);

    // cout<<num<< " is between "<< lower<<" and " << upper <<" : "  << within_bounds <<endl;
    
//}

// cout<<" enter the number outside the the bounds are:"<<lower<< " and "<<upper<<endl;
// cin>>num;
// bool outside_bounds{false};
// outside_bounds=(num<lower||num>upper);

// cout<<num<< " is outside "<<lower<<" and "<<upper<<" : "<<outside_bounds<<endl;
// }
//determine if  a entered number id on the boundary

cout <<" enter the number that is on the boundary are: "<<lower<<" and "<<upper<<endl;
cin>>num;
 bool on_boundary{false};
 on_boundary=(num==lower||num==upper);
 cout<<num<<" is on one of the boundary "<<lower<<" and "<<upper<<" : "<<on_boundary<<endl;
}