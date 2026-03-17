#include <iostream>
using namespace std;
#include "sorting.h"
#include <cstdlib>

int main(int argc, char * argv[]) 
{
    
  cout<<"argc is "<<argc<<endl;
    int i,N;
    int *a;
    a=new int[argc-1];
    for(i=1;i<argc;i++)
    {
        cout<<"argv[" << i <<"]" << argv[i] <<endl;
        a[i-1]=atoi(argv[i]);
    }
    /* Convert to numbers*/
    N=argc-1;
    cout<<"Before sorting:";
    display(a,N); //can display only when "a" has a value
    
    sort(a,N);
    cout<<"After sorting:";
    display(a,N);

    delete[] a;
    
    return 0;
}
