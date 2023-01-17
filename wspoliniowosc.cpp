#include <iostream>
struct Point
{
    int x, y;
};
void colinear(Point a, Point b, Point c);
int main()
{
    using namespace std;
    int t;
    cin>>t;
    while(t>0){
    Point a, b, c;
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
    colinear(a,b,c);
    t--;
    }
}
//Punkty sa wspolniowe jesli pole trojkata przez nie utworzonego jest rowne 0
void colinear(Point a, Point b, Point c)
{
    int P = 0.5 * (a.x * (b.y - c.y) +b.x*(c.y-a.y) + c.x*(a.y-b.y));
    if(P==0)
        std::cout<<"TAK\n";
    else 
        std::cout<<"NIE\n";
}