#include <bits/stdc++.h>
using namespace std;

void move(int disks, char src, char des, char aux){

    /*******************************************************************
    *               source          destination         auxilary (temp)
    *               n disks         0 disk              0 disk
    *   
    *   move (n-1) disks source -> auxilary
    *   
    *               source          destination         auxilary (temp)
    *               1 disk          0 disk              n-1 disks
    *   
    *   move last disk source -> destination
    *   
    *               source          destination         auxilary (temp)
    *               0 disk          1 disk              n-1 disks
    *   
    *   move (n-1) disks auxilary -> destination
    *   
    *               source          destination         auxilary (temp)
    *               0 disk          n disks             0 disk
    *********************************************************************/
    static int step = 0;


    if (disks == 1){
        cout << "Step " << step++ << ": Move " << src << " to " << des << endl;
    } else {
        move(disks - 1, src, aux, des);
        move(1, src, des, aux);
        move(disks - 1, aux, des, src);
    }
}

int main(){
    int n;
    cout << "Number of disks your want to move: ";
    cin >> n;

    move(n, 'A', 'C', 'B');

    return 0;
}