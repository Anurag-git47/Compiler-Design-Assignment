#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<float> p1(3); //To store coordintes of first point
    vector<float> p2(3); //To store coordintes of second point
    
    cout<<"Enter x coordinate of 1st point : ";
    cin>>p1[0];
    cout<<"\nEnter y coordinate of 1st point : ";
    cin>>p1[1];
    cout<<"\nEnter z coordinate of 1st point : ";
    cin>>p1[2];
    cout<<"\nEnter x coordinate of 2nd point : ";
    cin>>p2[0];
    cout<<"\nEnter y coordinate of 2nd point : ";
    cin>>p2[1];
    cout<<"\nEnter z coordinate of 2nd point : ";
    cin>>p2[2];
    vector< vector<float> > arr ;
    arr.push_back(p1);
    arr.push_back(p2);
    int i=1;
    for(const auto & pnt : arr){
        cout<<"x coordinate of point "<<i<<" : "<<pnt[0]<<endl;
        cout<<"y coordinate of point "<<i<<" : "<<pnt[1]<<endl;
        cout<<"z coordinate of point "<<i<<" : "<<pnt[2]<<endl;
        i++;
    }
    float dist = sqrt(pow((p2[0] - p1[0]),2) +
                        pow((p2[1] - p1[1]),2) +
                        pow((p2[2] - p1[2]),2)); //Used the distance formula.
    float distance = round(dist*100)/100.0;
    cout<<"So, required distance between the points ("<<p1[0]<<","<<
        p1[1]<<","<<p1[2]<<") and ("<<p2[0]<<","<<p2[1]<<","<<p2[2]<<") : "<<distance;
    return 0;
}

