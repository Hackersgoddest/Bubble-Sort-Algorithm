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
    cout<<"Before Sorting\n";//Displays the results before sorting.
    for(int i = 0; i <= n - 1; i++) {
      cout<<num[i]<<" ";
    }
    cout<<"\n";
    /*
    I make i to be less than or equal to (n - 2)
    in order to keep swap routine from going outside
    the range of the array.
    */ // I mean line 35
    /* Formula for Bubble sort */ // Thus line 31 to 45.
    bool flag = 1; //The flag is to check whether swapping of numbers have taken place or not,flag initially set to 1 means swapping has taken place.
    while(flag == 1) { //This condition is telling the computer to loop through the array again so far as swapping takes place inside the loop.
        flag = 0;//Initially reset flag to 0 inside the loop means swapping has not take place yet.
        int i = 0;
        while(i <= n - 2) {
            double temp;
            if(num[i] > num[i+1]) {
              temp = num[i];
              num[i] = num[i+1];
              num[i+1] = temp;
              flag = 1;//flag is set to 1 if swap takes place inside the loop
            }
            i++;
        }
    }
    cout<<"After Sorting\n"; //Displays results after sorting
    for(int i = 0; i <= n-1; i++) {
      cout<<num[i]<<" ";
    }
    return 0;
}
