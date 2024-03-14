//To use vector container

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout <<"Items in the vector are: ";
    for(int i = 0; i < v.size(); i++)
    cout << v[i]<< " ";
    cout<<endl;

    cout<<"The last item to be removed is: "<<v.back()<<endl;
    v.pop_back();

    cout <<"Items in the vector after removing the last item is: ";
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout << endl;

    return 0;


}