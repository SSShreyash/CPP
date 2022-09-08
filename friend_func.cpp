#include<iostream>
#include<math.h>

using namespace std;


class Points{
    int x,y;
    friend void distanceCalc(Points, Points);      //can be declared in private or public same result.
    public:
    Points(int,int);
    void dispPoint(){
        cout<<"Coordinates: ("<<x<<", "<<y<<")"<<endl;
    }
};

void distanceCalc(Points p, Points q){
    double distance = sqrt(((p.x-q.x)*(p.x-q.x))+((p.y-q.y)*(p.y-q.y)));
    cout<<"Distance between the given two points is: "<<distance;
}

//Constructor definition.
Points :: Points(int a, int b){
        x = a;
        y = b;
    }

int main(){
    Points p(2,2);
    p.dispPoint();
    
    Points q(4,4);
    q.dispPoint();

    distanceCalc(p,q);

    return 0;
}