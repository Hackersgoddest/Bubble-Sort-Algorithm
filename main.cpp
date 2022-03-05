/* BUBBLE SORT ALGORITHM */
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    double y, num[10000];
    cout<<"Enter the numbers you want to sort,Enter -999 when you are done: ";
    cin>>y;
    while(y != -999) {
      num[n] = y;
      n++;
      system("cls");
      cout<<"Enter the next number,Enter -999 when you are done: ";
      cin>>y;
    }
    system("cls");
    cout<<"Before Sorting\n";
    for(int i = 0; i <= n - 1; i++) {
      cout<<num[i]<<" ";
    }
    cout<<"\n";
    /*
    I make i to be less than or equal to (n - 2)
    in order to keep swap routine from going outside
    the range of the array.
    */
    bool flag = 0;
    while(flag == 0) {
        flag = 1;
        int i = 0;
        while(i <= n - 2) {
            double temp;
            if(num[i] > num[i+1]) {
              temp = num[i];
              num[i] = num[i+1];
              num[i+1] = temp;
              flag = 0;
            }
            i++;
        }
    }
    cout<<"After Sorting\n";
    for(int i = 0; i <= n-1; i++) {
      cout<<num[i]<<" ";
    }
    return 0;
}
